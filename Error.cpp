#include "Error.h"
namespace Error
{
	// 0   - 99 - ��������� ������
	// 100 - 109 - ������ ����������
	// 110 - 119 - ������ �������� � ������ ������
	// 120 - 129 - ����������� ������
	// 600 - 610  - �������������� ������
	// 700 - 710  - ������������� ������

	// TODO: �������� � ������ ������
	// 1. ��������� ������ �� ����������������� (���������, ��� ��� ��������), �������� + ��� -
	// 2. �������� � ������ ������


	ERROR errors[ERROR_MAX_ENTRY] =
	{
		ERROR_ENTRY(0, "[SYS]: ������������ ��� ������"), // ��� ������ ��� ��������� 0 - ERROR_MAX_ENTRY
		ERROR_ENTRY(1, "[SYS]: ��������� ����"),
		ERROR_ENTRY(2, "[SYS]: ������������ ���������� ������"),
		ERROR_ENTRY(3, "[SYS]: "),
		ERROR_ENTRY_NODEF(4),
		ERROR_ENTRY_NODEF(5),
		ERROR_ENTRY_NODEF(6),
		ERROR_ENTRY_NODEF(7),
		ERROR_ENTRY_NODEF(8),
		ERROR_ENTRY_NODEF(9),
		ERROR_ENTRY_NODEF10(10),
		ERROR_ENTRY_NODEF10(20),
		ERROR_ENTRY_NODEF10(30),
		ERROR_ENTRY_NODEF10(40),
		ERROR_ENTRY_NODEF10(50),
		ERROR_ENTRY_NODEF10(60),
		ERROR_ENTRY_NODEF10(70),
		ERROR_ENTRY_NODEF10(80),
		ERROR_ENTRY_NODEF10(90),
		ERROR_ENTRY(100, "[PARM]: �������� -in ������ ���� �����"), // +
		ERROR_ENTRY_NODEF(101),
		ERROR_ENTRY_NODEF(102),
		ERROR_ENTRY_NODEF(103),
		ERROR_ENTRY(104, "[PARM]: ��������� ����� �������� ���������"), // +
		ERROR_ENTRY_NODEF(105),
		ERROR_ENTRY_NODEF(106),
		ERROR_ENTRY_NODEF(107),
		ERROR_ENTRY_NODEF(108),
		ERROR_ENTRY_NODEF(109),
		ERROR_ENTRY(110, "[IN]: ������ ��� �������� ����� � �������� ����� (-in)"), // +
		ERROR_ENTRY(111, "[IN]: ������������ ������ � �������� ����� (-in)"), // +
		ERROR_ENTRY(112, "[IN]: �������� ������ ������� �������� ����� (-in)"), // +
		ERROR_ENTRY(113, "[IN]: �������� ������ ������� �������"), // +
		ERROR_ENTRY(114, "[IN]: ���������� ����������� �������"), // +
		ERROR_ENTRY(115, "[IN]: ������� ������ ��������� ������������ ������"), // +
		ERROR_ENTRY(116, "[IN]: ���������� ����������� �������� ������ �� ��������� � ����������� �����������"), // +
		ERROR_ENTRY_NODEF(117),
		ERROR_ENTRY_NODEF(118),
		ERROR_ENTRY_NODEF(119),
		ERROR_ENTRY(120, "[LA]: ������ ��� ������� ������"), // +
		ERROR_ENTRY(121, "[LA]: ������������ ������������� �������������"), // +
		ERROR_ENTRY(122, "[LA]: ������������� �� ����� ����"),
		ERROR_ENTRY_NODEF(123),
		ERROR_ENTRY(124, "[LA]: ����������� ����� �����"), // +
		ERROR_ENTRY(125, "[LA]: ���������� ������ ����� �����"),
		ERROR_ENTRY_NODEF(126),
		ERROR_ENTRY_NODEF(127),
		ERROR_ENTRY_NODEF(128),
		ERROR_ENTRY_NODEF(129),
		ERROR_ENTRY(130, "[ITable]: ������ �������� ������� ���������������: ������ ��������� ���������� ��������"), // +
		ERROR_ENTRY(131, "[LTable]: ������ �������� ������� ���������: ������ ��������� ���������� ��������"), // +
		ERROR_ENTRY(132, "[ITable]: ������ ���������� � ������� ������: �������� ����������� ������ �������"), // +

		ERROR_ENTRY_NODEF(136),
		ERROR_ENTRY_NODEF(137),
		ERROR_ENTRY_NODEF(138),
		ERROR_ENTRY_NODEF(139),
		ERROR_ENTRY_NODEF10(140),
		ERROR_ENTRY_NODEF10(150),
		ERROR_ENTRY_NODEF10(160),
		ERROR_ENTRY_NODEF10(170),
		ERROR_ENTRY_NODEF10(180),
		ERROR_ENTRY_NODEF10(190),
		ERROR_ENTRY_NODEF100(200),
		ERROR_ENTRY_NODEF100(300),
		ERROR_ENTRY_NODEF100(400),
		ERROR_ENTRY_NODEF100(500),

		ERROR_ENTRY(600, "[Syntaxis]: �������� ��������� ���������"),
		ERROR_ENTRY(601, "[Syntaxis]: ��������� ��������"),
		ERROR_ENTRY(602, "[Syntaxis]: ������ � ���������"),
		ERROR_ENTRY(603, "[Syntaxis]: ������ � ���������� �������"),
		ERROR_ENTRY(604, "[Syntaxis]: ������ � ���������� ���������� �������"),
		ERROR_ENTRY(605, "[Syntaxis]: ������ ����� � ���������"),
		ERROR_ENTRY(606, "[Syntaxis]: ������ ��������������� �������"),
		ERROR_ENTRY(607, "[Syntaxis]: ������ �������� �����������"),
		ERROR_ENTRY_NODEF(608),
		ERROR_ENTRY(609, "[Syntaxis]: ���������� �������������� ������ (������ ������ Log)"),
		ERROR_ENTRY_NODEF10(610),
		ERROR_ENTRY_NODEF10(620),
		ERROR_ENTRY_NODEF10(630),
		ERROR_ENTRY_NODEF10(640),
		ERROR_ENTRY_NODEF10(650),
		ERROR_ENTRY_NODEF10(660),
		ERROR_ENTRY_NODEF10(670),
		ERROR_ENTRY_NODEF10(680),
		ERROR_ENTRY_NODEF10(690),

		ERROR_ENTRY(700, "[Semantic]: ��������� ���������� ��������������"),
		ERROR_ENTRY(701, "[Semantic]: ������ � ������������ ��������"),
		ERROR_ENTRY(702, "[Semantic]: ������ � ������������ ��������� � �������: ���������� ���������� �� ���������"),
		ERROR_ENTRY(703, "[Semantic]: ������ � ������������ ��������� � �������: ���� ���������� �� ���������"),
		ERROR_ENTRY(704, "[Semantic]: �������� ���� ������ � ���������"),
		ERROR_ENTRY(705, "[Semantic]: ������ ��������: � ���������� ��� ����� �������"),
		ERROR_ENTRY(706, "[Semantic]: ������ ��������: �������� ���������"),
		ERROR_ENTRY(707, "[Semantic]: ������ ��������: ��������� ��� ������������� ��������"),
		ERROR_ENTRY(708, "[Semantic]: ��������� ��������: ������ ����� ������ ����������"),
		ERROR_ENTRY(709, "[Semantic]: ��������� ��������� �������� �����������: ������ �� ����� ���� ����������� �������� �����������"),
		ERROR_ENTRY(710, "[Semantic]: ��������� ��������: ��� ���� char ��������� ������ �������� + � -"),
		ERROR_ENTRY_NODEF10(720),ERROR_ENTRY_NODEF10(730),ERROR_ENTRY_NODEF10(740),
		ERROR_ENTRY_NODEF10(750),ERROR_ENTRY_NODEF10(760),ERROR_ENTRY_NODEF10(770),ERROR_ENTRY_NODEF10(780),
		ERROR_ENTRY_NODEF10(790),
		ERROR_ENTRY_NODEF100(800), ERROR_ENTRY_NODEF100(900)
	};
	ERROR geterror(int id)
	{
		ERROR out;

		if (0 > id || id > ERROR_MAX_ENTRY)
			out = errors[0];
		else
			out = errors[id];
		return out;
	}
	ERROR geterrorin(int id, int line = -1, int col = -1)
	{
		ERROR out;

		if (0 > id || id > ERROR_MAX_ENTRY)
			out = errors[0];
		else
			out = errors[id];
		out.inext.line = line;
		out.inext.col = col;
		return out;
	}
}