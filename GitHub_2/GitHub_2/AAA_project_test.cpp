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
	BOOST_TEST_CHECK(numbers_lt_20_to_string(20)==string("Дватцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(30)==string("Тридцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(40)==string("Сорок"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(50)==string("Пятьдесять"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(60)==string("Шестьдесять"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(70)==string("Семьдесять"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(80)==string("Восемьдесять"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(90)==string("Девяноста"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(100)==string("Сто"));
  }

#endif