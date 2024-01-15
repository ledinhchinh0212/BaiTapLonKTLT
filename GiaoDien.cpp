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

void GiaoDien::KhungGiaoDien(){
    for( int i = 0; i <= 98; i++ ){
        gotoxy(10 + i, 2);
        setTextColor(15, "_");
    }
    for( int i = 0; i <= 98; i++ ){
        gotoxy(10 + i, 27);
        setTextColor(15, "_");
    }
    Nocursortype(FALSE);
}

void GiaoDien::KhungGiaoDienLongFirst(){
	for( int i = 0; i <= 98 + 6 + 8; i++ ){
        gotoxy(4 + i, 2);
        setTextColor(15, "_");
    }
    for( int i = 0; i <= 98 + 6 + 8; i++ ){
        gotoxy(4 + i, 27);
        setTextColor(15, "_");
    }
    Nocursortype(FALSE);
}

void GiaoDien::KhungGiaoDienDanhSachThuVien(){
	for( int i = 0; i <= 98 + 6 + 8 + 4; i++ ){
        gotoxy(2 + i, 2);
        setTextColor(15, "_");
    }
    for( int i = 0; i <= 98 + 6 + 8 + 4; i++ ){
        gotoxy(2 + i, 27);
        setTextColor(15, "_");
    }
	for( int i = 0; i <= 98 + 6 + 8 + 4; i++ ){
		gotoxy(2 + i, 7);
        setTextColor(15, "_");
	}

    Nocursortype(FALSE);
}

void GiaoDien::KhungLuaChonDanhSachThuVien(){
	
}