
#ifndef KHONGBIETLUON_NGUOIDUNG_H
#define KHONGBIETLUON_NGUOIDUNG_H
#include "GiaoDienDangNhap.h"
#include "QuyenSach.h"
#include <conio.h>
#include <windows.h>

class NguoiDung : public GiaoDienDangNhap, QuyenSach{
public:
    void ManHinhChinhDangNhapDangKy();
    void XuLiLuaChonDangNhapDangKy();
    void QuanLiNguoiDung();
    void GiaoDienAdmin();
    void GiaoDienNonAdmin();
    static void DangXuat();
    void ThongBaoQuanLiNguoiDung();
    static void ThongBaoThoatQuanLiNguoiDung(bool run = true);
    void InRaDanhSachNguoiDung();
    //
    void ThongBaoQuanLiSach();
    static void XuLiChuDeSach(std::string &chuDe);
    static bool KiemTraTinhHopLeNamXuatBan(const std::string& ngay = "1", const std::string& thang = "1",const std::string& nam = "1");
    static bool KiemTraKiTuNgayThangNam(const std::string& date);
    static void BoSungNgayThang(std::string &date);
    static void BoSungSoTrang(std::string &number);
    void InRaDanhSachSach();
    void TimKiemThongTinSach(bool &run, bool caseAdmin, std::string first = "", std::string second = "");
    void ThongBaoDanhSachTimKiem();
    void TimKiemEngine(const std::string& keyTimKiem, std::vector<std::string> VtimKiem, bool &run);
    void TimKiemEngineNamXuatBan(const std::string& keyTimKiem, bool &run);
    void TimKiemEngineChuDe(const std::string& keyTimKiem, bool &run);
    static void DaoNguocChuoi(std::string &key);
    void ThemSachCoSanTrongThuVien();
    void ThemNguoiDungCoSan();
    void ThongBaoNhapSuaDoiThongTinSach();
    void LuaChonChinhSuaNgayThangXuatBan();
    void ThayDoiNgayThangNam(const std::string& date, int idx, int position);
    std::string LayNgayThangNam(int idx, int position);
    //
    void ThongBaoChinhSuaThongTinTaiKhoan();
    //
    void KhungNguoiDung();
    void NonAdminStatusDanhSachSach();
};


#endif //KHONGBIETLUON_NGUOIDUNG_H
