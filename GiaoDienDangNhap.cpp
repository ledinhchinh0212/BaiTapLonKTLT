
#include "GiaoDienDangNhap.h"

void GiaoDienDangNhap::setCheckAdmin(bool run) {
    this->bcheckAdmin = run;
}

bool GiaoDienDangNhap::getCheckAdmin() {
    return this->bcheckAdmin;
}

void GiaoDienDangNhap::setDangNhapThanhCong(bool bDangNhapThanhCong) {
    this->bDangNhapThanhCong = bDangNhapThanhCong;
}

bool GiaoDienDangNhap::getDangNhapThanhCong() {
    return this->bDangNhapThanhCong;
}

std::string GiaoDienDangNhap::getTaiKhoan() {
    return taiKhoan;
}

std::string GiaoDienDangNhap::getMatKhau() {
    return matKhau;
}

void GiaoDienDangNhap::setMatKhau(std::string matKhau){
    this->matKhau = matKhau;
}

void GiaoDienDangNhap::ThucHienDangNhap() {
    bool btotal = true;
    bool btaiKhoan = true;
    bool bmatKhau = false;
    int soLanNhap = 0;
    setCheckAdmin(false);
    setDangNhapThanhCong(false);
    while(btotal){
        while(btaiKhoan){
            gotoxy(15,5);
            setTextColor(10,".ĐĂNG NHẬP TÀI KHOẢN");
            gotoxy(70,5);
            setTextColor(10, "THÔNG BÁO");
            gotoxy(70,7);
            ThongBaoHuyChuongTrinh();
            gotoxy(15,7);
            setTextColor(11, "Nhập tên tài khoản:");
            gotoxy(13,9);
            setTextColor(15,"->");    
            gotoxy(16,9);
            Nocursortype(TRUE);
            InputCheckCin(this->taiKhoan);
            if(this->taiKhoan.empty()){
                gotoxy(16,11);
                Nocursortype(FALSE);
                setTextColor(12, "Nhập không hợp lệ, vui lòng nhập lại");
                Loading();
                continue;
            }
            if(this->taiKhoan == "1"){
            	system("cls");
                Nocursortype(FALSE);
                gotoxy(50,10);
                setTextColor(14,"Quay lại màn hình chính..");
                Loading();
                btaiKhoan = false;
                btotal = false;
                setDangNhapThanhCong(false);
                continue;
            }
            btaiKhoan = false;
            bmatKhau = true;
        }
        while(bmatKhau){
            system("cls");
            gotoxy(15,5);
            setTextColor(10,".ĐĂNG NHẬP TÀI KHOẢN");
            gotoxy(70,5);
            setTextColor(10, "THÔNG BÁO");    
            gotoxy(70,7);
            setTextColor(15,"1. Quay lại");
            gotoxy(70,9);
            setTextColor(15,"2. Quay lại màn hình chính");
            gotoxy(15,7);
            setTextColor(11,"Tên tài khoản:");
            gotoxy(30,7);
            setTextColor(15,this->taiKhoan);
            gotoxy(15,9);
            setTextColor(11,"Nhập mật khẩu:");
            gotoxy(13,11);
            setTextColor(15,"-> ");
            gotoxy(16,11);
            Nocursortype(TRUE);
            InputCheckCin(this->matKhau);
            //
            system("cls");
            gotoxy(15,5);
            setTextColor(10,".ĐĂNG NHẬP TÀI KHOẢN");
            gotoxy(70,5);
            setTextColor(10, "THÔNG BÁO");    
            gotoxy(70,7);
            setTextColor(15,"1. Quay lại");
            gotoxy(70,9);
            setTextColor(15,"2. Quay lại màn hình chính");
            gotoxy(15,7);
            setTextColor(11,"Tên tài khoản:");
            gotoxy(30,7);
            setTextColor(15,this->taiKhoan);
            gotoxy(15,9);
            setTextColor(11,"Mật khẩu:");
            gotoxy(25,9);
            setTextColor(15,AnMatKhau(this->matKhau));
            //
            if(this->matKhau.empty()){
                gotoxy(16,13);
                Nocursortype(FALSE);
                setTextColor(12, "Nhập không hợp lệ, vui lòng nhập lại");
                Loading();
                continue;
            }
            if(this->matKhau == "1"){
            	system("cls");
                gotoxy(50,10);
                Nocursortype(FALSE);
                setTextColor(14,"Quay lại..");
                Loading();
                soLanNhap = 0;
                btaiKhoan = true;
                bmatKhau = false;
                continue;
            }
            if(this->matKhau == "2"){
            	system("cls");
                gotoxy(50,10);
                Nocursortype(FALSE);
                setTextColor(14,"Quay lại màn hình chính..");
                Loading();
                soLanNhap = 0;
                bmatKhau = false;
                btotal = false;
                continue;
            }
            //
            if(this->taiKhoan == "admin" && this->matKhau == "admin"){
                setCheckAdmin(true);
                bmatKhau = false;
                btotal = false;
                setDangNhapThanhCong(true);
                // đang đăng nhập
                gotoxy(20,13);
                Nocursortype(FALSE);
                setTextColor(10, "..Đang đăng nhập");
                Sleep(1000);
                //
                system("cls");
                gotoxy(50,10);
                Nocursortype(FALSE);
                setTextColor(14,"..Đăng nhập với tư cách Admin");
                this->tenNguoiDung = "Admin";
                Loading();
                continue;
            }
            //
            bool checkTrungTaiKhoan = false;
            int position = -1;
            for( int i = 0; i < this->VtenTaiKhoan.size(); i++ ){
                if(this->VtenTaiKhoan[i] == this->taiKhoan){
                    checkTrungTaiKhoan = true;
                    position = i;
                    break;
                }
            }
            if(checkTrungTaiKhoan){
                if(this->VmatKhau[position] == this->matKhau){
                	gotoxy(20,13);
                    Nocursortype(FALSE);
                    setTextColor(10, "..Đang đăng nhập");
                    Sleep(1000);
                    system("cls");
                    gotoxy(50,10);
                    Nocursortype(FALSE);
                    setTextColor(14,"..Đăng nhập với tư cách người dùng!");
                    Loading();
                    //ChuanHoaChuoi(this->VtenNguoiDung[position]);
                    this->tenNguoiDung = this->VtenNguoiDung[position];
                    soLanNhap = 0;
                    bmatKhau = false;
                    btotal = false;
                    setDangNhapThanhCong(true);
                    continue;
                }
                else{
                    soLanNhap++;
                    if(soLanNhap == 3){
                        gotoxy(16,13);
                        std::cout << "Quên mật khẩu ?" << std::endl;
                        gotoxy(16,15);
                        std::cout << "Mật khẩu cho tài khoản \'" << this->taiKhoan << "\' là: " << this->VmatKhau[position] << std::endl;
                        gotoxy(16,17);
                        std::cout << "Nhập phím bất kì để quay lại" << std::endl;
                        gotoxy(16,18);
                        char key = _getch();
                        bmatKhau = false;
                        btaiKhoan = true;
                        system("cls");
                        continue;
                    }
                    gotoxy(16,13);
                    Nocursortype(FALSE);
                    setTextColor(12, "Sai mật khẩu, yêu cầu nhập lại");
                    Loading();
                }
            }
            else{
            	gotoxy(16,13);
                Nocursortype(FALSE);
                setTextColor(12, "Tài khoản này chưa được đăng ký, vui lòng nhập lại");
                Loading();
                btaiKhoan = true;
                bmatKhau = false;
                setDangNhapThanhCong(false);
                continue;
            }
        }
    }
}

std::string GiaoDienDangNhap::getTenNguoiDung(){
    return this->tenNguoiDung;
}

void GiaoDienDangNhap::setTenNguoiDung(std::string tenNguoiDung){
    this->tenNguoiDung = tenNguoiDung;
}