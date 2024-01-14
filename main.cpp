#include <iostream>
#include "NguoiDung.h"

int main() {
    SetConsoleOutputCP(65001);
    NguoiDung nguoiDung;
    nguoiDung.ThemSachCoSanTrongThuVien();
    nguoiDung.ThemNguoiDungCoSan();
    nguoiDung.XuLiLuaChonDangNhapDangKy();
    system("pause");
    return 0;
}