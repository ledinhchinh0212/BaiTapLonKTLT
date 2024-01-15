
#include "GiaoDienDangKy.h"
#include <conio.h>

void GiaoDienDangKy::ThongBaoHuyChuongTrinh(bool run) {
    if(run){
        setTextColor(15,"1. Quay lại màn hình chính");
    }
    else{
        setTextColor(15,"1. Quay lại");
        gotoxy(70,9);
        setTextColor(15,"2. Quay lại màn hình chính");
    }
}

void GiaoDienDangKy::Loading(){
	Sleep(1200);
	system("cls");
}

void GiaoDienDangKy::DaoNguocChuoi(std::string &chuoi){
    unsigned int k = chuoi.length();
    for( int i = 0; i < k/2; i++ ){
        char ch = chuoi[i];
        chuoi[i] = chuoi[k - i - 1];
        chuoi[k - i - 1] = ch;
    }
}

void GiaoDienDangKy::ChuanHoaChuoi(std::string &chuoi){
    InThuongChuoi(chuoi);
    std::string copyChuoi;
    copyChuoi = "";
    bool first = false;
    for( int i = 0; i < chuoi.length(); i++ ){
        char ch = chuoi[i];
        if(ch != ' '){
            copyChuoi += ch;
            first = true;
        }
        else{
            if(first){
                copyChuoi += ch;
            }
        }
    }
    std::string copyChuoi2;
    copyChuoi2 = "";
    bool second = false;
    for( int i = copyChuoi.length() - 1; i >= 0; i-- ){
        char ch = copyChuoi[i];
        if(ch != ' '){
            copyChuoi2 += ch;
            second = true;
        }
        else{
            if(second){
                copyChuoi2 += ch;
            }
        }
    }
    DaoNguocChuoi(copyChuoi2);
    // xu li khoang trang o giua
    bool bngatKhoangTrang = false;
    std::string copyChuoi3;
    copyChuoi3 = "";
    for( int i = 0; i < copyChuoi2.length(); i++ ){
        char ch = copyChuoi2[i];
        if(ch == ' '){
        	if(!bngatKhoangTrang){
	        	bngatKhoangTrang = true;
	        	copyChuoi3 += ch;
			}
		}
		else{
			bngatKhoangTrang = false;
			copyChuoi3 += ch;
		}
    }
    //
    bool check = false;
    if(copyChuoi3[0] >= 'a' && copyChuoi3[0] <= 'z'){
        copyChuoi3[0] -= 32;
    }
    for( int i = 0; i < copyChuoi3.length(); i++ ){
        char ch = copyChuoi3[i];
        if(ch == ' '){
            check = true;
        }
        else{
            if(check){
                if(ch >= 'a' && ch <= 'z'){
                    copyChuoi3[i] -= 32;
                    check = false;
                }
            }
        }
    }
    chuoi = copyChuoi3;
}

void GiaoDienDangKy::InThuongChuoi(std::string &chuoi){
    for( int i = 0; i < chuoi.length(); i++ ){
        char ch = chuoi[i];
        if(ch >= 'A' && ch <= 'Z'){
            chuoi[i] += 32;
        }
    }
}

void GiaoDienDangKy::NhapDeQuayLai(){
    std::cout << "Nhập phím bất kỳ để quay lại" << std::endl;
    std::string anyKey;
    std::getline(std::cin, anyKey);
    system("cls");
}

