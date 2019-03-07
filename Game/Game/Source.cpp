#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

int main{
	return 0;
}
int generation(int d1, int d2){
	POINT kva;
	HWND hwnd = GetConsoleWindow();
	HDC hdc = GetDC(hwnd);
	SelectObject(hdc, GetStockObject(WHITE_PEN));

	MoveToEx(hdc,50,50,&kva);
	LineTo(hdc, 200, 50);

	ReleaseDC (hwnd, hdc);
	cin.get();
	
	srand(time(NULL));
	int x = d1 + rand() % d2;
	int y = d1 + rand() % d2;
	return 0;
}