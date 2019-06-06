#ifdef TEST

#define BOOST_TEST_MODULE TEST1
#include <boost/test/included/unit_test.hpp>
#include "test_Header.h"

BOOST_AUTO_TEST_CASE( test_case1 )
{
	BOOST_TEST_CHECK(numbers_lt_20_to_string(0)==string("Ноль"));
    BOOST_TEST_CHECK(numbers_lt_20_to_string(1)==string("Один"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(2)==string("Два"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(3)==string("Три"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(4)==string("Четыре"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(5)==string("Пять"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(6)==string("Шесть"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(7)==string("Семь"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(8)==string("Восемь"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(9)==string("Девять"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(10)==string("Десять"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(11)==string("Одиннадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(12)==string("Двенадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(13)==string("Тринадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(14)==string("Четырнадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(15)==string("Пятьнадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(16)==string("Шестьнадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(17)==string("Семьнадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(18)==string("Восемьнадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(19)==string("Девятьнадцать"));	
}
BOOST_AUTO_TEST_CASE( test_case2 )
{
	BOOST_TEST_CHECK(numbers_lt_100_to_string(0)==string("Ноль"));
    BOOST_TEST_CHECK(numbers_lt_100_to_string(1)==string("Один"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(2)==string("Два"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(3)==string("Три"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(4)==string("Четыре"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(5)==string("Пять"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(6)==string("Шесть"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(7)==string("Семь"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(8)==string("Восемь"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(9)==string("Девять"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(10)==string("Десять"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(11)==string("Одиннадцать"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(12)==string("Двенадцать"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(13)==string("Тринадцать"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(14)==string("Четырнадцать"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(15)==string("Пятьнадцать"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(16)==string("Шестьнадцать"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(17)==string("Семьнадцать"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(18)==string("Восемьнадцать"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(19)==string("Девятьнадцать"));	
	BOOST_TEST_CHECK(numbers_lt_100_to_string(7)==string("Семь"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(10)==string("Десять"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(21)==string("двадцать Один"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(32)==string("тридцать Два"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(43)==string("сорок Три"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(54)==string("пятьдесять Четыре"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(65)==string("шестьдесять Пять"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(79)==string("семьдесять Девять"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(86)==string("восемьдесять Шесть"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(97)==string("девяносто Семь"));
}
BOOST_AUTO_TEST_CASE( test_case3 )
{
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(7)==string("Семь"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(10)==string("Десять"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(21)==string("двадцать Один"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(32)==string("тридцать Два"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(43)==string("сорок Три"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(54)==string("пятьдесять Четыре"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(65)==string("шестьдесять Пять"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(79)==string("семьдесять Девять"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(86)==string("восемьдесять Шесть"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(97)==string("девяносто Семь"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(100)==string("сто"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(120)==string("сто двадцать"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(123)==string("сто двадцать Три"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(200)==string("двести"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(300)==string("триста"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(400)==string("четыреста"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(500)==string("пятьсот"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(600)==string("шестьсот"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(700)==string("семьсот"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(800)==string("восемьсот"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(900)==string("девятьсот"));
}
BOOST_AUTO_TEST_CASE( test_case4 )
{
	BOOST_TEST_CHECK(currency_to_string(25, "рубль", "рубля", "рублей", 73, "копейка", "копейки", "копеек") == string ("двадцать Пять рублей, семьдесять Три копейки"));
	BOOST_TEST_CHECK(currency_to_string(85, "рубль", "рубля", "рублей", 75, "копейка", "копейки", "копеек")== string ("восемьдесять Пять рублей, семьдесять Пять копеек"));
	BOOST_TEST_CHECK(currency_to_string(15, "рубль", "рубля", "рублей", 79, "копейка", "копейки", "копеек")== string ("Пятьнадцать рублей, семьдесять Девять копеек"));
	BOOST_TEST_CHECK(currency_to_string(46, "рубль", "рубля", "рублей", 78, "копейка", "копейки", "копеек")== string ("сорок Шесть рублей, семьдесять Восемь копеек"));
	BOOST_TEST_CHECK(currency_to_string(25, "рубль", "рубля", "рублей", 78, "копейка", "копейки", "копеек")== string ("двадцать Пять рублей, семьдесять Восемь копеек"));
	BOOST_TEST_CHECK(currency_to_string(11, "рубль", "рубля", "рублей", 43, "копейка", "копейки", "копеек")== string ("Одиннадцать рублей, сорок Три копеек"));
	BOOST_TEST_CHECK(currency_to_string(22, "рубль", "рубля", "рублей", 53, "копейка", "копейки", "копеек")== string ("двадцать Два рубля, пятьдесять Три копейки"));
	BOOST_TEST_CHECK(currency_to_string(21, "рубль", "рубля", "рублей", 13, "копейка", "копейки", "копеек")== string ("двадцать Один рубль, Тринадцать копеек"));
	BOOST_TEST_CHECK(currency_to_string(30, "рубль", "рубля", "рублей", 53, "копейка", "копейки", "копеек")== string ("тридцать рублей, пятьдесять Три копейки"));
	BOOST_TEST_CHECK(currency_to_string(15, "рубль", "рубля", "рублей", 23, "копейка", "копейки", "копеек")== string ("Пятьнадцать рублей, двадцать Три копейки"));
	BOOST_TEST_CHECK(currency_to_string(49, "рубль", "рубля", "рублей", 1, "копейка", "копейки", "копеек")== string ("сорок Девять рублей, одна копейка"));
	BOOST_TEST_CHECK(currency_to_string(22, "рубль", "рубля", "рублей", 43, "копейка", "копейки", "копеек")== string ("двадцать Два рубля, сорок Три копейки"));
	BOOST_TEST_CHECK(currency_to_string(52, "рубль", "рубля", "рублей", 73, "копейка", "копейки", "копеек")== string ("пятьдесять Два рубля, семьдесять три копейки"));
	BOOST_TEST_CHECK(currency_to_string(43, "рубль", "рубля", "рублей", 2, "копейка", "копейки", "копеек")== string ("сорок Три рублей, Два копейка"));
}
//BOOST_AUTO_TEST_CASE( test_case5 )
//{
//	BOOST_TEST_CHECK(object_100_to_string(1, "шар", "шара", "шаров") == string("один шар"));
//	BOOST_TEST_CHECK(object_100_to_string(1, "предмет", "предмета", "предметов") == string("один предмет"));
//	BOOST_TEST_CHECK(object_100_to_string(3, "предмет", "предмета", "предметов") == string("три предмета"));
//	BOOST_TEST_CHECK(object_100_to_string(6, "предмет", "предмета", "предметов") == string("шесть предметов"));
//	BOOST_TEST_CHECK(object_100_to_string(11, "предмет", "предмета", "предметов") == string("одиннадцать предметов"));
//	BOOST_TEST_CHECK(object_100_to_string(13, "предмет", "предмета", "предметов") == string("тринадцать предметов"));
//	BOOST_TEST_CHECK(object_100_to_string(17, "предмет", "предмета", "предметов") == string("семьнадцать предметов"));
//	BOOST_TEST_CHECK(object_100_to_string(21, "предмет", "предмета", "предметов") == string("двадцать один предмет"));
//	BOOST_TEST_CHECK(object_100_to_string(22, "предмет", "предмета", "предметов") == string("двадцать два предмета"));
//	BOOST_TEST_CHECK(object_100_to_string(30, "предмет", "предмета", "предметов") == string("тридцать предметов"));
//	BOOST_TEST_CHECK(object_100_to_string(38, "предмет", "предмета", "предметов") == string("тридцать восемь предметов"));
//	BOOST_TEST_CHECK(object_100_to_string(264, "предмет", "предмета", "предметов") == string("двести шестьдесять четыре предмета"));
//}
#endif