void GiaoDienDangKy::ThucHienDangKy(){
    bool btotal = true;
    bool btenNguoiDung = true;
    bool btenTaiKhoan = false;
    bool bmatKhau = false;
    while(btotal){
        while(btenNguoiDung){
            KhungGiaoDien();
            Nocursortype(FALSE);
            gotoxy(14,5);
            setTextColor(10," ĐĂNG KÝ TÀI KHOẢN");
            gotoxy(70,5);
            setTextColor(10, "THÔNG BÁO");    
            gotoxy(70,7);
            ThongBaoHuyChuongTrinh();
            gotoxy(15,7);
            setTextColor(11, "Nhập tên người dùng:");
            gotoxy(13,9);
            setTextColor(15,"->");
            gotoxy(16,9);
            Nocursortype(TRUE);
            std::getline(std::cin, this->tenNguoiDung);
            if(this->tenNguoiDung.empty()){
                // need fixing
                bool checkTrungRandomUserId;
                std::srand(static_cast<unsigned int>(std::time(nullptr)));
                do{
                    checkTrungRandomUserId = false;
                    int tmpUserID = std::rand() % 10000 + 100;
                    this->randomID = tmpUserID;
                    for( auto x : this->VrandomID ){
                        if(x == this->randomID){
                            checkTrungRandomUserId = true;
                            break;
                        }
                    }
                }while(checkTrungRandomUserId);  
                this->VrandomID.push_back(this->randomID);      
                this->tenNguoiDung = "USER" + std::to_string(this->randomID);
            } 
            if(this->tenNguoiDung == "1"){
            	system("cls");
                Nocursortype(FALSE);
                gotoxy(50,10);
                setTextColor(14,"Quay lại màn hình chính..");
                Loading();
                ChuanHoaChuoi(this->tenNguoiDung);
                btenNguoiDung = false;
                btotal = false;
                continue;
            }
            ChuanHoaChuoi(this->tenNguoiDung);
            btenNguoiDung = false;
            btenTaiKhoan = true;
        }
        while(btenTaiKhoan){
            system("cls");
            KhungGiaoDien();
            Nocursortype(FALSE);
            gotoxy(14,5);
            setTextColor(10," ĐĂNG KÝ TÀI KHOẢN");
            gotoxy(70,5);
            setTextColor(10, "THÔNG BÁO");    
            gotoxy(70,7);
            setTextColor(15,"1. Quay lại");
            gotoxy(70,9);
            setTextColor(15,"2. Quay lại màn hình chính");
            gotoxy(15,7);
            setTextColor(11,"Tên người dùng:");
            gotoxy(31,7);
            setTextColor(15,this->tenNguoiDung);
            gotoxy(15,9);
            setTextColor(11,"Nhập tên tài khoản:");
            gotoxy(13,11);
            setTextColor(15,"-> ");
            gotoxy(16,11);
            Nocursortype(TRUE);
            InputCheckCin(this->tenTaiKhoan);
            Nocursortype(FALSE);
            if(this->tenTaiKhoan.empty()){
                Nocursortype(FALSE);
                gotoxy(15,13);
                setTextColor(12,"Nhập không hợp lệ, vui lòng nhập lại");
                Loading();
                continue;
            }
            if(this->tenTaiKhoan == "1"){
                system("cls");
                Nocursortype(FALSE);
                gotoxy(50,10);
                setTextColor(14,"Quay lại..");
                Loading();
                btenNguoiDung = true;
                btenTaiKhoan = false;
                continue;
            }
            if(this->tenTaiKhoan == "2"){
            	system("cls");
                Nocursortype(FALSE);
                gotoxy(50,10);
                setTextColor(14,"Quay lại màn hình chính..");
                Loading();
                btenTaiKhoan = false;
                btotal = false;
                continue;
            }
            bool checkTrungTaiKhoan = false;
            for( const auto& x : this->VtenTaiKhoan ){
                if(x == this->tenTaiKhoan){
                    checkTrungTaiKhoan = true;
                    break;
                }
            }
            if(checkTrungTaiKhoan){
                gotoxy(15,13);
                Nocursortype(FALSE);
                setTextColor(12,"Tài khoản này đã tồn tại, vui lòng nhập lại");
                Loading();
                continue;
            }
            btenTaiKhoan = false;
            bmatKhau = true;
        }
        while(bmatKhau){
            system("cls");
            KhungGiaoDien();
            Nocursortype(FALSE);
            gotoxy(14,5);
            setTextColor(10," ĐĂNG KÝ TÀI KHOẢN");
            gotoxy(70,5);
            setTextColor(10, "THÔNG BÁO");    
            gotoxy(70,7);
            setTextColor(15,"1. Quay lại");
            gotoxy(70,9);
            setTextColor(15,"2. Quay lại màn hình chính");
            gotoxy(15,7);
            setTextColor(11,"Tên người dùng:");
            gotoxy(31,7);
            setTextColor(15,this->tenNguoiDung);
            gotoxy(15,9);
            setTextColor(11,"Tên tài khoản:");
            gotoxy(30,9);
            setTextColor(15,this->tenTaiKhoan);
            gotoxy(15,11);
            setTextColor(11,"Nhập mật khẩu:");
            gotoxy(13,13);
            setTextColor(15,"-> ");
            gotoxy(16,13);
            Nocursortype(TRUE);
            InputCheckCin(this->matKhau);
            Nocursortype(FALSE);
            if(this->matKhau.empty()){
                gotoxy(15,15);
                Nocursortype(FALSE);
                setTextColor(12,"Mật khẩu không hợp lệ, vui lòng nhập lại");
                Loading();
                continue;
            }
            if(this->matKhau == "1"){
            	system("cls");
                Nocursortype(FALSE);
                gotoxy(50,10);
                setTextColor(14,"Quay lại..");
                Loading();
                btenTaiKhoan = true;
                bmatKhau = false;
                continue;
            }
            if(this->matKhau == "2"){
            	system("cls");
                Nocursortype(FALSE);
                gotoxy(50,10);
                setTextColor(14,"Quay lại màn hình chính..");
                Loading();
                bmatKhau = false;
                btotal = false;
                continue;
            }
            if(this->matKhau.length() < 5){
                gotoxy(15,15);
                Nocursortype(FALSE);
                setTextColor(12,"Yêu cầu mật khẩu ít nhất 5 kí tự, yêu cầu nhập lại");
                Loading();
                continue;
            }
            // loading lại màn hìnhsystem("cls");
            system("cls");
            KhungGiaoDien();
            Nocursortype(FALSE);
            gotoxy(14,5);
            setTextColor(10," ĐĂNG KÝ TÀI KHOẢN");
            gotoxy(70,5);
            setTextColor(10, "THÔNG BÁO");    
            gotoxy(70,7);
            setTextColor(15,"1. Quay lại");
            gotoxy(70,9);
            setTextColor(15,"2. Quay lại màn hình chính");
            gotoxy(15,7);
            setTextColor(11,"Tên người dùng:");
            gotoxy(31,7);
            setTextColor(15,this->tenNguoiDung);
            gotoxy(15,9);
            setTextColor(11,"Tên tài khoản:");
            gotoxy(30,9);
            setTextColor(15,this->tenTaiKhoan);
            gotoxy(15,11);
            setTextColor(11,"Mật khẩu:");
            gotoxy(25,11);
            setTextColor(15, AnMatKhau(this->matKhau));
            // đang đăng ký
            gotoxy(20,15);
            Nocursortype(FALSE);
            setTextColor(10,"..Đang đăng ký");
            Sleep(1000);
            system("cls");
            gotoxy(50,10);
            setTextColor(14,"..Đăng ký thành công !");
            Loading();
            this->dangKyThanhCong = true;
            this->VtenNguoiDung.push_back(this->tenNguoiDung);
            this->VtenTaiKhoan.push_back(this->tenTaiKhoan);
            this->VmatKhau.push_back(this->matKhau);
            // tao random cho userid
            bool checkTrungUserId;
            std::srand(static_cast<unsigned int>(std::time(nullptr)));
            do{
                checkTrungUserId = false;
                int tmpUserID = std::rand() % 10000 + 100;
                this->userID = std::to_string(tmpUserID);
                for( auto x : this->VuserID ){
                    if(x == this->userID){
                        checkTrungUserId = true;
                        break;
                    }
                }
            }while(checkTrungUserId);
            this->VuserID.push_back(this->userID);
            bmatKhau = false;
            btotal = false;
        }
    }
}

bool GiaoDienDangKy::KiemTraDangKyThanhCong() {
    return this->dangKyThanhCong;
}

void GiaoDienDangKy::InputCheckCin(std::string &input){
    std::getline(std::cin, input);
    for( int i = 0; i < input.length(); i++ ){
        char ch = input[i];
        if(ch == ' '){
            input = "";
            break;
        }
    }
}

std::string GiaoDienDangKy::AnMatKhau(std::string matKhau){
    std::string c;
    c = "";
    for( int i = 0; i < matKhau.length(); i++ ){
        c += "*";
    }
    return c;
}
