
#ifndef KHONGBIETLUON_GIAODIENDANGKY_H
#define KHONGBIETLUON_GIAODIENDANGKY_H
#include <string>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
#include "GiaoDien.h"

class GiaoDienDangKy : public GiaoDien{
private:
    std::string tenNguoiDung;
    std::string userID;
    std::string tenTaiKhoan;
    std::string matKhau;
    int randomID;
protected:
    std::vector<std::string> VtenNguoiDung;
    std::vector<std::string> VuserID;
    std::vector<std::string> VtenTaiKhoan;
    std::vector<std::string> VmatKhau;
    std::vector<int> VrandomID;
    bool dangKyThanhCong;
public:
    void ThucHienDangKy();
    void ThongBaoHuyChuongTrinh(bool run = true);
    bool KiemTraDangKyThanhCong();
    void ChuanHoaChuoi(std::string &chuoi);
    void InThuongChuoi(std::string &chuoi);
    void DaoNguocChuoi(std::string &chuoi);
    void Loading();
    void NhapDeQuayLai();
    void InputCheckCin(std::string &input);
    std::string AnMatKhau(std::string matKhau);
};


#endif //KHONGBIETLUON_GIAODIENDANGKY_H