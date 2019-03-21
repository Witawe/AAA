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
		switch(tens){
			case 1:answer = "������";break;
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
	if (number < 20) 
		answer = numbers_lt_20_to_string(number);
	else if (remainder != 0)
		answer +=" "+numbers_lt_20_to_string(remainder);
	return answer;
}

string numbers_lt_1000_to_string(int number){
	string answer,str="";
	int C = number / 100;
	int remainder = number % 100;
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
	if (remainder != 0 && number>100)  
		str+=" "+ numbers_lt_100_to_string(remainder);
	if (number<100)
		answer=numbers_lt_100_to_string(remainder);
	answer+=str;
	return answer;
}

string object_100_to_string(int number, string s1, string s2, string s3){
	string answer;
	int remainder = number % 10;
	answer = numbers_lt_1000_to_string(number);
	if (number > 10 & number < 15)
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
}

string currency_to_string(int integer_value, string si1, string si2, string si3, 
						  int decimal_value, string sd1, string sd2, string sd3)
{
    string answer;
	answer = object_100_to_string(integer_value, si1, si2, si3);
	if (decimal_value)
		answer += ", " + object_100_to_string(integer_value, si1, si2, si3);
    return answer;
}







