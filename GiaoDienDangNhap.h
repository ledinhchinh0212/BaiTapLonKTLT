#ifndef GIAODIENDANGNHAP_H
#define GIAODIENDANGNHAP_H
#include "GiaoDienDangKy.h"
#include <conio.h>

class GiaoDienDangNhap : public GiaoDienDangKy{
private:
    std::string taiKhoan;
    std::string matKhau;
    std::string tenNguoiDung;
    bool bcheckAdmin;
    bool bDangNhapThanhCong;
public:
    void ThucHienDangNhap();
    void setCheckAdmin(bool run);
    void setDangNhapThanhCong(bool bDangNhapThanhCong);
    bool getCheckAdmin();
    bool getDangNhapThanhCong();
    std::string getTenNguoiDung();
    void setTenNguoiDung(std::string tenNguoiDung);
    std::string getTaiKhoan();
    std::string getMatKhau();
    void setMatKhau(std::string matKhau);
};


#endif 