#include <string>

using namespace std;

string numbers_lt_20_to_string(int number)
{
	string answer;

		switch(number)
		{
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

string numbers_lt_100_to_string(int number)
{
	string answer;
	int tens = number / 10;
	int remainder = number % 10;
	if (number < 20) answer = numbers_lt_20_to_string(number);
	else {
		switch (tens)
		{
			case 2: answer = "двадцать"; break;
			case 3: answer = "тридцать"; break;
			case 4: answer = "сорок"; break;
			case 5: answer = "пятьдесять"; break;
			case 6: answer = "шестьдесять"; break;
			case 7: answer = "семьдесять"; break;
			case 8: answer = "восемьдесять"; break;
			case 9: answer = "девяносто"; break;
			default: break;
		}
		if (remainder!= 0) {
			answer += " " + numbers_lt_20_to_string(remainder);
		}
	}
	return answer;
}

string numbers_lt_1000_to_string(int number)
{
	string answer;
	int hundreds = number / 100;
	int remainder = number % 100;
	if (number < 100) answer = numbers_lt_100_to_string(number);
	else {
		switch (hundreds)
		{
			case 1: answer = "сто"; break;
			case 2: answer = "двести"; break;
			case 3: answer = "триста"; break;
			case 4: answer = "четыреста"; break;
			case 5: answer = "пятьсот"; break;
			case 6: answer = "шестьсот"; break;
			case 7: answer = "семьсот"; break;
			case 8: answer = "восемьсот"; break;
			case 9: answer = "девятьсот"; break;
		}
		if (remainder!= 0) {
			answer += " " + numbers_lt_100_to_string(remainder);
		}
	}

	return answer;
}

string object_100_to_string(int number, string s1, string s2, string s3)
{
	string answer;
	int remainder = number % 10;
	answer = numbers_lt_1000_to_string(number);
	if ((number > 10) && (number < 15))
		answer = answer + " " + s3;
	else
		switch (remainder)
	{
		case 1: answer += " " + s1;break; 
		case 2: answer += " " + s2;break;
		case 3: answer += " " + s2;break;
		case 4: answer += " " + s2;break;
		default: answer += " " + s3;break;
	}
	return answer;
}

string currency_to_string(int integer_value, string si1, string si2, string si3, 
						  int decimal_value, string sd1, string sd2, string sd3)
{
        string answer;
	if (integer_value) {
		answer = object_100_to_string(integer_value, si1, si2, si3);
		if (decimal_value) answer = answer + ", " + object_100_to_string(decimal_value, sd1, sd2, sd3);
	}
	else
	{
		if (decimal_value) answer = object_100_to_string(decimal_value, sd1, sd2, sd3);
	}
    return answer;
}







