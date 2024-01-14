#ifndef KHONGBIETLUON_GIAODIEN_H
#define KHONGBIETLUON_GIAODIEN_H
#include <windows.h>
#include <string>
#include <iostream>

class GiaoDien{
public:
    void gotoxy(int x,int y);
    void textcolor(int x);
    void setTextColor(int color, std::string text);
    void ShowCur(bool CursorVisibility);
    void Nocursortype(bool bVisible);
};

#endif //KHONGBIETLUON_GIAODIEN_H