#include <string>

using namespace std;

string numbers_lt_20_to_string(int number){
	string answer;
	switch(number){
	case 0:answer = "Ноль";break;
	case 1:answer = "Один";break;
	case 2:answer = "Два";break;
	case 3:answer = "Три";break;
	case 4:answer = "Четыре";break;
	case 5:answer = "Пять";break;
	case 6:answer = "Шесть";break;
	case 7:answer = "Семь";break;
	case 8:answer = "Восемь";break;
	case 9:answer = "Девять";break;
	case 10:answer = "Десять";break;
	case 11:answer = "Одиннадцать";break;
	case 12:answer = "Двенадцать";break;
	case 13:answer = "Тринадцать";break;
	case 14:answer = "Четырнадцать";break;
	case 15:answer = "Пятьнадцать";break;
	case 16:answer = "Шестьнадцать";break;
	case 17:answer = "Семьнадцать";break;
	case 18:answer = "Восемьнадцать";break;
	case 19:answer = "Девятьнадцать";break;
	default: break;
	}
	return answer;	
}
string numbers_lt_100_to_string(int number){
	string answer;
	int tens = number / 10;
	int remainder = number % 10;
	/*if (number < 20) answer = numbers_lt_20_to_string(number);*/
	switch(tens){
	case 2:answer = "Двадцать";break;
	case 3:answer = "Тридцать";break;
	case 4:answer = "Сорок";break;
	case 5:answer = "Пятьдесять";break;
	case 6:answer = "Шестьдесять";break;
	case 7:answer = "Семьдесять";break;
	case 8:answer = "Восемьдесять";break;
	case 9:answer = "Девяноста";break;
	default:break;
	}
	if (remainder != 0)
	{
		answer +=" "+numbers_lt_20_to_string(remainder);
	}
	return answer;
}
string numbers_lt_1000_to_string(int number){
	string answer;
	int C = number / 100;
	int remainder = number % 100;
	/*if (number < 100) answer = numbers_lt_100_to_string(number);*/
	switch(C){	
	case 1:answer = "Сто";break;
	case 2:answer = "Двести";break;
	case 3:answer = "Триста";break;
	case 4:answer = "Четыреста";break;
	case 5:answer = "Пятсот";break;
	case 6:answer = "Шестьсот";break;
	case 7:answer = "Семьсот";break;
	case 8:answer = "Восемьсот";break;
	case 9:answer = "Девятсот";break;
	default:break;
	}
	if (remainder != 0)
	{
	answer +=" "+numbers_lt_100_to_string(remainder);
	}
	return answer;
}







