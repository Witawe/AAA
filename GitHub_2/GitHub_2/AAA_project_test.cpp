#ifdef TEST

#define BOOST_TEST_MODULE TEST1
#include <boost/test/included/unit_test.hpp>
#include "test_Header.h"

BOOST_AUTO_TEST_CASE( test_case1 )
{
	BOOST_TEST_CHECK(numbers_lt_20_to_string(0)==string("����"));
    BOOST_TEST_CHECK(numbers_lt_20_to_string(1)==string("����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(2)==string("���"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(3)==string("���"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(4)==string("������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(5)==string("����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(6)==string("�����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(7)==string("����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(8)==string("������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(9)==string("������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(10)==string("������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(11)==string("�����������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(12)==string("����������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(13)==string("����������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(14)==string("������������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(15)==string("�����������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(16)==string("������������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(17)==string("�����������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(18)==string("�������������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(19)==string("�������������"));	
}
BOOST_AUTO_TEST_CASE( test_case2 )
{
	BOOST_TEST_CHECK(numbers_lt_100_to_string(0)==string("����"));
    BOOST_TEST_CHECK(numbers_lt_100_to_string(1)==string("����"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(2)==string("���"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(3)==string("���"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(4)==string("������"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(5)==string("����"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(6)==string("�����"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(7)==string("����"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(8)==string("������"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(9)==string("������"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(10)==string("������"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(11)==string("�����������"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(12)==string("����������"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(13)==string("����������"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(14)==string("������������"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(15)==string("�����������"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(16)==string("������������"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(17)==string("�����������"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(18)==string("�������������"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(19)==string("�������������"));	
	BOOST_TEST_CHECK(numbers_lt_100_to_string(7)==string("����"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(10)==string("������"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(21)==string("�������� ����"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(32)==string("�������� ���"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(43)==string("����� ���"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(54)==string("���������� ������"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(65)==string("����������� ����"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(79)==string("���������� ������"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(86)==string("������������ �����"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(97)==string("��������� ����"));
}
BOOST_AUTO_TEST_CASE( test_case3 )
{
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(7)==string("����"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(10)==string("������"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(21)==string("�������� ����"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(32)==string("�������� ���"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(43)==string("����� ���"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(54)==string("���������� ������"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(65)==string("����������� ����"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(79)==string("���������� ������"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(86)==string("������������ �����"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(97)==string("��������� ����"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(100)==string("���"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(120)==string("��� ��������"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(123)==string("��� �������� ���"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(200)==string("������"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(300)==string("������"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(400)==string("���������"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(500)==string("�������"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(600)==string("��������"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(700)==string("�������"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(800)==string("���������"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(900)==string("���������"));
}
BOOST_AUTO_TEST_CASE( test_case4 )
{
	BOOST_TEST_CHECK(currency_to_string(25, "�����", "�����", "������", 73, "�������", "�������", "������") == string ("�������� ���� ������, ���������� ��� �������"));
	BOOST_TEST_CHECK(currency_to_string(85, "�����", "�����", "������", 75, "�������", "�������", "������")== string ("������������ ���� ������, ���������� ���� ������"));
	BOOST_TEST_CHECK(currency_to_string(15, "�����", "�����", "������", 79, "�������", "�������", "������")== string ("����������� ������, ���������� ������ ������"));
	BOOST_TEST_CHECK(currency_to_string(46, "�����", "�����", "������", 78, "�������", "�������", "������")== string ("����� ����� ������, ���������� ������ ������"));
	BOOST_TEST_CHECK(currency_to_string(25, "�����", "�����", "������", 78, "�������", "�������", "������")== string ("�������� ���� ������, ���������� ������ ������"));
	BOOST_TEST_CHECK(currency_to_string(11, "�����", "�����", "������", 43, "�������", "�������", "������")== string ("����������� ������, ����� ��� ������"));
	BOOST_TEST_CHECK(currency_to_string(22, "�����", "�����", "������", 53, "�������", "�������", "������")== string ("�������� ��� �����, ���������� ��� �������"));
	BOOST_TEST_CHECK(currency_to_string(21, "�����", "�����", "������", 13, "�������", "�������", "������")== string ("�������� ���� �����, ���������� ������"));
	BOOST_TEST_CHECK(currency_to_string(30, "�����", "�����", "������", 53, "�������", "�������", "������")== string ("�������� ������, ���������� ��� �������"));
	BOOST_TEST_CHECK(currency_to_string(15, "�����", "�����", "������", 23, "�������", "�������", "������")== string ("����������� ������, �������� ��� �������"));
	BOOST_TEST_CHECK(currency_to_string(49, "�����", "�����", "������", 1, "�������", "�������", "������")== string ("����� ������ ������, ���� �������"));
	BOOST_TEST_CHECK(currency_to_string(22, "�����", "�����", "������", 43, "�������", "�������", "������")== string ("�������� ��� �����, ����� ��� �������"));
	BOOST_TEST_CHECK(currency_to_string(52, "�����", "�����", "������", 73, "�������", "�������", "������")== string ("���������� ��� �����, ���������� ��� �������"));
	BOOST_TEST_CHECK(currency_to_string(43, "�����", "�����", "������", 2, "�������", "�������", "������")== string ("����� ��� ������, ��� �������"));
}
//BOOST_AUTO_TEST_CASE( test_case5 )
//{
//	BOOST_TEST_CHECK(object_100_to_string(1, "���", "����", "�����") == string("���� ���"));
//	BOOST_TEST_CHECK(object_100_to_string(1, "�������", "��������", "���������") == string("���� �������"));
//	BOOST_TEST_CHECK(object_100_to_string(3, "�������", "��������", "���������") == string("��� ��������"));
//	BOOST_TEST_CHECK(object_100_to_string(6, "�������", "��������", "���������") == string("����� ���������"));
//	BOOST_TEST_CHECK(object_100_to_string(11, "�������", "��������", "���������") == string("����������� ���������"));
//	BOOST_TEST_CHECK(object_100_to_string(13, "�������", "��������", "���������") == string("���������� ���������"));
//	BOOST_TEST_CHECK(object_100_to_string(17, "�������", "��������", "���������") == string("����������� ���������"));
//	BOOST_TEST_CHECK(object_100_to_string(21, "�������", "��������", "���������") == string("�������� ���� �������"));
//	BOOST_TEST_CHECK(object_100_to_string(22, "�������", "��������", "���������") == string("�������� ��� ��������"));
//	BOOST_TEST_CHECK(object_100_to_string(30, "�������", "��������", "���������") == string("�������� ���������"));
//	BOOST_TEST_CHECK(object_100_to_string(38, "�������", "��������", "���������") == string("�������� ������ ���������"));
//	BOOST_TEST_CHECK(object_100_to_string(264, "�������", "��������", "���������") == string("������ ����������� ������ ��������"));
//}
#endif