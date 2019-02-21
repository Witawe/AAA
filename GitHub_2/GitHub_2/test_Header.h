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
	case 20:answer = "Дватцать";break;
	case 30:answer = "Тридцать";break;
	case 40:answer = "Сорок";break;
	case 50:answer = "Пятьдесять";break;
	case 60:answer = "Шестьдесять";break;
	case 70:answer = "Семьдесять";break;
	case 80:answer = "Восемьдесять";break;
	case 90:answer = "Девяноста";break;
	case 100:answer = "Сто";break;
	default: break;
	}
	return answer;	
}