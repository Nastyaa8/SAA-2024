#include "tchar.h"
#include <iostream>
#include <locale>
#include <cwchar>
#include "MFST.h"
#include "Error.h"
#include "Parm.h"
#include "Log.h"
#include "In.h"
#include "FST.h"
#include "IT.h"
#include "Semantic.h"
#include "PolishNotation.h"
#include "CodeGeneration.h"


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");

	Log::LOG log = Log::INITLOG;
	Out::OUT out = Out::INITOUT;
	try
	{
		Parm::PARM parm = Parm::getparm(argc, argv); // ��������� ���������� ��������� ������
		log = Log::getlog(parm.log); // ��������� ����
		out = Out::getout(parm.out); // ��������� ����� ������
		Log::WriteParm(log, parm); // ������ ���������� � ���
		Log::WriteLog(log); // ������ ����
		In::IN in = In::getin(parm.in); // ��������� �������� �����
		Log::WriteIn(log, in); // ������ �������� ����� � ���

		LEX::LEX tables(LT::Create(in.lexems.size()), IT::Create(in.lexems.size())); // �������� ������ ������ � ���������������

		Log::WriteLine(log, "--------������ ������������ �������--------", "");
		// ����������� ����������
		FST::LexAnalyzer(in, out, log, tables.lextable, tables.idtable);

		if (parm.showTables)Log::LogTables(log, tables); // ����� ������ � ���
		if (parm.showITables)Log::LogIDTables(log, tables); // ����� ������ ��������������� � ���
		Log::WriteLine(log, "--------����� ������������ �������--------", "");

		Log::WriteLine(log, "--------������ ��������������� �������--------", "");
		if (parm.showMfst)MFST_TRACE_START(log);
		MFST::Mfst mfst(tables, GRB::getGreibach(), parm.showMfst);
		if (!mfst.start(log))
		{
			throw ERROR_THROW(609);
		}
		mfst.savededucation();
		mfst.printrules(log);
		Log::WriteLine(log, "--------����� ��������������� �������--------", "");

		Log::WriteLine(log, "--------������ �������������� �������--------", "");
		//������������� ������
		Semantic::doAnalyse(tables);
		Log::WriteLine(log, "--------����� �������������� �������--------", "");

		//�������� ������
		PolishNotation::DoPolish(tables);

		Log::WriteLine(log, "--------��� ����������� ���������� ��� ������--------", "");

		//��������� ����
		CG::Generate(tables, out);
		Log::WriteLine(log, "--------��� ������� ������������--------", "");

	}
	catch (Error::ERROR e)
	{
		Log::WriteError(log, e);
	}
	Log::Close(log);
}