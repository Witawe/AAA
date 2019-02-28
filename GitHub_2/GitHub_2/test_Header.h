#include <string>

using namespace std;

string numbers_lt_20_to_string(int number){
	string answer;
	switch(number){
	case 0:answer = "����";break;
	case 1:answer = "����";break;
	case 2:answer = "���";break;
	case 3:answer = "���";break;
	case 4:answer = "������";break;
	case 5:answer = "����";break;
	case 6:answer = "�����";break;
	case 7:answer = "����";break;
	case 8:answer = "������";break;
	case 9:answer = "������";break;
	case 10:answer = "������";break;
	case 11:answer = "�����������";break;
	case 12:answer = "����������";break;
	case 13:answer = "����������";break;
	case 14:answer = "������������";break;
	case 15:answer = "�����������";break;
	case 16:answer = "������������";break;
	case 17:answer = "�����������";break;
	case 18:answer = "�������������";break;
	case 19:answer = "�������������";break;
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
	case 2:answer = "��������";break;
	case 3:answer = "��������";break;
	case 4:answer = "�����";break;
	case 5:answer = "����������";break;
	case 6:answer = "�����������";break;
	case 7:answer = "����������";break;
	case 8:answer = "������������";break;
	case 9:answer = "���������";break;
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
	case 1:answer = "���";break;
	case 2:answer = "������";break;
	case 3:answer = "������";break;
	case 4:answer = "���������";break;
	case 5:answer = "������";break;
	case 6:answer = "��������";break;
	case 7:answer = "�������";break;
	case 8:answer = "���������";break;
	case 9:answer = "��������";break;
	default:break;
	}
	if (remainder != 0)
	{
	answer +=" "+numbers_lt_100_to_string(remainder);
	}
	return answer;
}







