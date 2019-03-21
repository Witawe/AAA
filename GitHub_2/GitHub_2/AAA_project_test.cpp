#ifdef TEST

#define BOOST_TEST_MODULE TEST1
#include <boost/test/included/unit_test.hpp>
#include "test_Header.h"

BOOST_AUTO_TEST_CASE( test_case1 ){
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
BOOST_AUTO_TEST_CASE( test_case2 ){
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
	BOOST_TEST_CHECK(numbers_lt_100_to_string(21)==string("Двадцать Один"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(32)==string("Тридцать Два"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(43)==string("Сорок Три"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(54)==string("Пятьдесять Четыре"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(65)==string("Шестьдесять Пять"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(79)==string("Семьдесять Девять"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(86)==string("Восемьдесять Шесть"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(97)==string("Девяноста Семь"));
}
BOOST_AUTO_TEST_CASE( test_case3 ){
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(7)==string("Семь"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(10)==string("Десять"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(21)==string("Двадцать Один"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(32)==string("Тридцать Два"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(43)==string("Сорок Три"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(54)==string("Пятьдесять Четыре"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(65)==string("Шестьдесять Пять"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(79)==string("Семьдесять Девять"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(86)==string("Восемьдесять Шесть"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(97)==string("Девяноста Семь"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(100)==string("Сто"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(120)==string("Сто Двадцать"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(123)==string("Сто Двадцать Три"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(200)==string("Двести"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(300)==string("Триста"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(400)==string("Четыреста"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(500)==string("Пятсот"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(600)==string("Шестьсот"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(700)==string("Семьсот"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(800)==string("Восемьсот"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(900)==string("Девятсот"));
}
BOOST_AUTO_TEST_CASE( test_case4 ){
	BOOST_TEST_CHECK(currency_to_string(25, "рубль", "рубля", "рублей", 73, "копейка", "копейки", "копеек"));
	BOOST_TEST_CHECK(currency_to_string(85, "рубль", "рубля", "рублей", 75, "копейка", "копейки", "копеек"));
	BOOST_TEST_CHECK(currency_to_string(15, "рубль", "рубля", "рублей", 79, "копейка", "копейки", "копеек"));
	BOOST_TEST_CHECK(currency_to_string(46, "рубль", "рубля", "рублей", 78, "копейка", "копейки", "копеек"));
	BOOST_TEST_CHECK(currency_to_string(25, "рубль", "рубля", "рублей", 78, "копейка", "копейки", "копеек"));
	BOOST_TEST_CHECK(currency_to_string(11, "рубль", "рубля", "рублей", 43, "копейка", "копейки", "копеек"));
	BOOST_TEST_CHECK(currency_to_string(22, "рубль", "рубля", "рублей", 53, "копейка", "копейки", "копеек"));
	BOOST_TEST_CHECK(currency_to_string(21, "рубль", "рубля", "рублей", 13, "копейка", "копейки", "копеек"));
	BOOST_TEST_CHECK(currency_to_string(30, "рубль", "рубля", "рублей", 53, "копейка", "копейки", "копеек"));
	BOOST_TEST_CHECK(currency_to_string(15, "рубль", "рубля", "рублей", 23, "копейка", "копейки", "копеек"));
	BOOST_TEST_CHECK(currency_to_string(49, "рубль", "рубля", "рублей", 13, "копейка", "копейки", "копеек"));
	BOOST_TEST_CHECK(currency_to_string(22, "рубль", "рубля", "рублей", 43, "копейка", "копейки", "копеек"));
	BOOST_TEST_CHECK(currency_to_string(52, "рубль", "рубля", "рублей", 73, "копейка", "копейки", "копеек"));
	BOOST_TEST_CHECK(currency_to_string(43, "рубль", "рубля", "рублей", 2, "копейка", "копейки", "копеек"));
}
#endif