#include "GiaoDien.h"

void GiaoDien::gotoxy(int x,int y){    
	HANDLE hConsoleOutput;    
	COORD Cursor_an_Pos = {(SHORT)(x-1),(SHORT)(y-1)};   
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);    
	SetConsoleCursorPosition(hConsoleOutput , Cursor_an_Pos);
}

void GiaoDien::textcolor(int x){
	HANDLE mau;
	mau=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau,x);
}

void GiaoDien::setTextColor(int color, std::string text){
    textcolor(color);
    std::cout << text << std::endl;
    textcolor(7);
}

void GiaoDien::ShowCur(bool CursorVisibility){
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConCurInf;
    
    ConCurInf.dwSize = 10;
    ConCurInf.bVisible = CursorVisibility;
    
    SetConsoleCursorInfo(handle, &ConCurInf);
}

void GiaoDien::Nocursortype(bool bVisible)
{
	CONSOLE_CURSOR_INFO Info;
	Info.bVisible = bVisible;
	Info.dwSize = 20;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}