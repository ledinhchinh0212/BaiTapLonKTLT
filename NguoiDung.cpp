#include "NguoiDung.h"

void NguoiDung::ManHinhChinhDangNhapDangKy() {
    gotoxy(40,7);
    textcolor(11);
    std::cout << "CHƯƠNG TRÌNH QUẢN LÍ THƯ VIỆN" << std::endl;
    gotoxy(40,11);
    textcolor(15);
    std::cout << "1. Đăng nhập" << std::endl;
    gotoxy(40,13);
    textcolor(15);
    std::cout << "2. Đăng ký" << std::endl;
    gotoxy(40,15);
    textcolor(15);
    std::cout << "3. Hướng dẫn sử dụng chương trình" << std::endl;
    gotoxy(40,17);
    textcolor(15);
    std::cout << "4. Thông tin bài tập lớn" << std::endl;
    gotoxy(40,19);
    textcolor(15);
    std::cout << "5. Thoát chương trình" << std::endl;
}

void NguoiDung::GiaoDienAdmin() {
    gotoxy(11,7);
    textcolor(15);
    std::cout << "1. Quản lí người dùng" << std::endl;
    gotoxy(11,9);
    textcolor(15);
    std::cout << "2. Quản lí sách trong thư viện" << std::endl;
    gotoxy(11,11);
    textcolor(15);
    std::cout << "3. Đăng xuất" << std::endl;
}

void NguoiDung::GiaoDienNonAdmin() {
    gotoxy(11,7);
    textcolor(15);
    std::cout << "1. Xem danh sách sách trong thư viện" << std::endl;
    gotoxy(11,9);
    textcolor(15);
    std::cout << "2. Chỉnh sửa thông tin tài khoản" << std::endl;
    gotoxy(11,11);
    textcolor(15);
    std::cout << "3. Đăng xuất" << std::endl;
}

void NguoiDung::ThongBaoChinhSuaThongTinTaiKhoan() {
    gotoxy(11,7);
    textcolor(15);
    std::cout << "1. Đổi tên người dùng" << std::endl;
    gotoxy(11,9);
    textcolor(15);
    std::cout << "2. Đổi mật khẩu" << std::endl;
    gotoxy(11,11);
    textcolor(15);
    std::cout << "3. Xoá tài khoản" << std::endl;
    gotoxy(11,13);
    textcolor(15);
    std::cout << "4. Quay lại" << std::endl;
}

void NguoiDung::DangXuat(){
    std::cout << "..Đăng xuất" << std::endl;
}

void NguoiDung::ThongBaoQuanLiNguoiDung() {
    gotoxy(11,7);
    textcolor(15);
    std::cout << "1. Thêm người dùng" << std::endl;
    gotoxy(11,9);
    textcolor(15);
    std::cout << "2. Xoá người dùng" << std::endl;
    gotoxy(11,11);
    textcolor(15);
    std::cout << "3. Sửa đổi thông tin người dùng" << std::endl;
    gotoxy(11,13);
    textcolor(15);
    std::cout << "4. Xem danh sách người dùng" << std::endl;
    gotoxy(11,15);
    textcolor(15);
    std::cout << "5. Quay lại" << std::endl;
}

void NguoiDung::ThongBaoThoatQuanLiNguoiDung(bool run) {
    if(run){
        std::cout << "1. Quay lại" << std::endl;
    }
    else{
        std::cout << "1. Quay lại" << std::endl;
        std::cout << "2. Thoát" << std::endl;
    }
}

void NguoiDung::ThemSachCoSanTrongThuVien() {
    // sach 1
    this->VmaSoSach.emplace_back("1101");
    this->VtenSach.emplace_back("Luyen tap C/C++");
    this->VchuDe.emplace_back("#luyen_tap");
    this->VtacGia.emplace_back("Le Dinh Chinh");
    this->VnhaXuatBan.emplace_back("Kim Dong");
    this->VngayThangXuatBan.emplace_back("02 / 12 / 2023");
    this->VsoTrang.emplace_back("450");
    this->VsoBanCopyTrongThuVien.emplace_back("2");
    // sach 2
    this->VmaSoSach.emplace_back("2891");
    this->VtenSach.emplace_back("Nha gia kim");
    this->VchuDe.emplace_back("#phieu_luu");
    this->VtacGia.emplace_back("Paulo Coelho");
    this->VnhaXuatBan.emplace_back("Editora Rocco");
    this->VngayThangXuatBan.emplace_back("11 / 02 / 1988");
    this->VsoTrang.emplace_back("1000");
    this->VsoBanCopyTrongThuVien.emplace_back("10");
    // sach 3
    this->VmaSoSach.emplace_back("4191");
    this->VtenSach.emplace_back("Hello Kitty");
    this->VchuDe.emplace_back("#phieu_luu");
    this->VtacGia.emplace_back("Le Dinh Chinh");
    this->VnhaXuatBan.emplace_back("Kim Dong");
    this->VngayThangXuatBan.emplace_back("08 / 05 / 2016");
    this->VsoTrang.emplace_back("300");
    this->VsoBanCopyTrongThuVien.emplace_back("0");
    // sach 4
    this->VmaSoSach.emplace_back("2024");
    this->VtenSach.emplace_back("Luyen tap Java");
    this->VchuDe.emplace_back("#luyen_tap");
    this->VtacGia.emplace_back("Le Dinh Chinh");
    this->VnhaXuatBan.emplace_back("Kim Dong");
    this->VngayThangXuatBan.emplace_back("31 / 12 / 2023");
    this->VsoTrang.emplace_back("700");
    this->VsoBanCopyTrongThuVien.emplace_back("30");
    //
}

void NguoiDung::ThemNguoiDungCoSan(){
    // nguoi dung 1
    this->VtenNguoiDung.emplace_back("Le Dinh Chinh");
    this->VtenTaiKhoan.emplace_back("1");
    this->VmatKhau.emplace_back("1");
    this->VuserID.emplace_back("1450");
    // nguoi dung 2
    this->VtenNguoiDung.emplace_back("Nguyen Duy Vu");
    this->VtenTaiKhoan.emplace_back("1");
    this->VmatKhau.emplace_back("1");
    this->VuserID.emplace_back("6292");
    // nguoi dung 3
    this->VtenNguoiDung.emplace_back("Pham Hoang Vinh");
    this->VtenTaiKhoan.emplace_back("1");
    this->VmatKhau.emplace_back("1");
    this->VuserID.emplace_back("4571");
    // nguoi dung 4
    this->VtenNguoiDung.emplace_back("Truong Van Long");
    this->VtenTaiKhoan.emplace_back("1");
    this->VmatKhau.emplace_back("1");
    this->VuserID.emplace_back("2035");
}

void NguoiDung::InRaDanhSachNguoiDung() {
    gotoxy(10,7);
    setTextColor(10,"Danh Sách Người Dùng");
    gotoxy(5,9);
    setTextColor(14,"USERID\tTên người dùng");
    textcolor(15);
    for( int i = 0; i < this->VtenNguoiDung.size(); i++ ){
        gotoxy(5,11 + i);
        std::cout <<  this->VuserID[i] << "\t" << this->VtenNguoiDung[i] << std::endl;
    }
}

void NguoiDung::InRaDanhSachSach() {
    gotoxy(43,9);
    setTextColor(10,"Danh Sách Sách Trong Thư Viện");
    gotoxy(1,11);
    setTextColor(14,"Mã số sách\tTên sách\t\tChủ đề\t\tTác giả\t\t\tNhà xuất bản\t\tNgày xuất bản");
    gotoxy(1,13); // start in index 13??
    textcolor(15);
    for( int i = 0; i < this->VmaSoSach.size(); i++ ){
        std::cout << this->VmaSoSach[i] << "\t\t" << this->VtenSach[i] << "\t\t" << this->VchuDe[i]
        << "\t" << VtacGia[i]
        << "\t\t" << this->VnhaXuatBan[i]
        << "\t\t" << this->VngayThangXuatBan[i] << std::endl;
    }
}

void NguoiDung::ThongBaoQuanLiSach() {
    gotoxy(11,7);
    textcolor(15);
    std::cout << "1. Thêm sách" << std::endl;
    gotoxy(11,9);
    textcolor(15);
    std::cout << "2. Xoá sách" << std::endl;
    gotoxy(11,11);
    textcolor(15);
    std::cout << "3. Sửa đổi thông tin sách" << std::endl;
    gotoxy(11,13);
    textcolor(15);
    std::cout << "4. Xem danh sách sách trong thư viện" << std::endl;
    gotoxy(11,15);
    textcolor(15);
    std::cout << "5. Quay lại" << std::endl;
}

void NguoiDung::ThongBaoDanhSachTimKiem() {
    gotoxy(1,13 + this->VtenSach.size() + 1);
    std::cout << "1. Tìm kiếm theo tên sách" << std::endl;
    gotoxy(1,13 + this->VtenSach.size() + 3);
    std::cout << "2. Tìm kiếm theo chủ đề" << std::endl;
    gotoxy(1,13 + this->VtenSach.size() + 5);
    std::cout << "3. Tìm kiếm theo tác giả" << std::endl;
    gotoxy(1,13 + this->VtenSach.size() + 7);
    std::cout << "4. Tìm kiếm theo nhà xuất bản" << std::endl;
    gotoxy(1,13 + this->VtenSach.size() + 9);
    std::cout << "5. Tìm kiếm theo năm xuất bản" << std::endl;
    gotoxy(1,13 + this->VtenSach.size() + 11);
    std::cout << "6. Quay lại" << std::endl;
}

void NguoiDung::DaoNguocChuoi(std::string &key) {
    unsigned int k = key.length();
    for( int i = 0; i < k/2; i++ ){
        char ch = key[i];
        key[i] = key[k - i - 1];
        key[k - i - 1] = ch;
    }
}

void NguoiDung::LuaChonChinhSuaNgayThangXuatBan() {
    gotoxy(11,7);
    textcolor(15);
    std::cout << "1. Chỉnh sửa ngày" << std::endl;
    gotoxy(11,9);
    textcolor(15);
    std::cout << "2. Chỉnh sửa tháng" << std::endl;
    gotoxy(11,11);
    textcolor(15);
    std::cout << "3. Chỉnh sửa năm" << std::endl;
    gotoxy(11,13);
    textcolor(15);
    std::cout << "4. Quay lại" << std::endl;
}

void NguoiDung::ThongBaoNhapSuaDoiThongTinSach() {
    gotoxy(11,7);
    textcolor(15);
    std::cout << "1. Chỉnh sửa tên sách" << std::endl;
    gotoxy(11,9);
    textcolor(15);
    std::cout << "2. Chỉnh sửa chủ đề" << std::endl;
    gotoxy(11,11);
    textcolor(15);
    std::cout << "3. Chỉnh sửa tác giả" << std::endl;
    gotoxy(11,13);
    textcolor(15);
    std::cout << "4. Chỉnh sửa nhà xuất bản" << std::endl;
    gotoxy(11,15);
    textcolor(15);
    std::cout << "5. Chỉnh sửa ngày tháng xuất bản" << std::endl;
    gotoxy(11,17);
    textcolor(15);
    std::cout << "6. Chỉnh sửa số trang" << std::endl;
    gotoxy(11,19);
    textcolor(15);
    std::cout << "7. Chỉnh sửa số bản copy trong thư viện" << std::endl;
    gotoxy(11,21);
    textcolor(15);
    std::cout << "8. Quay lại" << std::endl;
}

void NguoiDung::ThayDoiNgayThangNam(const std::string& date, int idx, int position){
    std::string copyNgayThangNam = this->VngayThangXuatBan[position];
    std::string ngayThangNam;
    ngayThangNam = "";
    std::string copyDate;
    copyDate = "";
    bool bngayThang = false;
    int idxInFunc = 0;
    if(date.length() <= 2){
       bngayThang = true;
    }
    for(char ch : copyNgayThangNam){
        if(ch == ' '){
            continue;
        }
        ngayThangNam += ch;
    }
    // 02 / 12 / 2005
    // 02/12/2005
    for(char ch : ngayThangNam){
       if(ch == '/'){
           idxInFunc++;
           copyDate += " / ";
           continue;
           }
           if(idxInFunc == idx){
               idxInFunc++;
               if(bngayThang && date.length() == 1){
                   copyDate += "0";
                   copyDate += date;
               }
               else{
                   copyDate += date;
               }
               continue;
           }
       if(idxInFunc != idx + 1){
           copyDate += ch;
       }
    }
    std::cout << this->VngayThangXuatBan[position] << " -> " << copyDate << std::endl;
    this->VngayThangXuatBan[position] = copyDate;
}

std::string NguoiDung::LayNgayThangNam(int idx, int position){
    std::string copyNgayThangNam = this->VngayThangXuatBan[position];
    std::string copyDate;
    copyDate = "";
    int idxInFunc = 0;
    // 02 / 12 / 2005
    for( int i = 0; i < copyNgayThangNam.length(); i++ ){
        char ch = copyNgayThangNam[i];
        if(ch == '/'){
            idxInFunc++;
        }
        else if(idxInFunc == idx){
            copyDate += ch;
        }
    }
    ChuanHoaChuoi(copyDate);
    return copyDate;
}

void NguoiDung::TimKiemEngineChuDe(const std::string& keyTimKiem, bool &run, std::string first, std::string second) {
    run = false;
    for( const auto& x : this->VchuDe ){
        std::string c;
        c = "";
        for(char ch : x){
            if(ch == '#'){
                continue;
            }
            else if(ch == '_'){
                c += ' ';
                continue;
            }
            c += ch;
        }
        if(c == keyTimKiem){
            run = true;
            break;
        }
    }
    if(run){
        KhungGiaoDienDanhSachThuVien();
        Nocursortype(FALSE);
        gotoxy(43,9);
        setTextColor(10,"Danh Sách Sách Trong Thư Viện");
        gotoxy(1,11);
        setTextColor(14,"Mã số sách\tTên sách\t\tChủ đề\t\tTác giả\t\t\tNhà xuất bản\t\tNgày xuất bản");
        textcolor(15);
        for( int i = 0; i < this->VchuDe.size(); i++ ){
            std::string c;
            c = "";
            std::string split = this->VchuDe[i];
            for(char ch : split){
                if(ch == '#'){
                    continue;
                }
                else if(ch == '_'){
                    c += ' ';
                    continue;
                }
                c += ch;
            }
            if(c == keyTimKiem){
                std::cout << this->VmaSoSach[i] << "\t\t" << this->VtenSach[i] << "\t\t" << this->VchuDe[i]
                          << "\t" << VtacGia[i]
                          << "\t\t" << this->VnhaXuatBan[i]
                          << "\t\t" << this->VngayThangXuatBan[i] << std::endl;
            }
        }
    }
    else{
        system("cls");
        if(!getCheckAdmin()){
            NonAdminStatusDanhSachSach();
        }
        else{
            gotoxy(11,5);
            setTextColor(11,first);
            gotoxy(first.length() + 5,5);
            setTextColor(10,second);
        }
        gotoxy(70,15);
        setTextColor(10, "THÔNG BÁO");
        gotoxy(70,17);
        setTextColor(15, "1. Quay lại");
        KhungNguoiDung();
        gotoxy(13,9);
        setTextColor(15,"->"); 
        KhungGiaoDien();
        Nocursortype(FALSE);   
        gotoxy(16,10);    
        setTextColor(12, "Không tìm thấy từ khoá !");
        Loading();
    }
}

void NguoiDung::TimKiemEngineNamXuatBan(const std::string& keyTimKiem, bool &run, std::string first, std::string second) {
    run = false;
    for( auto x : this->VngayThangXuatBan ){
        std::string c;
        c = "";
        for( unsigned int i = x.length() - 1; i >= 0; i-- ){
            char ch = x[i];
            if(ch == ' '){
                break;
            }
            c += ch;
        }
        DaoNguocChuoi(c);
        if(c == keyTimKiem){
            run = true;
            break;
        }
    }
    if(run){
        KhungGiaoDienDanhSachThuVien();
        Nocursortype(FALSE);
        gotoxy(43,9);
        setTextColor(10,"Danh Sách Sách Trong Thư Viện");
        gotoxy(1,11);
        setTextColor(14,"Mã số sách\tTên sách\t\tChủ đề\t\tTác giả\t\t\tNhà xuất bản\t\tNgày xuất bản");
        textcolor(15);
        for( int i = 0; i < this->VngayThangXuatBan.size(); i++ ){
            std::string c = this->VngayThangXuatBan[i];
            std::string split;
            split = "";
            for( unsigned int j = c.length() - 1; j >= 0; j-- ){
                char ch = c[j];
                if(ch == ' '){
                    break;
                }
                split += ch;
            }
            DaoNguocChuoi(split);
            if(split == keyTimKiem){
                std::cout << this->VmaSoSach[i] << "\t\t" << this->VtenSach[i] << "\t\t" << this->VchuDe[i]
                          << "\t" << VtacGia[i]
                          << "\t\t" << this->VnhaXuatBan[i]
                          << "\t\t" << this->VngayThangXuatBan[i] << std::endl;
            }
        }
    }
    else{
        system("cls");
        if(!getCheckAdmin()){
            NonAdminStatusDanhSachSach();
        }
        else{
            gotoxy(11,5);
            setTextColor(11,first);
            gotoxy(first.length() + 5,5);
            setTextColor(10,second);
        }
        gotoxy(70,15);
        setTextColor(10, "THÔNG BÁO");
        gotoxy(70,17);
        setTextColor(15, "1. Quay lại");
        KhungNguoiDung();
        gotoxy(13,9);
        setTextColor(15,"->"); 
        KhungGiaoDien();
        Nocursortype(FALSE);   
        gotoxy(16,10);    
        setTextColor(12, "Không tìm thấy từ khoá !");
        Loading();
    }
}

void NguoiDung::TimKiemEngine(const std::string& keyTimKiem, std::vector<std::string> VtimKiem, bool &run, std::string first, std::string second) {
    run = false;
    for( const auto& x : VtimKiem ){
        if(x == keyTimKiem){
            run = true;
            break;
        }
    }
    if(run){
        KhungGiaoDienDanhSachThuVien();
        Nocursortype(FALSE);
        gotoxy(43,9);
        setTextColor(10,"Danh Sách Sách Trong Thư Viện");
        gotoxy(1,11);
        setTextColor(14,"Mã số sách\tTên sách\t\tChủ đề\t\tTác giả\t\t\tNhà xuất bản\t\tNgày xuất bản");
        textcolor(15);
        for( int i  = 0; i < VtimKiem.size(); i++ ){
            if(VtimKiem[i] == keyTimKiem){
                std::cout << this->VmaSoSach[i] << "\t\t" << this->VtenSach[i] << "\t\t" << this->VchuDe[i]
                          << "\t" << VtacGia[i]
                          << "\t\t" << this->VnhaXuatBan[i]
                          << "\t\t" << this->VngayThangXuatBan[i] << std::endl;
            }
        }
    }
    else{
        system("cls");
        if(!getCheckAdmin()){
            NonAdminStatusDanhSachSach();
        }
        else{
            gotoxy(11,5);
            setTextColor(11,first);
            gotoxy(first.length() + 5,5);
            setTextColor(10,second);
        }
        gotoxy(70,15);
        setTextColor(10, "THÔNG BÁO");
        gotoxy(70,17);
        setTextColor(15, "1. Quay lại");
        KhungNguoiDung();
        gotoxy(13,9);
        setTextColor(15,"->");  
        KhungGiaoDien();
        Nocursortype(FALSE);  
        gotoxy(16,10);    
        setTextColor(12, "Không tìm thấy từ khoá !");
        Loading();
    }
}

void NguoiDung::NonAdminStatusDanhSachSach(){
    gotoxy(11,5);
    setTextColor(11,"TRANG CHỦ");
    gotoxy(21,5);
    setTextColor(10,"XEM DANH SÁCH SÁCH TRONG THƯ VIỆN");
}

void NguoiDung::TimKiemThongTinSach(bool &run, bool caseAdmin, std::string first, std::string second) {
    bool loop = true;
    while(loop){
        system("cls");
        if(!caseAdmin){
            NonAdminStatusDanhSachSach();
        }
        else{
            gotoxy(11,5);
            setTextColor(11,first);
            gotoxy(first.length() + 5,5);
            setTextColor(10,second);
        }
        // need fixing
        InRaDanhSachSach();
        gotoxy(1,13 + this->VtenSach.size() + 1);
        ThongBaoDanhSachTimKiem();
        gotoxy(1,13 + this->VtenSach.size() + 1);
        setTextColor(12, "1. Tìm kiếm theo tên sách");
        int x = 1;
        int y = 13 + this->VtenSach.size() + 1;
        bool bTimKiemMain = true;
        while(bTimKiemMain){
            char TimKiemMain = _getch();
            switch(TimKiemMain){
                case 'w':{
                    if(y == 13 + this->VtenSach.size() + 1){
                        y = 13 + this->VtenSach.size() + 11;
                    }
                    else{
                        y -= 2;
                    }
                    if(y == 13 + this->VtenSach.size() + 11 ){
                        gotoxy(x,13 + this->VtenSach.size() + 1);
                        setTextColor(15,"1. Tìm kiếm theo tên sách");
                        gotoxy(x,y);
                        setTextColor(12,"6. Quay lại");
                    }
                    else if(y == 13 + this->VtenSach.size() + 9){
                        gotoxy(x,13 + this->VtenSach.size() + 11);
                        setTextColor(15,"6. Quay lại");
                        gotoxy(x,y);
                        setTextColor(12,"5. Tìm kiếm theo năm xuất bản");
                    }
                    else if(y == 13 + this->VtenSach.size() + 7){
                        gotoxy(x,13 + this->VtenSach.size() + 9);
                        setTextColor(15,"5. Tìm kiếm theo năm xuất bản");
                        gotoxy(x,y);
                        setTextColor(12,"4. Tìm kiếm theo nhà xuất bản");
                    }
                    else if(y == 13 + this->VtenSach.size() + 5){
                        gotoxy(x,13 + this->VtenSach.size() + 7);
                        setTextColor(15,"4. Tìm kiếm theo nhà xuất bản");
                        gotoxy(x,y);
                        setTextColor(12,"3. Tìm kiếm theo tác giả");
                    }
                    else if(y == 13 + this->VtenSach.size() + 3){
                        gotoxy(x,13 + this->VtenSach.size() + 5);
                        setTextColor(15,"3. Tìm kiếm theo tác giả");
                        gotoxy(x,y);
                        setTextColor(12,"2. Tìm kiếm theo chủ đề");
                    }
                    else if(y == 13 + this->VtenSach.size() + 1){
                        gotoxy(x,13 + this->VtenSach.size() + 3);
                        setTextColor(15,"2. Tìm kiếm theo chủ đề");
                        gotoxy(x,y);
                        setTextColor(12,"1. Tìm kiếm theo tên sách");
                    }
                    break;
                }
                case 's':{
                    if(y == 13 + this->VtenSach.size() + 11){
                        y = 13 + this->VtenSach.size() + 1;
                    }
                    else{
                        y += 2;
                    }
                    if(y == 13 + this->VtenSach.size() + 1){
                        gotoxy(x,13 + this->VtenSach.size() + 11);
                        setTextColor(15,"6. Quay lại");
                        gotoxy(x,y);
                        setTextColor(12,"1. Tìm kiếm theo tên sách");
                    }
                    else if(y == 13 + this->VtenSach.size() + 3){
                        gotoxy(x,13 + this->VtenSach.size() + 1);
                        setTextColor(15,"1. Tìm kiếm theo tên sách");
                        gotoxy(x,y);
                        setTextColor(12,"2. Tìm kiếm theo chủ đề");
                    }
                    else if(y == 13 + this->VtenSach.size() + 5){
                        gotoxy(x,13 + this->VtenSach.size() + 1);
                        setTextColor(15,"1. Tìm kiếm theo tên sách");
                        gotoxy(x,13 + this->VtenSach.size() + 3);
                        setTextColor(15,"2. Tìm kiếm theo chủ đề");
                        gotoxy(x,y);
                        setTextColor(12,"3. Tìm kiếm theo tác giả");
                    }
                    else if(y == 13 + this->VtenSach.size() + 7){
                        gotoxy(x,13 + this->VtenSach.size() + 1);
                        setTextColor(15,"1. Tìm kiếm theo tên sách");
                        gotoxy(x,13 + this->VtenSach.size() + 3);
                        setTextColor(15,"2. Tìm kiếm theo chủ đề");
                        gotoxy(x,13 + this->VtenSach.size() + 5);
                        setTextColor(15,"3. Tìm kiếm theo tác giả");
                        gotoxy(x,y);
                        setTextColor(12,"4. Tìm kiếm theo nhà xuất bản");
                    }
                    else if(y == 13 + this->VtenSach.size() + 9){
                        gotoxy(x,13 + this->VtenSach.size() + 1);
                        setTextColor(15,"1. Tìm kiếm theo tên sách");
                        gotoxy(x,13 + this->VtenSach.size() + 3);
                        setTextColor(15,"2. Tìm kiếm theo chủ đề");
                        gotoxy(x,13 + this->VtenSach.size() + 5);
                        setTextColor(15,"3. Tìm kiếm theo tác giả");
                        gotoxy(x,13 + this->VtenSach.size() + 7);
                        setTextColor(15,"4. Tìm kiếm theo nhà xuất bản");
                        gotoxy(x,y);
                        setTextColor(12,"5. Tìm kiếm theo năm xuất bản");
                    }
                    else if(y == 13 + this->VtenSach.size() + 11){
                        gotoxy(x,13 + this->VtenSach.size() + 1);
                        setTextColor(15,"1. Tìm kiếm theo tên sách");
                        gotoxy(x,13 + this->VtenSach.size() + 3);
                        setTextColor(15,"2. Tìm kiếm theo chủ đề");
                        gotoxy(x,13 + this->VtenSach.size() + 5);
                        setTextColor(15,"3. Tìm kiếm theo tác giả");
                        gotoxy(x,13 + this->VtenSach.size() + 7);
                        setTextColor(15,"4. Tìm kiếm theo nhà xuất bản");
                        gotoxy(x,13 + this->VtenSach.size() + 9);
                        setTextColor(15,"5. Tìm kiếm theo năm xuất bản");
                        gotoxy(x,y);
                        setTextColor(12,"6. Quay lại");
                    }
                    break;
                }
                case 13:{
                    if(y == 13 + this->VtenSach.size() + 1){
                        system("cls");
                        bool btimKiemNoiDung = true;
                        while(btimKiemNoiDung){
                            if(!caseAdmin){
                                NonAdminStatusDanhSachSach();
                            }
                            else{
                                gotoxy(11,5);
                                setTextColor(11,first);
                                gotoxy(first.length() + 5,5);
                                setTextColor(10,second);
                            }
                            KhungGiaoDien();
                            Nocursortype(FALSE);
                            gotoxy(70,15);
                            setTextColor(10, "THÔNG BÁO");
                            gotoxy(70,17);
                            setTextColor(15, "1. Quay lại");
                            KhungNguoiDung();
                            gotoxy(15,7);
                            setTextColor(11, "Nhập tên sách cần tìm kiếm:");
                            gotoxy(13,9);
                            setTextColor(15,"->");    
                            gotoxy(16,9);    
                            Nocursortype(TRUE);
                            std::string keyTimKiem;
                            std::getline(std::cin, keyTimKiem);
                            Nocursortype(FALSE);
                            if(keyTimKiem == "1"){
                                system("cls");
                                gotoxy(50,10);
                                setTextColor(14,"Quay lại..");
                                Loading();
                                btimKiemNoiDung = false;
                                bTimKiemMain = false;
                                continue;
                            }
                            system("cls");
                            if(!caseAdmin){
                                NonAdminStatusDanhSachSach();
                            }
                            else{
                                gotoxy(11,5);
                                setTextColor(11,first);
                                gotoxy(first.length() + 5,5);
                                setTextColor(10,second);
                            }
                            TimKiemEngine(keyTimKiem, this->VtenSach, run, first, second);
                            if(run){
                                std::cout << std::endl;
                                Nocursortype(TRUE);
                                setTextColor(15,"Nhập phím bất kì để quay lại");
                                char anyKey = _getch();
                                Nocursortype(FALSE);
                            }
                            btimKiemNoiDung = false;
                            bTimKiemMain = false;
                        }
                    }
                    else if(y == 13 + this->VtenSach.size() + 3){
                        system("cls");
                        bool btimKiemNoiDung = true;
                        while(btimKiemNoiDung){
                            if(!caseAdmin){
                                NonAdminStatusDanhSachSach();
                            }
                            else{
                                gotoxy(11,5);
                                setTextColor(11,first);
                                gotoxy(first.length() + 5,5);
                                setTextColor(10,second);
                            }
                            KhungGiaoDien();
                            Nocursortype(FALSE);
                            gotoxy(70,15);
                            setTextColor(10, "THÔNG BÁO");
                            gotoxy(70,17);
                            setTextColor(15, "1. Quay lại");
                            KhungNguoiDung();
                            gotoxy(15,7);
                            setTextColor(11, "Nhập chủ đề cần tìm kiếm:");
                            gotoxy(13,9);
                            setTextColor(15,"->");    
                            gotoxy(16,9);
                            Nocursortype(TRUE);    
                            std::string keyTimKiem;
                            std::getline(std::cin, keyTimKiem);
                            Nocursortype(FALSE);
                            if(keyTimKiem == "1"){
                                system("cls");
                                gotoxy(50,10);
                                setTextColor(14,"Quay lại..");
                                Loading();
                                btimKiemNoiDung = false;
                                bTimKiemMain = false;
                                continue;
                            }
                            system("cls");
                            if(!caseAdmin){
                                NonAdminStatusDanhSachSach();
                            }
                            else{
                                gotoxy(11,5);
                                setTextColor(11,first);
                                gotoxy(first.length() + 5,5);
                                setTextColor(10,second);
                            }
                            TimKiemEngineChuDe(keyTimKiem, run, first, second);
                            if(run){
                                std::cout << std::endl;
                                Nocursortype(TRUE);
                                setTextColor(15,"Nhập phím bất kì để quay lại");
                                char anyKey = _getch();
                                Nocursortype(FALSE);
                            }
                            btimKiemNoiDung = false;
                            bTimKiemMain = false;
                        }
                    }
                    else if(y == 13 + this->VtenSach.size() + 5){
                        system("cls");
                        
                        bool btimKiemNoiDung = true;
                        while(btimKiemNoiDung){
                            if(!caseAdmin){
                                NonAdminStatusDanhSachSach();
                            }
                            else{
                                gotoxy(11,5);
                                setTextColor(11,first);
                                gotoxy(first.length() + 5,5);
                                setTextColor(10,second);
                            }
                            KhungGiaoDien();
                            Nocursortype(FALSE);
                            gotoxy(70,15);
                            setTextColor(10, "THÔNG BÁO");
                            gotoxy(70,17);
                            setTextColor(15, "1. Quay lại");
                            KhungNguoiDung();
                            gotoxy(15,7);
                            setTextColor(11, "Nhập tác giả cần tìm kiếm:");
                            gotoxy(13,9);
                            setTextColor(15,"->");    
                            gotoxy(16,9);
                            Nocursortype(TRUE);    
                            std::string keyTimKiem;
                            std::getline(std::cin, keyTimKiem);
                            Nocursortype(FALSE);
                            if(keyTimKiem == "1"){
                                system("cls");
                                gotoxy(50,10);
                                setTextColor(14,"Quay lại..");
                                Loading();
                                btimKiemNoiDung = false;
                                bTimKiemMain = false;
                                continue;
                            }
                            system("cls");
                            if(!caseAdmin){
                                NonAdminStatusDanhSachSach();
                            }
                            else{
                                gotoxy(11,5);
                                setTextColor(11,first);
                                gotoxy(first.length() + 5,5);
                                setTextColor(10,second);
                            }
                            TimKiemEngine(keyTimKiem, this->VtacGia, run);
                            if(run){
                                std::cout << std::endl;
                                Nocursortype(TRUE);
                                setTextColor(15,"Nhập phím bất kì để quay lại");
                                char anyKey = _getch();
                                Nocursortype(FALSE);
                            }
                            btimKiemNoiDung = false;
                            bTimKiemMain = false;
                        }
                    }
                    else if(y == 13 + this->VtenSach.size() + 7){
                        system("cls");
                        bool btimKiemNoiDung = true;
                        while(btimKiemNoiDung){
                            if(!caseAdmin){
                                NonAdminStatusDanhSachSach();
                            }
                            else{
                                gotoxy(11,5);
                                setTextColor(11,first);
                                gotoxy(first.length() + 5,5);
                                setTextColor(10,second);
                            }
                            KhungGiaoDien();
                            Nocursortype(FALSE);
                            gotoxy(70,15);
                            setTextColor(10, "THÔNG BÁO");
                            gotoxy(70,17);
                            setTextColor(15, "1. Quay lại");
                            KhungNguoiDung();
                            gotoxy(15,7);
                            setTextColor(11, "Nhập nhà xuất bản cần tìm kiếm:");
                            gotoxy(13,9);
                            setTextColor(15,"->");    
                            gotoxy(16,9);   
                            Nocursortype(TRUE); 
                            std::string keyTimKiem;
                            std::getline(std::cin, keyTimKiem);
                            Nocursortype(FALSE);
                            if(keyTimKiem == "1"){
                                system("cls");
                                gotoxy(50,10);
                                setTextColor(14,"Quay lại..");
                                Loading();
                                btimKiemNoiDung = false;
                                bTimKiemMain = false;
                                continue;
                            }
                            system("cls");
                            if(!caseAdmin){
                                NonAdminStatusDanhSachSach();
                            }
                            else{
                                gotoxy(11,5);
                                setTextColor(11,first);
                                gotoxy(first.length() + 5,5);
                                setTextColor(10,second);
                            }
                            TimKiemEngine(keyTimKiem, this->VnhaXuatBan, run);
                            if(run){
                                std::cout << std::endl;
                                Nocursortype(TRUE);
                                setTextColor(15,"Nhập phím bất kì để quay lại");
                                char anyKey = _getch();
                                Nocursortype(FALSE);
                            }
                            btimKiemNoiDung = false;
                            bTimKiemMain = false;
                        }
                    }
                    else if(y == 13 + this->VtenSach.size() + 9){
                        system("cls");
                        bool btimKiemNoiDung = true;
                        while(btimKiemNoiDung){
                            if(!caseAdmin){
                                NonAdminStatusDanhSachSach();
                            }
                            else{
                                gotoxy(11,5);
                                setTextColor(11,first);
                                gotoxy(first.length() + 5,5);
                                setTextColor(10,second);
                            }
                            KhungGiaoDien();
                            Nocursortype(FALSE);
                            gotoxy(70,15);
                            setTextColor(10, "THÔNG BÁO");
                            gotoxy(70,17);
                            setTextColor(15, "1. Quay lại");
                            KhungNguoiDung();
                            gotoxy(15,7);
                            setTextColor(11, "Nhập năm xuất bản cần tìm kiếm:");
                            gotoxy(13,9);
                            setTextColor(15,"->");    
                            gotoxy(16,9);
                            Nocursortype(TRUE);    
                            std::string keyTimKiem;
                            std::getline(std::cin, keyTimKiem);
                            Nocursortype(FALSE);
                            if(keyTimKiem == "1"){
                                system("cls");
                                gotoxy(50,10);
                                setTextColor(14,"Quay lại..");
                                Loading();
                                btimKiemNoiDung = false;
                                bTimKiemMain = false;
                                continue;
                            }
                            system("cls");
                            if(!caseAdmin){
                                NonAdminStatusDanhSachSach();
                            }
                            else{
                                gotoxy(11,5);
                                setTextColor(11,first);
                                gotoxy(first.length() + 5,5);
                                setTextColor(10,second);
                            }
                            TimKiemEngineNamXuatBan(keyTimKiem, run);
                            if(run){
                                std::cout << std::endl;
                                Nocursortype(TRUE);
                                setTextColor(15,"Nhập phím bất kì để quay lại");
                                char anyKey = _getch();
                                Nocursortype(FALSE);
                            }
                            btimKiemNoiDung = false;
                            bTimKiemMain = false;
                        }
                    }
                    else if(y == 13 + this->VtenSach.size() + 11){
                        system("cls");
                        gotoxy(50,10);
                        setTextColor(14,"Quay lại..");
                        Loading();
                        bTimKiemMain = false;
                        loop = false;
                    }
                    break;
                }
            }
        }    
    }
}

void NguoiDung::XuLiChuDeSach(std::string &chuDe) {
    for(char & i : chuDe){
        char ch = i;
        if(ch == ' '){
            i = '_';
        }
    }
    chuDe = "#" + chuDe;
}

void NguoiDung::BoSungNgayThang(std::string &date) {
    if(date.length() == 1){
        date = "0" + date;
    }
}

void NguoiDung::BoSungSoTrang(std::string &number) {
    if(number.length() == 1){
        number = "0" + number;
    }
}

bool NguoiDung::KiemTraKiTuNgayThangNam(const std::string& date) {
    for(char ch : date){
        if(ch < '0' || ch > '9'){
            return false;
        }
    }
    return true;
}


bool NguoiDung::KiemTraTinhHopLeNamXuatBan(const std::string& ngay,const std::string& thang ,const std::string& nam) {
    if(!KiemTraKiTuNgayThangNam(ngay) || !KiemTraKiTuNgayThangNam(thang) || !KiemTraKiTuNgayThangNam(nam)){
        return false;
    }
    int Ngay = std::stoi(ngay);
    int Thang = std::stoi(thang);
    int Nam = std::stoi(nam);
    bool namNhuan = false;
    if(Ngay == 0 || Thang == 0){
        return false;
    }
    if((Nam % 4 == 0 && Nam % 100 != 0) || (Nam % 400 == 0)){
        namNhuan = true;
    }
    if(Thang == 1 || Thang == 3 || Thang == 5 || Thang == 7 || Thang == 8 || Thang == 10 || Thang == 12){
        if(Ngay <= 31){
            return true;
        }
        return false;
    }
    else if(Thang == 4 || Thang == 6 || Thang == 9 || Thang == 11){
        if(Ngay <= 30){
            return true;
        }
        return false;
    }
    else if(Thang == 2){
        if(namNhuan){
            if(Ngay <= 29){
                return true;
            }
            return false;
        }
        else{
            if(Ngay <= 28){
                return true;
            }
            return false;
        }
    }
    return false;
}

void NguoiDung::QuanLiNguoiDung() {
    if(getCheckAdmin()){ // admin
        bool bloopMain = true;
        while(bloopMain){
            // tracking
            system("cls");
            KhungGiaoDien();
            Nocursortype(FALSE);
            GiaoDienAdmin();
            gotoxy(11,7);
            textcolor(15);
            setTextColor(12,"1. Quản lí người dùng");
            gotoxy(11,5);
            setTextColor(10,"TRANG CHỦ:");
            KhungNguoiDung();
            gotoxy(70,15);
            setTextColor(10, "THÔNG BÁO"); 
            int x = 11;
            int y = 7;
            // rebuild
            bool bloopMainIn = true;
            while(bloopMainIn){
                char nhapLoopMainIn = _getch();
                switch(nhapLoopMainIn){
                    case 'w':{
                        if(y == 7){
                            y = 11;
                        }
                        else{
                            y -= 2;
                        }
                        if(y == 7){
                            gotoxy(x,9);
                            setTextColor(15,"2. Quản lí sách trong thư viện");
                            gotoxy(x,y);
                            setTextColor(12,"1. Quản lí người dùng");
                        }
                        else if(y == 9){
                            gotoxy(x,11);
                            setTextColor(15,"3. Đăng xuất");
                            gotoxy(x,y);
                            setTextColor(12,"2. Quản lí sách trong thư viện");
                        }
                        else if(y == 11){
                            gotoxy(x,7);
                            setTextColor(15,"1. Quản lí người dùng");
                            gotoxy(x,y);
                            setTextColor(12,"3. Đăng xuất");
                        }
                        break;
                    }
                    case 's':{
                        if(y == 11){
                            y = 7;
                        }
                        else{
                            y += 2;
                        }
                        if(y == 7){
                            gotoxy(x,11);
                            setTextColor(15,"3. Đăng xuất");
                            gotoxy(x,y);
                            setTextColor(12,"1. Quản lí người dùng");
                        }
                        else if(y == 9){
                            gotoxy(x,7);
                            setTextColor(15,"1. Quản lí người dùng");
                            gotoxy(x,y);
                            setTextColor(12,"2. Quản lí sách trong thư viện");
                        }
                        else if(y == 11){
                            gotoxy(x,7);
                            setTextColor(15,"1. Quản lí người dùng");
                            gotoxy(x,9);
                            setTextColor(15,"2. Quản lí sách trong thư viện");
                            gotoxy(x,y);
                            setTextColor(12,"3. Đăng xuất");
                        }
                        break;
                    }
                    case 13:{
                        if(y == 7){
                            system("cls");
                            //
                            bool bloopnhapQuanLi = true;
                            while(bloopnhapQuanLi){
                                KhungGiaoDien();
                                Nocursortype(FALSE);
                                gotoxy(11,5);
                                setTextColor(11,"TRANG CHỦ");
                                gotoxy(21,5);
                                setTextColor(10,"QUẢN LÍ NGƯỜI DÙNG");
                                ThongBaoQuanLiNguoiDung();
                                gotoxy(11,7);
                                textcolor(15);
                                setTextColor(12,"1. Thêm người dùng");
                                KhungNguoiDung();
                                gotoxy(70,15);
                                setTextColor(10, "THÔNG BÁO"); 
                                int xx = 11;
                                int yy = 7;
                                bool  bNhapChinhSuaTaiKhoan = true;
                                while(bNhapChinhSuaTaiKhoan){
                                    char nhapChinhSuaTaiKhoan = _getch();
                                    switch(nhapChinhSuaTaiKhoan){
                                        case 'w':{
                                            if(yy == 7){
                                                yy = 15;
                                            }
                                            else{
                                                yy -= 2;
                                            }
                                            if(yy == 7){
                                                gotoxy(xx,9);
                                                setTextColor(15,"2. Xoá người dùng");
                                                gotoxy(xx,yy);
                                                setTextColor(12,"1. Thêm người dùng");
                                            }
                                            else if(yy == 9){
                                                gotoxy(xx,11);
                                                setTextColor(15,"3. Sửa đổi thông tin người dùng");
                                                gotoxy(xx,yy);
                                                setTextColor(12,"2. Xoá người dùng");
                                            }
                                            else if(yy == 11){
                                                gotoxy(xx,13);
                                                setTextColor(15,"4. Xem danh sách người dùng" );
                                                gotoxy(xx,yy);
                                                setTextColor(12,"3. Sửa đổi thông tin người dùng");
                                            }
                                            else if(yy == 13){
                                                gotoxy(xx,15);
                                                setTextColor(15,"5. Quay lại");
                                                gotoxy(xx,yy);
                                                setTextColor(12,"4. Xem danh sách người dùng" );
                                            }
                                            else if(yy == 15){
                                                gotoxy(xx,7);
                                                setTextColor(15,"1. Thêm người dùng");
                                                gotoxy(xx,yy);
                                                setTextColor(12,"5. Quay lại");
                                            }
                                            break;
                                        }
                                        case 's':{
                                            if(yy == 15){
                                                yy = 7;
                                            }
                                            else{
                                                yy += 2;
                                            }
                                            if(yy == 7){
                                                gotoxy(xx,15);
                                                setTextColor(15,"5. Quay lại");
                                                gotoxy(xx,yy);
                                                setTextColor(12,"1. Thêm người dùng");
                                            }
                                            else if(yy == 9){
                                                gotoxy(xx,7);
                                                setTextColor(15,"1. Thêm người dùng");
                                                gotoxy(xx,yy);
                                                setTextColor(12,"2. Xoá người dùng");
                                            }
                                            else if(yy == 11){
                                                gotoxy(xx,7);
                                                setTextColor(15,"1. Thêm người dùng");
                                                gotoxy(xx,9);
                                                setTextColor(15,"2. Xoá người dùng");
                                                gotoxy(xx,yy);
                                                setTextColor(12,"3. Sửa đổi thông tin người dùng");
                                            }
                                            else if(yy == 13){
                                                gotoxy(xx,7);
                                                setTextColor(15,"1. Thêm người dùng");
                                                gotoxy(xx,9);
                                                setTextColor(15,"2. Xoá người dùng");
                                                gotoxy(xx,11);
                                                setTextColor(15,"3. Sửa đổi thông tin người dùng");
                                                gotoxy(xx,yy);
                                                setTextColor(12,"4. Xem danh sách người dùng" );
                                            }
                                            else if(yy == 15){
                                                gotoxy(xx,7);
                                                setTextColor(15,"1. Thêm người dùng");
                                                gotoxy(xx,9);
                                                setTextColor(15,"2. Xoá người dùng");
                                                gotoxy(xx,11);
                                                setTextColor(15,"3. Sửa đổi thông tin người dùng");
                                                gotoxy(xx,13);
                                                setTextColor(15,"4. Xem danh sách người dùng" );
                                                gotoxy(xx,yy);
                                                setTextColor(12,"5. Quay lại");
                                            }
                                            break;
                                        }
                                        case 13:{
                                            if(yy == 7){
                                                bool bthemNguoiDung = true;
                                                while(bthemNguoiDung){
                                                    system("cls");
                                                    KhungGiaoDien();
                                                    Nocursortype(FALSE);
                                                    gotoxy(11,5);
                                                    setTextColor(11,"QUẢN LÍ NGƯỜI DÙNG");
                                                    gotoxy(30,5);
                                                    setTextColor(10,"THÊM NGƯỜI DÙNG");
                                                    KhungNguoiDung();
                                                    gotoxy(70,15);
                                                    setTextColor(10, "THÔNG BÁO");
                                                    gotoxy(70,17);
                                                    setTextColor(15, "1. Quay lại");   
                                                    gotoxy(15,7);
                                                    setTextColor(11, "Nhập tên người dùng:");  
                                                    gotoxy(13,9);
                                                    setTextColor(15,"->");
                                                    gotoxy(16,9);
                                                    Nocursortype(TRUE);
                                                    std::string themTenNguoiDung;
                                                    std::getline(std::cin, themTenNguoiDung);
                                                    Nocursortype(FALSE);
                                                    if(themTenNguoiDung == "1"){
                                                        system("cls");
                                                        gotoxy(50,10);
                                                        setTextColor(14,"Quay lại..");
                                                        Loading();
                                                        bthemNguoiDung = false;
                                                        bNhapChinhSuaTaiKhoan = false;
                                                        continue;
                                                    }
                                                    if(themTenNguoiDung.empty()){
                                                        bool checkTrungRandomUserId;
                                                        int randomID;
                                                        std::srand(static_cast<unsigned int>(std::time(nullptr)));
                                                        do{
                                                            checkTrungRandomUserId = false;
                                                            int tmpUserID = std::rand() % 10000 + 100;
                                                            randomID = tmpUserID;
                                                            for( auto x : this->VrandomID ){
                                                                if(x == randomID){
                                                                    checkTrungRandomUserId = true;
                                                                    break;
                                                                }
                                                            }
                                                        }while(checkTrungRandomUserId);  
                                                        this->VrandomID.push_back(randomID);      
                                                        themTenNguoiDung = "USER" + std::to_string(randomID);
                                                    }     
                                                    system("cls");
                                                    KhungGiaoDien();
                                                    Nocursortype(FALSE);
                                                    gotoxy(11,5);
                                                    setTextColor(11,"QUẢN LÍ NGƯỜI DÙNG");
                                                    gotoxy(30,5);
                                                    setTextColor(10,"THÊM NGƯỜI DÙNG");
                                                    KhungNguoiDung();
                                                    gotoxy(70,15);
                                                    setTextColor(10, "THÔNG BÁO");   
                                                    gotoxy(15,7);
                                                    setTextColor(11, "Tên người dùng:");  
                                                    ChuanHoaChuoi(themTenNguoiDung);
                                                    gotoxy(31,7);
                                                    setTextColor(15, themTenNguoiDung);  
                                                    gotoxy(15,9);
                                                    setTextColor(14, "Thêm tên người dùng thành công !!"); 
                                                    bNhapChinhSuaTaiKhoan = false;
                                                    //
                                                    Loading();
                                                    this->VtenNguoiDung.push_back(themTenNguoiDung);
                                                    this->VtenTaiKhoan.emplace_back("1");
                                                    this->VmatKhau.emplace_back("1");
                                                    // tao random cho userid
                                                    bool checkTrungUserId;
                                                    std::string copyUserID;
                                                    std::srand(static_cast<unsigned int>(std::time(nullptr)));
                                                    do{
                                                        checkTrungUserId = false;
                                                        int tmpUserID = std::rand() % 10000 + 100;
                                                        copyUserID = std::to_string(tmpUserID);
                                                        for( const auto& x : this->VuserID ){
                                                            if(x == copyUserID){
                                                                checkTrungUserId = true;
                                                                break;
                                                            }
                                                        }
                                                    }while(checkTrungUserId);
                                                    this->VuserID.push_back(copyUserID);
                                                    //
                                                    bthemNguoiDung = false;
                                                }
                                            }
                                            else if(yy == 9){
                                                bool bxoaNguoiDung = true;
                       	                        while(bxoaNguoiDung){
                                                    system("cls");
                                                    KhungGiaoDienLongFirst();
                                                    Nocursortype(FALSE);
                                                    gotoxy(11,5);
                                                    setTextColor(11,"QUẢN LÍ NGƯỜI DÙNG");
                                                    gotoxy(30,5);
                                                    setTextColor(10,"XOÁ NGƯỜI DÙNG");
                                                    InRaDanhSachNguoiDung();
                                                    gotoxy(60,17);
                                                    setTextColor(10, "THÔNG BÁO");
                                                    gotoxy(60,19);
                                                    setTextColor(15, "1. Quay lại");
                                                    gotoxy(60,9);
                                                    setTextColor(11,"Nhập UserID người dùng để xoá:");  
                                                    gotoxy(58,11);
                                                    setTextColor(15,"->");
                                                    gotoxy(61,11);
                                                    Nocursortype(TRUE);
                                                    std::string copyUserID;
                                                    InputCheckCin(copyUserID);
                                                    Nocursortype(FALSE);
                                                    if(copyUserID == "1"){
                                                        system("cls");
                                                        gotoxy(50,10);
                                                        setTextColor(14,"Quay lại..");
                                                        Loading();
                                                        bxoaNguoiDung = false;
                                                        bNhapChinhSuaTaiKhoan = false;
                                                        continue;
                                                    }
                                                    if(copyUserID.empty()){
                                                        gotoxy(60,13);
                                                        setTextColor(12,"Nhập không hợp lệ, vui lòng nhập lại");
                                                        Loading();
                                                        continue;
                                                    }
                                                    bool checkCoUserIDKhong = false;
                                                    int position;
                                                    for( int i = 0; i < this->VuserID.size(); i++ ){
                                                        if(this->VuserID[i] == copyUserID){
                                                        checkCoUserIDKhong = true;
                                                        position = i;
                                                        break;
                                                        }
                                                    }
                                                    if(checkCoUserIDKhong){
                                                        for( unsigned int i = this->VuserID.size() - 1; i >= 0; i--){
                                                            if(i == position){
                                                                this->VuserID.erase(this->VuserID.begin() + i, this->VuserID.begin() + i + 1);
                                                                this->VtenNguoiDung.erase(this->VtenNguoiDung.begin() + i, this->VtenNguoiDung.begin() + i + 1);
                                                                this->VtenTaiKhoan.erase(this->VtenTaiKhoan.begin() + i, this->VtenTaiKhoan.begin() + i + 1);
                                                                this->VmatKhau.erase(this->VmatKhau.begin() + i, this->VmatKhau.begin() + i + 1);
                                                                break;
                                                            }
                                                        }
                                                        gotoxy(60,13);
                                                        setTextColor(14,"Xoá người dùng thành công !!");
                                                        Loading();
                                                        bxoaNguoiDung = false;
                                                        bNhapChinhSuaTaiKhoan = false;
                                                        continue;
                                                    }
                                                    else{
                                                        gotoxy(60,13);
                                                        setTextColor(12,"UserID không tồn tại hoặc không đúng, vui lòng nhập lại");
                                                        Loading();
                                                        continue;
                                                    }
                                                }
                                            }
                                            else if(yy == 11){
                                                bool bSuaDoiThongTinNguoiDung = true; // father
                                                bool nhapUserID = true; // son
                                                bool nhapThayDoiThongTin = false; // son
                                                while(bSuaDoiThongTinNguoiDung){
                                                    std::string nhapUserIDNguoiDung;
                                                    bool nhapUserID = true;
                                                    int position;
                                                    while(nhapUserID){
                                                        system("cls");
                                                        KhungGiaoDienLongFirst();
                                                        Nocursortype(FALSE);
                                                        gotoxy(11,5);   
                                                        setTextColor(11,"QUẢN LÍ NGƯỜI DÙNG");
                                                        gotoxy(30,5);
                                                        setTextColor(10,"SỬA ĐỔI THÔNG TIN NGƯỜI DÙNG");
                                                        InRaDanhSachNguoiDung();
                                                        gotoxy(60,17);
                                                        setTextColor(10, "THÔNG BÁO");
                                                        gotoxy(60,19);
                                                        setTextColor(15, "1. Quay lại");
                                                        gotoxy(60,9);
                                                        setTextColor(11,"Nhập UserID người dùng:");  
                                                        gotoxy(58,11);
                                                        setTextColor(15,"->");  
                                                        gotoxy(61,11);
                                                        Nocursortype(TRUE);
                                                        InputCheckCin(nhapUserIDNguoiDung);
                                                        Nocursortype(FALSE);
                                                        if(nhapUserIDNguoiDung == "1"){
                                                            system("cls");
                                                            gotoxy(50,10);
                                                            setTextColor(14,"Quay lại..");
                                                            Loading();
                                                            nhapUserID = false;
                                                            bNhapChinhSuaTaiKhoan = false;
                                                            bSuaDoiThongTinNguoiDung = false;
                                                            continue;
                                                        }
                                                        if(nhapUserIDNguoiDung.empty()){
                                                            gotoxy(60,13);
                                                            setTextColor(12,"Nhập không hợp lệ, vui lòng nhập lại");
                                                            Loading();
                                                            continue;
                                                        }  
                                                        bool checkCoUserIDNguoiDung = false;
                                                        for( int i = 0; i < this->VuserID.size(); i++ ){
                                                            if(nhapUserIDNguoiDung == this->VuserID[i]){
                                                                checkCoUserIDNguoiDung = true;
                                                                position = i;
                                                                break;
                                                            }
                                                        }
                                                        if(checkCoUserIDNguoiDung){
                                                            nhapUserID = false;
                                                            nhapThayDoiThongTin = true;
                                                            continue;
                                                        }
                                                        else{
                                                            gotoxy(60,13);
                                                            setTextColor(12,"UserID không tồn tại hoặc không đúng, vui lòng nhập lại");
                                                            Loading();
                                                            continue;
                                                        }        
                                                    }
                                                    while(nhapThayDoiThongTin){
                                                        system("cls");
                                                        KhungGiaoDienLongFirst();
                                                        Nocursortype(FALSE);
                                                        gotoxy(11,5);
                                                        setTextColor(11,"QUẢN LÍ NGƯỜI DÙNG");
                                                        gotoxy(30,5);
                                                        setTextColor(10,"SỬA ĐỔI THÔNG TIN NGƯỜI DÙNG");
                                                        gotoxy(60,17);
                                                        setTextColor(10, "THÔNG BÁO");
                                                        gotoxy(60,19);
                                                        setTextColor(15, "1. Quay lại nhập UserID người dùng");
                                                        gotoxy(60,21);
                                                        setTextColor(15, "2. Thoát sửa đổi thông tin người dùng");
                                                        InRaDanhSachNguoiDung();
                                                        gotoxy(60,9);
                                                        setTextColor(10,"UserID người dùng:");
                                                        gotoxy(79,9);
                                                        setTextColor(15, nhapUserIDNguoiDung);
                                                        gotoxy(60,10);
                                                        setTextColor(11,"Nhập tên người dùng mới:");
                                                        gotoxy(58,12);
                                                        setTextColor(15,"->");
                                                        gotoxy(61,12);
                                                        Nocursortype(TRUE);
                                                        std::string nhapTenNguoiDungMoi;
                                                        std::getline(std::cin, nhapTenNguoiDungMoi);
                                                        Nocursortype(FALSE);
                                                        if(nhapTenNguoiDungMoi == "1"){
                                                            system("cls");
                                                            gotoxy(50,10);
                                                            setTextColor(14,"Quay lại..");
                                                            Loading();
                                                            nhapThayDoiThongTin = false;
                                                            continue;
                                                        }
                                                        if(nhapTenNguoiDungMoi == "2"){
                                                            system("cls");
                                                            gotoxy(50,10);
                                                            setTextColor(14,"Quay lại..");
                                                            Loading();
                                                            nhapThayDoiThongTin = false;
                                                            bSuaDoiThongTinNguoiDung = false;
                                                            bNhapChinhSuaTaiKhoan = false;
                                                            continue;
                                                        }
                                                        if(nhapTenNguoiDungMoi.empty()){
                                                            gotoxy(60,14);
                                                            setTextColor(12,"Nhập không hợp lệ, vui lòng nhập lại");
                                                            Loading();
                                                            continue;
                                                        }
                                                        //
                                                        system("cls");
                                                        KhungGiaoDienLongFirst();
                                                        Nocursortype(FALSE);
                                                        gotoxy(11,5);
                                                        setTextColor(11,"QUẢN LÍ NGƯỜI DÙNG");
                                                        gotoxy(30,5);
                                                        setTextColor(10,"SỬA ĐỔI THÔNG TIN NGƯỜI DÙNG");
                                                        gotoxy(60,17);
                                                        setTextColor(10, "THÔNG BÁO");
                                                        gotoxy(60,19);
                                                        setTextColor(15, "1. Quay lại nhập UserID người dùng");
                                                        gotoxy(60,21);
                                                        setTextColor(15, "2 Thoát sửa đổi thông tin người dùng");
                                                        InRaDanhSachNguoiDung();
                                                        gotoxy(60,9);
                                                        setTextColor(10,"UserID người dùng:");
                                                        gotoxy(79,9);
                                                        setTextColor(15, nhapUserIDNguoiDung);
                                                        gotoxy(60,10);
                                                        setTextColor(10,"Tên người dùng mới:");
                                                        ChuanHoaChuoi(nhapTenNguoiDungMoi);
                                                        gotoxy(80,10);
                                                        setTextColor(15,nhapTenNguoiDungMoi);
                                                        gotoxy(60,12);
                                                        setTextColor(14,"Thay đổi thành công !!");
                                                        //
                                                        this->VtenNguoiDung[position] = nhapTenNguoiDungMoi;
                                                        Loading();
                                                        nhapThayDoiThongTin = false;
                                                        bSuaDoiThongTinNguoiDung = false;
                                                        bNhapChinhSuaTaiKhoan = false;
                                                    }
                                                }
                                            }
                                            else if(yy == 13){
                                                system("cls");
                                                KhungGiaoDienLongFirst();
                                                Nocursortype(FALSE);
                                                gotoxy(11,5);
                                                setTextColor(11,"QUẢN LÍ NGƯỜI DÙNG");
                                                gotoxy(30,5);
                                                setTextColor(10,"XEM DANH SÁCH NGƯỜI DÙNG");
                                                InRaDanhSachNguoiDung();
                                                gotoxy(70,7);
                                                setTextColor(10, "THÔNG BÁO");  
                                                gotoxy(70,9);
                                                Nocursortype(TRUE);
                                                setTextColor(15,"Nhập phím bất kì để quay lại");
                                                gotoxy(70,10);
                                                char anyKey = _getch();
                                                Nocursortype(FALSE);
                                                system("cls");
                                                bNhapChinhSuaTaiKhoan = false;
                                            }
                                            else if(yy == 15){
                                                system("cls");
                                                gotoxy(50,10);
                                                setTextColor(14,"Quay lại..");
                                                Loading();
                                                bNhapChinhSuaTaiKhoan = false;
                                                bloopnhapQuanLi = false;
                                                bloopMainIn = false;
                                            }
                                            break;
                                        }
                                    }
                                }
                                // fixing
                            }
                        }
                        else if(y == 9){
                            system("cls");
                            // quan li sach trong thu vien
                            bool bloopnhapQuanLi = true;
                            while(bloopnhapQuanLi){
                                KhungGiaoDien();
                                Nocursortype(FALSE);
                                gotoxy(11,5);
                                setTextColor(11,"TRANG CHỦ");
                                gotoxy(21,5);
                                setTextColor(10,"QUẢN LÍ SÁCH TRONG THƯ VIỆN");
                                ThongBaoQuanLiSach();
                                gotoxy(11,7);
                                textcolor(15);
                                setTextColor(12,"1. Thêm sách");
                                KhungNguoiDung();
                                gotoxy(70,15);
                                setTextColor(10, "THÔNG BÁO"); 
                                // start
                                int xx = 11;
                                int yy = 7;
                                bool  bNhapChinhSuaTaiKhoan = true;
                                while(bNhapChinhSuaTaiKhoan){
                                    char nhapChinhSuaTaiKhoan = _getch();
                                    switch(nhapChinhSuaTaiKhoan){
                                        case 'w':{
                                            if(yy == 7){
                                                yy = 15;
                                            }
                                            else{
                                                yy -= 2;
                                            }
                                            if(yy == 7){
                                                gotoxy(xx,9);
                                                setTextColor(15,"2. Xoá sách" );
                                                gotoxy(xx,yy);
                                                setTextColor(12,"1. Thêm sách");
                                            }
                                            else if(yy == 9){
                                                gotoxy(xx,11);
                                                setTextColor(15,"3. Sửa đổi thông tin sách");
                                                gotoxy(xx,yy);
                                                setTextColor(12,"2. Xoá sách" );
                                            }
                                            else if(yy == 11){
                                                gotoxy(xx,13);
                                                setTextColor(15,"4. Xem danh sách sách trong thư viện" );
                                                gotoxy(xx,yy);
                                                setTextColor(12,"3. Sửa đổi thông tin sách");
                                            }
                                            else if(yy == 13){
                                                gotoxy(xx,15);
                                                setTextColor(15,"5. Quay lại");
                                                gotoxy(xx,yy);
                                                setTextColor(12,"4. Xem danh sách sách trong thư viện");
                                            }
                                            else if(yy == 15){
                                                gotoxy(xx,7);
                                                setTextColor(15,"1. Thêm sách");
                                                gotoxy(xx,yy);
                                                setTextColor(12,"5. Quay lại");
                                            }
                                            break;
                                        }
                                        case 's':{
                                            if(yy == 15){
                                                yy = 7;
                                            }
                                            else{
                                                yy += 2;
                                            }
                                            if(yy == 7){
                                                gotoxy(xx,15);
                                                setTextColor(15,"5. Quay lại");
                                                gotoxy(xx,yy);
                                                setTextColor(12,"1. Thêm sách");
                                            }
                                            else if(yy == 9){
                                                gotoxy(xx,7);
                                                setTextColor(15,"1. Thêm sách");
                                                gotoxy(xx,yy);
                                                setTextColor(12,"2. Xoá sách");
                                            }
                                            else if(yy == 11){
                                                gotoxy(xx,7);
                                                setTextColor(15,"1. Thêm sách");
                                                gotoxy(xx,9);
                                                setTextColor(15,"2. Xoá sách");
                                                gotoxy(xx,yy);
                                                setTextColor(12,"3. Sửa đổi thông tin sách");
                                            }
                                            else if(yy == 13){
                                                gotoxy(xx,7);
                                                setTextColor(15,"1. Thêm sách");
                                                gotoxy(xx,9);
                                                setTextColor(15,"2. Xoá sách");
                                                gotoxy(xx,11);
                                                setTextColor(15,"3. Sửa đổi thông tin sách");
                                                gotoxy(xx,yy);
                                                setTextColor(12,"4. Xem danh sách sách trong thư viện" );
                                            }
                                            else if(yy == 15){
                                                gotoxy(xx,7);
                                                setTextColor(15,"1. Thêm sách");
                                                gotoxy(xx,9);
                                                setTextColor(15,"2. Xoá sách");
                                                gotoxy(xx,11);
                                                setTextColor(15,"3. Sửa đổi thông tin sách");
                                                gotoxy(xx,13);
                                                setTextColor(15,"4. Xem danh sách sách trong thư viện" );
                                                gotoxy(xx,yy);
                                                setTextColor(12,"5. Quay lại");
                                            }
                                            break;
                                        }
                                        case 13:{
                                            if(yy == 7){
                                                // them sach
                                                bool bThemSach = true;
                                                bool btenSach = true;
                                                bool bchuDe = false;
                                                bool btacGia = false;
                                                bool bnhaXuatBan = false;
                                                bool bngayThangXuatBan = false;
                                                bool bsoTrang = false;
                                                bool bsoBanCopyTrongThuVien = false;
                                                while(bThemSach){
                                                    while(btenSach){
                                                        system("cls");
                                                        KhungGiaoDien();
                                                        Nocursortype(FALSE);
                                                        gotoxy(11,5);
                                                        setTextColor(11,"QUẢN LÍ SÁCH TRONG THƯ VIỆN");
                                                        gotoxy(39,5);
                                                        setTextColor(10,"THÊM SÁCH");
                                                        KhungNguoiDung();
                                                        gotoxy(70,15);
                                                        setTextColor(10, "THÔNG BÁO");
                                                        gotoxy(70,17);
                                                        setTextColor(15, "1. Quay lại");
                                                        gotoxy(11,7);
                                                        setTextColor(11, "Nhập tên sách:");
                                                        gotoxy(9,9);
                                                        setTextColor(15, "->");
                                                        gotoxy(12,9);
                                                        Nocursortype(TRUE);
                                                        std::getline(std::cin, this->tenSach);
                                                        Nocursortype(FALSE);
                                                        if(this->tenSach == "1"){
                                                            system("cls");
                                                            gotoxy(50,10);
                                                            setTextColor(14,"Quay lại..");
                                                            Loading();
                                                            btenSach = false;
                                                            bThemSach = false;
                                                            bNhapChinhSuaTaiKhoan = false;
                                                            continue;
                                                        }
                                                        if(this->tenSach.empty()){
                                                            gotoxy(11,10);
                                                            setTextColor(12,"Nhập không hợp lệ, vui lòng nhập lại");
                                                            Loading();
                                                            continue;
                                                        }
                                                        btenSach = false;
                                                        bchuDe = true;
                                                    }
                                                    while(bchuDe){
                                                        system("cls");
                                                        KhungGiaoDien();
                                                        Nocursortype(FALSE);
                                                        gotoxy(11,5);
                                                        setTextColor(11,"QUẢN LÍ SÁCH TRONG THƯ VIỆN");
                                                        gotoxy(39,5);
                                                        setTextColor(10,"THÊM SÁCH");
                                                        KhungNguoiDung();
                                                        gotoxy(70,15);
                                                        setTextColor(10, "THÔNG BÁO");
                                                        gotoxy(70,17);
                                                        setTextColor(15, "1. Quay lại nhập tên sách");
                                                        gotoxy(70,19);
                                                        setTextColor(15, "2. Thoát thêm sách");
                                                        gotoxy(11,7);
                                                        setTextColor(10, "Tên sách:");
                                                        gotoxy(21,7);
                                                        setTextColor(15, this->tenSach);
                                                        gotoxy(11,8);
                                                        setTextColor(11, "Nhập chủ đề:");
                                                        gotoxy(9,10);
                                                        setTextColor(15, "->");
                                                        gotoxy(12,10);
                                                        Nocursortype(TRUE);
                                                        std::getline(std::cin, this->chuDe);
                                                        Nocursortype(FALSE);
                                                        if(this->chuDe == "1"){
                                                            gotoxy(11,11);
                                                            setTextColor(14, "Quay lại..");
                                                            Loading();
                                                            btenSach = true;
                                                            bchuDe = false;
                                                            continue;
                                                        }
                                                        if(this->chuDe == "2"){
                                                            system("cls");
                                                            gotoxy(50,10);
                                                            setTextColor(14,"Thoát thêm sách..");
                                                            Loading();
                                                            bchuDe = false;
                                                            bThemSach = false;
                                                            bNhapChinhSuaTaiKhoan = false;
                                                            continue;
                                                        }
                                                        if(this->chuDe.empty()){
                                                            this->chuDe = "null";
                                                            bchuDe = false;
                                                            btacGia = true;
                                                            continue;
                                                        }
                                                        XuLiChuDeSach(this->chuDe);
                                                        bchuDe = false;
                                                        btacGia = true;
                                                    }
                                                    while(btacGia){
                                                        system("cls");
                                                        KhungGiaoDien();
                                                        Nocursortype(FALSE);
                                                        gotoxy(11,5);
                                                        setTextColor(11,"QUẢN LÍ SÁCH TRONG THƯ VIỆN");
                                                        gotoxy(39,5);
                                                        setTextColor(10,"THÊM SÁCH");
                                                        KhungNguoiDung();
                                                        gotoxy(70,15);
                                                        setTextColor(10, "THÔNG BÁO");
                                                        gotoxy(70,17);
                                                        setTextColor(15, "1. Quay lại nhập chủ đề sách");
                                                        gotoxy(70,19);
                                                        setTextColor(15, "2. Thoát thêm sách");
                                                        gotoxy(11,7);
                                                        setTextColor(10, "Tên sách:");
                                                        gotoxy(21,7);
                                                        setTextColor(15, this->tenSach);
                                                        gotoxy(11,8);
                                                        setTextColor(10, "Chủ đề:");
                                                        gotoxy(19,8);
                                                        setTextColor(15, this->chuDe);
                                                        gotoxy(11,9);
                                                        setTextColor(11, "Nhập tác giả:");
                                                        gotoxy(9,11);
                                                        setTextColor(15, "->");
                                                        gotoxy(12,11);
                                                        Nocursortype(TRUE);
                                                        std::getline(std::cin, this->tacGia);
                                                        Nocursortype(FALSE);
                                                        if(this->tacGia == "1"){
                                                            gotoxy(11,12);
                                                            setTextColor(14, "Quay lại..");
                                                            Loading();
                                                            bchuDe = true;
                                                            btacGia = false;
                                                            continue;
                                                        }
                                                        if(this->tacGia == "2"){
                                                            system("cls");
                                                            gotoxy(50,10);
                                                            setTextColor(14,"Thoát thêm sách..");
                                                            Loading();
                                                            btacGia = false;
                                                            bThemSach = false;
                                                            bNhapChinhSuaTaiKhoan = false;
                                                            continue;
                                                        }
                                                        if(this->tacGia.empty()){
                                                            gotoxy(11,12);
                                                            setTextColor(12, "Nhập không hợp lệ, vui lòng nhập lại");
                                                            Loading();
                                                            continue;
                                                        }
                                                        bool checkTrungTacGiaVaTenSach = false;
                                                        for( int i = 0; i < this->VtacGia.size(); i++ ){
                                                            if(this->tacGia == this->VtacGia[i]){
                                                                if(this->tenSach == this->VtenSach[i]){
                                                                    checkTrungTacGiaVaTenSach = true;
                                                                    break;
                                                                }
                                                            }
                                                        }
                                                        if(checkTrungTacGiaVaTenSach){
                                                            gotoxy(11,13);
                                                            setTextColor(12, "Tác giả và tên sách trùng trong thư viện, vui lòng nhập lại");
                                                            Loading();
                                                            continue;
                                                        }
                                                        ChuanHoaChuoi(this->tacGia);
                                                        btacGia = false;
                                                        bnhaXuatBan = true;
                                                    }
                                                    while(bnhaXuatBan){
                                                        system("cls");
                                                        KhungGiaoDien();
                                                        Nocursortype(FALSE);
                                                        gotoxy(11,5);
                                                        setTextColor(11,"QUẢN LÍ SÁCH TRONG THƯ VIỆN");
                                                        gotoxy(39,5);
                                                        setTextColor(10,"THÊM SÁCH");
                                                        KhungNguoiDung();
                                                        gotoxy(70,15);
                                                        setTextColor(10, "THÔNG BÁO");
                                                        gotoxy(70,17);
                                                        setTextColor(15, "1. Quay lại nhập tác giả");
                                                        gotoxy(70,19);
                                                        setTextColor(15, "2. Thoát thêm sách");
                                                        gotoxy(11,7);
                                                        setTextColor(10, "Tên sách:");
                                                        gotoxy(21,7);
                                                        setTextColor(15, this->tenSach);
                                                        gotoxy(11,8);
                                                        setTextColor(10, "Chủ đề:");
                                                        gotoxy(19,8);
                                                        setTextColor(15, this->chuDe);
                                                        gotoxy(11,9);
                                                        setTextColor(10, "Tác giả:");
                                                        gotoxy(20,9);
                                                        setTextColor(15, this->tacGia);
                                                        gotoxy(11,10);
                                                        setTextColor(11, "Nhập nhà xuất bản:");
                                                        gotoxy(9,12);
                                                        setTextColor(15, "->");
                                                        gotoxy(12,12);
                                                        Nocursortype(TRUE);
                                                        std::getline(std::cin, this->nhaXuatBan);
                                                        Nocursortype(FALSE);
                                                        if(this->nhaXuatBan == "1"){
                                                            gotoxy(11,13);
                                                            setTextColor(14, "Quay lại..");
                                                            Loading();
                                                            btacGia = true;
                                                            bnhaXuatBan = false;
                                                            continue;
                                                        }
                                                        if(this->nhaXuatBan == "2"){
                                                            system("cls");
                                                            gotoxy(50,10);
                                                            setTextColor(14,"Thoát thêm sách..");
                                                            Loading();
                                                            nhapChinhSuaTaiKhoan = false;
                                                            bnhaXuatBan = false;
                                                            bThemSach = false;
                                                            continue;
                                                        }
                                                        if(this->nhaXuatBan.empty()){
                                                            gotoxy(11,13);
                                                            setTextColor(12, "Nhập không hợp lệ, vui lòng nhập lại");
                                                            Loading();
                                                            continue;
                                                        }
                                                        ChuanHoaChuoi(this->nhaXuatBan);
                                                        bnhaXuatBan = false;
                                                        bngayThangXuatBan = true;
                                                    }
                                                    while(bngayThangXuatBan){
                                                        system("cls");
                                                        KhungGiaoDien();
                                                        Nocursortype(FALSE);
                                                        gotoxy(11,5);
                                                        setTextColor(11,"QUẢN LÍ SÁCH TRONG THƯ VIỆN");
                                                        gotoxy(39,5);
                                                        setTextColor(10,"THÊM SÁCH");
                                                        KhungNguoiDung();
                                                        gotoxy(70,15);
                                                        setTextColor(10, "THÔNG BÁO");
                                                        gotoxy(70,17);
                                                        setTextColor(15, "Nhấn Enter để quay lại");
                                                        gotoxy(11,7);
                                                        setTextColor(10, "Tên sách:");
                                                        gotoxy(21,7);
                                                        setTextColor(15, this->tenSach);
                                                        gotoxy(11,8);
                                                        setTextColor(10, "Chủ đề:");
                                                        gotoxy(19,8);
                                                        setTextColor(15, this->chuDe);
                                                        gotoxy(11,9);
                                                        setTextColor(10, "Tác giả:");
                                                        gotoxy(20,9);
                                                        setTextColor(15, this->tacGia);
                                                        gotoxy(11,10);
                                                        setTextColor(10, "Nhà xuất bản:");
                                                        gotoxy(25,10);
                                                        setTextColor(15, this->nhaXuatBan);
                                                        this->ngayThangXuatBan = "";
                                                        gotoxy(11,11);
                                                        setTextColor(11, "Nhập ngày xuất bản:");
                                                        gotoxy(31,11);
                                                        Nocursortype(TRUE);
                                                        std::string ngay;
                                                        InputCheckCin(ngay);
                                                        Nocursortype(FALSE);
                                                        if(ngay.empty()){
                                                            gotoxy(11,13);
                                                            setTextColor( 14,"Quay lại..");
                                                            bngayThangXuatBan = false;
                                                            bnhaXuatBan = true;
                                                            continue;
                                                        }
                                                        gotoxy(11,12);
                                                        setTextColor(11, "Nhập tháng xuất bản:");
                                                        gotoxy(32,12);
                                                        Nocursortype(TRUE);
                                                        std::string thang;
                                                        InputCheckCin(thang);
                                                        Nocursortype(FALSE);
                                                        if(thang.empty()){
                                                            gotoxy(11,13);
                                                            setTextColor( 14,"Quay lại..");
                                                            bngayThangXuatBan = false;
                                                            bnhaXuatBan = true;
                                                            continue;
                                                        }
                                                        gotoxy(11,13);
                                                        setTextColor(11, "Nhập năm xuất bản:");
                                                        gotoxy(30,13);
                                                        Nocursortype(TRUE);
                                                        std::string nam;
                                                        InputCheckCin(nam);
                                                        Nocursortype(FALSE);
                                                        if(nam.empty()){
                                                            gotoxy(11,13);
                                                            setTextColor( 14,"Quay lại..");
                                                            bngayThangXuatBan = false;
                                                            bnhaXuatBan = true;
                                                            continue;
                                                        }
                                                        if(!KiemTraTinhHopLeNamXuatBan(ngay, thang, nam)){ // error about date
                                                            gotoxy(11,14);
                                                            setTextColor(12, "Nhập không hợp lệ, vui lòng nhập lại");
                                                            Loading();
                                                            continue;
                                                        }
                                                        BoSungNgayThang(ngay);
                                                        BoSungNgayThang(thang);
                                                        this->ngayThangXuatBan += ngay;
                                                        this->ngayThangXuatBan += " / ";
                                                        this->ngayThangXuatBan += thang;
                                                        this->ngayThangXuatBan += " / ";
                                                        this->ngayThangXuatBan += nam;
                                                        bngayThangXuatBan = false;
                                                        bsoTrang = true;
                                                    }
                                                    while(bsoTrang){
                                                        system("cls");
                                                        KhungGiaoDien();
                                                        Nocursortype(FALSE);
                                                        gotoxy(11,5);
                                                        setTextColor(11,"QUẢN LÍ SÁCH TRONG THƯ VIỆN");
                                                        gotoxy(39,5);
                                                        setTextColor(10,"THÊM SÁCH");
                                                        KhungNguoiDung();
                                                        gotoxy(70,15);
                                                        setTextColor(10, "THÔNG BÁO");
                                                        gotoxy(70,17);
                                                        setTextColor(15, "Nhấn Enter để quay lại");
                                                        gotoxy(11,7);
                                                        setTextColor(10, "Tên sách:");
                                                        gotoxy(21,7);
                                                        setTextColor(15, this->tenSach);
                                                        gotoxy(11,8);
                                                        setTextColor(10, "Chủ đề:");
                                                        gotoxy(19,8);
                                                        setTextColor(15, this->chuDe);
                                                        gotoxy(11,9);
                                                        setTextColor(10, "Tác giả:");
                                                        gotoxy(20,9);
                                                        setTextColor(15, this->tacGia);
                                                        gotoxy(11,10);
                                                        setTextColor(10, "Nhà xuất bản:");
                                                        gotoxy(25,10);
                                                        setTextColor(15, this->nhaXuatBan);
                                                        gotoxy(11,11);
                                                        setTextColor(10, "Ngày tháng xuất bản:");
                                                        gotoxy(32,11);
                                                        setTextColor(15, this->ngayThangXuatBan);
                                                        //
                                                        gotoxy(11,12);
                                                        setTextColor(11, "Nhập số trang:");
                                                        gotoxy(26,12);
                                                        Nocursortype(TRUE);
                                                        InputCheckCin(this->soTrang);
                                                        Nocursortype(FALSE);
                                                        if(this->soTrang == "0"){
                                                            gotoxy(11,14);
                                                            setTextColor(12, "Số trang không thể bằng \'0\', vui lòng nhập lại");
                                                            Loading();
                                                            continue;
                                                        }
                                                        if(this->soTrang.empty()){
                                                            gotoxy(11,13);
                                                            setTextColor( 14,"Quay lại..");
                                                            bsoTrang = false;
                                                            bngayThangXuatBan = true;
                                                            continue;
                                                        }
                                                        if(!KiemTraKiTuNgayThangNam(this->soTrang)){
                                                            gotoxy(11,14);
                                                            setTextColor(12,"Nhập không hợp lệ, vui lòng nhập lại");
                                                            Loading();
                                                            continue;
                                                        }
                                                        BoSungSoTrang(this->soTrang);
                                                        bsoTrang = false;
                                                        bsoBanCopyTrongThuVien = true;
                                                    }
                                                    while(bsoBanCopyTrongThuVien){
                                                        system("cls");
                                                        KhungGiaoDien();
                                                        Nocursortype(FALSE);
                                                        gotoxy(11,5);
                                                        setTextColor(11,"QUẢN LÍ SÁCH TRONG THƯ VIỆN");
                                                        gotoxy(39,5);
                                                        setTextColor(10,"THÊM SÁCH");
                                                        KhungNguoiDung();
                                                        gotoxy(70,15);
                                                        setTextColor(10, "THÔNG BÁO");
                                                        gotoxy(70,17);
                                                        setTextColor(15, "Nhấn Enter để quay lại");
                                                        gotoxy(11,7);
                                                        setTextColor(10, "Tên sách:");
                                                        gotoxy(21,7);
                                                        setTextColor(15, this->tenSach);
                                                        gotoxy(11,8);
                                                        setTextColor(10, "Chủ đề:");
                                                        gotoxy(19,8);
                                                        setTextColor(15, this->chuDe);
                                                        gotoxy(11,9);
                                                        setTextColor(10, "Tác giả:");
                                                        gotoxy(20,9);
                                                        setTextColor(15, this->tacGia);
                                                        gotoxy(11,10);
                                                        setTextColor(10, "Nhà xuất bản:");
                                                        gotoxy(25,10);
                                                        setTextColor(15, this->nhaXuatBan);
                                                        gotoxy(11,11);
                                                        setTextColor(10, "Ngày tháng xuất bản:");
                                                        gotoxy(32,11);
                                                        setTextColor(15, this->ngayThangXuatBan);
                                                        gotoxy(11,12);
                                                        setTextColor(10, "Số trang:");
                                                        gotoxy(22,12);
                                                        setTextColor(15, this->soTrang);
                                                        //
                                                        gotoxy(11,13);
                                                        setTextColor(11, "Nhập số bản copy trong thư viện:");
                                                        gotoxy(44,13);
                                                        Nocursortype(TRUE);
                                                        InputCheckCin(this->soBanCopyTrongThuVien);
                                                        Nocursortype(FALSE);
                                                        if(this->soBanCopyTrongThuVien.empty()){
                                                            gotoxy(11,13);
                                                            setTextColor( 14,"Quay lại..");
                                                            bsoBanCopyTrongThuVien = false;
                                                            bsoTrang = true;
                                                            continue;
                                                        }
                                                        if(!KiemTraKiTuNgayThangNam(this->soBanCopyTrongThuVien)){
                                                            gotoxy(11,15);
                                                            setTextColor(12,"Nhập không hợp lệ, vui lòng nhập lại");
                                                            Loading();
                                                            continue;
                                                        }
                                                        BoSungSoTrang(this->soBanCopyTrongThuVien);
                                                        bsoBanCopyTrongThuVien = false;
                                                        bThemSach = false;
                                                        bNhapChinhSuaTaiKhoan = false;
                                                        gotoxy(11,15);
                                                        setTextColor(10,"Thêm sách thành công !");
                                                        Loading();
                                                        // tong hop lai
                                                        bool checkTrungMaSoSach;
                                                        std::srand(static_cast<unsigned int>(std::time(nullptr)));
                                                        do{
                                                            checkTrungMaSoSach = false;
                                                            int tmpMaSoSach = std::rand() % 10000 + 100;
                                                            this->maSoSach = std::to_string(tmpMaSoSach);
                                                            for( const auto& x : this->VmaSoSach ){
                                                                if(x == this->maSoSach){
                                                                    checkTrungMaSoSach = true;
                                                                    break;
                                                                }
                                                            }
                                                        }while(checkTrungMaSoSach);
                                                        ChuanHoaChuoi(this->tacGia);
                                                        ChuanHoaChuoi(this->nhaXuatBan);
                                                        this->VmaSoSach.push_back(this->maSoSach);
                                                        this->VtenSach.push_back(this->tenSach);
                                                        this->VchuDe.push_back(this->chuDe);
                                                        this->VtacGia.push_back(this->tacGia);
                                                        this->VnhaXuatBan.push_back(this->nhaXuatBan);
                                                        this->VngayThangXuatBan.push_back(this->ngayThangXuatBan);
                                                        this->VsoTrang.push_back(this->soTrang);
                                                        this->VsoBanCopyTrongThuVien.push_back(this->soBanCopyTrongThuVien);
                                                        //
                                                    }
                                                }
                                            }
                                            else if(yy == 9){
                                                // xoa sach
                                                system("cls");
                                                bool bxoaSach = true;
                                                while(bxoaSach){
                                                    gotoxy(11,5);
                                                    setTextColor(11,"QUẢN LÍ SÁCH TRONG THƯ VIỆN");
                                                    gotoxy(39,5);
                                                    setTextColor(10,"XOÁ SÁCH");
                                                    KhungGiaoDienDanhSachThuVien();
                                                    Nocursortype(FALSE);
                                                    InRaDanhSachSach();
                                                    gotoxy(70,13 + this->VtenSach.size() + 1);
                                                    setTextColor(10, "THÔNG BÁO"); 
                                                    gotoxy(70,13 + this->VtenSach.size() + 1 + 2);
                                                    setTextColor(15,  "1. Tìm kiếm trong danh sách để xoá"); 
                                                    gotoxy(70,13 + this->VtenSach.size() + 1 + 4);
                                                    setTextColor(15,  "2. Quay lại"); 
                                                    gotoxy(3,13 + this->VtenSach.size() + 1);
                                                    setTextColor(11, "Nhập mã số sách để xoá:");
                                                    gotoxy(27,13 + this->VtenSach.size() + 1);
                                                    Nocursortype(TRUE);
                                                    std::string nhapDeXoaSach;
                                                    InputCheckCin(nhapDeXoaSach);
                                                    Nocursortype(FALSE);
                                                    if(nhapDeXoaSach == "1"){
                                                        bool run;
                                                        TimKiemThongTinSach(run, getCheckAdmin(), "QUẢN LÍ SÁCH TRONG THƯ VIỆN","XOÁ SÁCH");
                                                        continue;
                                                    }
                                                    if(nhapDeXoaSach == "2"){
                                                        system("cls");
                                                        gotoxy(50,10);
                                                        setTextColor(14,"Quay lại..");
                                                        Loading();
                                                        bxoaSach = false;
                                                        bNhapChinhSuaTaiKhoan = false;
                                                        continue;
                                                    }
                                                    if(!KiemTraKiTuNgayThangNam(nhapDeXoaSach) || nhapDeXoaSach.empty()){
                                                        gotoxy(3,13 + this->VtenSach.size() + 1 + 2);
                                                        setTextColor(12, "Nhập không hợp lệ, vui lòng nhập lại");
                                                        Loading();
                                                        continue;
                                                    }
                                                    bool checkCoMaSoSachKhong = false;
                                                    for( int i = 0; i < this->VmaSoSach.size(); i++ ){
                                                        if(this->VmaSoSach[i] == nhapDeXoaSach){
                                                            checkCoMaSoSachKhong = true;
                                                            gotoxy(3,13 + this->VtenSach.size() + 1 + 2);
                                                            setTextColor(14, "Xoá sách thành công !!");
                                                            Loading();
                                                            this->VmaSoSach.erase(this->VmaSoSach.begin() + i, this->VmaSoSach.begin() + i + 1);
                                                            this->VtenSach.erase(this->VtenSach.begin() + i, this->VtenSach.begin() + i + 1);
                                                            this->VchuDe.erase(this->VchuDe.begin() + i, this->VchuDe.begin() + i + 1);
                                                            this->VtacGia.erase(this->VtacGia.begin() + i, this->VtacGia.begin() + i + 1);
                                                            this->VngayThangXuatBan.erase(this->VngayThangXuatBan.begin() + i, this->VngayThangXuatBan.begin() + i + 1);
                                                            this->VnhaXuatBan.erase(this->VnhaXuatBan.begin() + i, this->VnhaXuatBan.begin() + i + 1);
                                                            this->VsoTrang.erase(this->VsoTrang.begin() + i, this->VsoTrang.begin() + i + 1);
                                                            this->VsoBanCopyTrongThuVien.erase(this->VsoBanCopyTrongThuVien.begin() + i, this->VsoBanCopyTrongThuVien.begin() + i + 1);
                                                            break;
                                                        }
                                                    }
                                                    if(!checkCoMaSoSachKhong){
                                                        gotoxy(3,13 + this->VtenSach.size() + 1 + 2);
                                                        setTextColor(12, "Không tìm thấy mã số sách, vui lòng nhập lại");
                                                        Loading();
                                                        continue;
                                                    }
                                                }
                                            }
                                            else if(yy == 11){
                                                // sua doi thong tin sach
                                                system("cls");
                                                bool bnhapQuanLi = true;
                                                while(bnhapQuanLi){
                                                    gotoxy(11,5);
                                                    setTextColor(11,"QUẢN LÍ SÁCH TRONG THƯ VIỆN");
                                                    gotoxy(39,5);
                                                    setTextColor(10,"SỬA ĐỔI THÔNG TIN SÁCH");
                                                    InRaDanhSachSach();
                                                    KhungGiaoDienDanhSachThuVien();
                                                    Nocursortype(FALSE);
                                                    gotoxy(70,13 + this->VtenSach.size() + 1);
                                                    setTextColor(10, "THÔNG BÁO"); 
                                                    gotoxy(70,13 + this->VtenSach.size() + 1 + 2);
                                                    setTextColor(15,  "1. Tìm kiếm trong danh sách để xoá"); 
                                                    gotoxy(70,13 + this->VtenSach.size() + 1 + 4);
                                                    setTextColor(15,  "2. Quay lại"); 
                                                    gotoxy(3,13 + this->VtenSach.size() + 1);
                                                    setTextColor(11, "Nhập mã số sách để chỉnh sửa:");
                                                    gotoxy(33,13 + this->VtenSach.size() + 1);
                                                    Nocursortype(TRUE);
                                                    std::string nhapDeChinhSua;
                                                    InputCheckCin(nhapDeChinhSua);
                                                    Nocursortype(FALSE);
                                                    if(nhapDeChinhSua == "1"){
                                                        bool run;
                                                        TimKiemThongTinSach(run, getCheckAdmin(),"QUẢN LÍ SÁCH TRONG THƯ VIỆN","SỬA ĐỔI THÔNG TIN SÁCH");
                                                        continue;
                                                    }
                                                    if(nhapDeChinhSua == "2"){
                                                        system("cls");
                                                        gotoxy(50,10);
                                                        setTextColor(14,"Quay lại..");
                                                        Loading();
                                                        bnhapQuanLi = false;
                                                        bNhapChinhSuaTaiKhoan = false;
                                                        continue;
                                                    }
                                                    if(!KiemTraKiTuNgayThangNam(nhapDeChinhSua) || nhapDeChinhSua.empty()){
                                                        gotoxy(3,13 + this->VtenSach.size() + 1 + 2);
                                                        setTextColor(12, "Nhập không hợp lệ, vui lòng nhập lại");
                                                        Loading();
                                                        continue;
                                                    }
                                                    bool checkCoMaSoSachKhong = false;
                                                    int position = - 1;
                                                    for( int i = 0; i < this->VmaSoSach.size(); i++ ){
                                                        if(this->VmaSoSach[i] == nhapDeChinhSua){
                                                            checkCoMaSoSachKhong = true;
                                                            position = i;
                                                            break;
                                                        }
                                                    }
                                                    if(!checkCoMaSoSachKhong){
                                                        gotoxy(3,13 + this->VtenSach.size() + 1 + 2);
                                                        setTextColor(12, "Mã số sách không hợp lệ, vui lòng nhập lại");
                                                        Loading();
                                                        continue;
                                                    }
                                                    // main options
                                                    bool bmainChinhSua = true;
                                                    while(bmainChinhSua){
                                                        system("cls");
                                                        KhungGiaoDien();
                                                        Nocursortype(FALSE);
                                                        gotoxy(11,5);
                                                        setTextColor(11,"QUẢN LÍ SÁCH TRONG THƯ VIỆN");
                                                        gotoxy(39,5);
                                                        setTextColor(10,"SỬA ĐỔI THÔNG TIN SÁCH");
                                                        KhungNguoiDung();
                                                        gotoxy(70,15);
                                                        setTextColor(10, "THÔNG BÁO");
                                                        ThongBaoNhapSuaDoiThongTinSach();
                                                        gotoxy(11,7);
                                                        setTextColor(12,"1. Chỉnh sửa tên sách");
                                                        int xxx = 11;
                                                        int yyy = 7;
                                                        bool bsuadoithongtinsach = true;
                                                        while(bsuadoithongtinsach){
                                                            char suaDoiThongTinSach = _getch();
                                                            switch(suaDoiThongTinSach){
                                                                case 'w':{
                                                                    if(yyy == 7){
                                                                        yyy = 21;
                                                                    }
                                                                    else{
                                                                        yyy -= 2;
                                                                    }
                                                                    if(yyy == 7){
                                                                        gotoxy(xxx,9);
                                                                        setTextColor(15, "2. Chỉnh sửa chủ đề");
                                                                        gotoxy(xxx,yyy);
                                                                        setTextColor(12, "1. Chỉnh sửa tên sách");
                                                                    }
                                                                    else if(yyy == 9){
                                                                        gotoxy(xxx,11);
                                                                        setTextColor(15, "3. Chỉnh sửa tác giả");
                                                                        gotoxy(xxx,yyy);
                                                                        setTextColor(12, "2. Chỉnh sửa chủ đề");
                                                                    }
                                                                    else if(yyy == 11){
                                                                        gotoxy(xxx,13);
                                                                        setTextColor(15, "4. Chỉnh sửa nhà xuất bản");
                                                                        gotoxy(xxx,yyy);
                                                                        setTextColor(12, "3. Chỉnh sửa tác giả");
                                                                    }
                                                                    else if(yyy == 13){
                                                                        gotoxy(xxx,15);
                                                                        setTextColor(15, "5. Chỉnh sửa ngày tháng xuất bản");
                                                                        gotoxy(xxx,yyy);
                                                                        setTextColor(12, "4. Chỉnh sửa nhà xuất bản");
                                                                    }
                                                                    else if(yyy == 15){
                                                                        gotoxy(xxx,17);
                                                                        setTextColor(15, "6. Chỉnh sửa số trang");
                                                                        gotoxy(xxx,yyy);
                                                                        setTextColor(12, "5. Chỉnh sửa ngày tháng xuất bản");
                                                                    }
                                                                    else if(yyy == 17){
                                                                        gotoxy(xxx,19);
                                                                        setTextColor(15, "7. Chỉnh sửa số bản copy trong thư viện");
                                                                        gotoxy(xxx,yyy);
                                                                        setTextColor(12, "6. Chỉnh sửa số trang");
                                                                    }
                                                                    else if(yyy == 19){
                                                                        gotoxy(xxx,21);
                                                                        setTextColor(15, "8. Quay lại" );
                                                                        gotoxy(xxx,yyy);
                                                                        setTextColor(12, "7. Chỉnh sửa số bản copy trong thư viện");
                                                                    }
                                                                    else if(yyy == 21){
                                                                        gotoxy(xxx,7);
                                                                        setTextColor(15, "1. Chỉnh sửa tên sách");
                                                                        gotoxy(xxx,yyy);
                                                                        setTextColor(12, "8. Quay lại");
                                                                    }
                                                                    break;
                                                                }
                                                                case 's':{
                                                                    if(yyy == 21){
                                                                        yyy = 7;
                                                                    }
                                                                    else{
                                                                        yyy += 2;
                                                                    }
                                                                    if(yyy == 7){
                                                                        gotoxy(xxx,21);
                                                                        setTextColor(15, "8. Quay lại");
                                                                        gotoxy(xxx,yyy);
                                                                        setTextColor(12, "1. Chỉnh sửa tên sách");
                                                                    }
                                                                    else if(yyy == 9){
                                                                        gotoxy(xxx,7);
                                                                        setTextColor(15, "1. Chỉnh sửa tên sách");
                                                                        gotoxy(xxx,yyy);
                                                                        setTextColor(12, "2. Chỉnh sửa chủ đề");
                                                                    }
                                                                    else if(yyy == 11){
                                                                        gotoxy(xxx,7);
                                                                        setTextColor(15, "1. Chỉnh sửa tên sách");
                                                                        gotoxy(xxx,9);
                                                                        setTextColor(15, "2. Chỉnh sửa chủ đề");
                                                                        gotoxy(xxx,yyy);
                                                                        setTextColor(12, "3. Chỉnh sửa tác giả");
                                                                    }
                                                                    else if(yyy == 13){
                                                                        gotoxy(xxx,7);
                                                                        setTextColor(15, "1. Chỉnh sửa tên sách");
                                                                        gotoxy(xxx,9);
                                                                        setTextColor(15, "2. Chỉnh sửa chủ đề");
                                                                        gotoxy(xxx,11);
                                                                        setTextColor(15, "3. Chỉnh sửa tác giả");
                                                                        gotoxy(xxx,yyy);
                                                                        setTextColor(12, "4. Chỉnh sửa nhà xuất bản");
                                                                    }
                                                                    else if(yyy == 15){
                                                                        gotoxy(xxx,7);
                                                                        setTextColor(15, "1. Chỉnh sửa tên sách");
                                                                        gotoxy(xxx,9);
                                                                        setTextColor(15, "2. Chỉnh sửa chủ đề");
                                                                        gotoxy(xxx,11);
                                                                        setTextColor(15, "3. Chỉnh sửa tác giả");
                                                                        gotoxy(xxx,13);
                                                                        setTextColor(15, "4. Chỉnh sửa nhà xuất bản");
                                                                        gotoxy(xxx,yyy);
                                                                        setTextColor(12, "5. Chỉnh sửa ngày tháng xuất bản");
                                                                    }
                                                                    else if(yyy == 17){
                                                                        gotoxy(xxx,7);
                                                                        setTextColor(15, "1. Chỉnh sửa tên sách");
                                                                        gotoxy(xxx,9);
                                                                        setTextColor(15, "2. Chỉnh sửa chủ đề");
                                                                        gotoxy(xxx,11);
                                                                        setTextColor(15, "3. Chỉnh sửa tác giả");
                                                                        gotoxy(xxx,13);
                                                                        setTextColor(15, "4. Chỉnh sửa nhà xuất bản");
                                                                        gotoxy(xxx,15);
                                                                        setTextColor(15, "5. Chỉnh sửa ngày tháng xuất bản");
                                                                        gotoxy(xxx,yyy);
                                                                        setTextColor(12, "6. Chỉnh sửa số trang");
                                                                    }
                                                                    else if(yyy == 19){
                                                                        gotoxy(xxx,7);
                                                                        setTextColor(15, "1. Chỉnh sửa tên sách");
                                                                        gotoxy(xxx,9);
                                                                        setTextColor(15, "2. Chỉnh sửa chủ đề");
                                                                        gotoxy(xxx,11);
                                                                        setTextColor(15, "3. Chỉnh sửa tác giả");
                                                                        gotoxy(xxx,13);
                                                                        setTextColor(15, "4. Chỉnh sửa nhà xuất bản");
                                                                        gotoxy(xxx,15);
                                                                        setTextColor(15, "5. Chỉnh sửa ngày tháng xuất bản");
                                                                        gotoxy(xxx,17);
                                                                        setTextColor(15, "6. Chỉnh sửa số trang");
                                                                        gotoxy(xxx,yyy);
                                                                        setTextColor(12, "7. Chỉnh sửa số bản copy trong thư viện");
                                                                    }
                                                                    else if(yyy == 21){
                                                                        gotoxy(xxx,7);
                                                                        setTextColor(15, "1. Chỉnh sửa tên sách");
                                                                        gotoxy(xxx,9);
                                                                        setTextColor(15, "2. Chỉnh sửa chủ đề");
                                                                        gotoxy(xxx,11);
                                                                        setTextColor(15, "3. Chỉnh sửa tác giả");
                                                                        gotoxy(xxx,13);
                                                                        setTextColor(15, "4. Chỉnh sửa nhà xuất bản");
                                                                        gotoxy(xxx,15);
                                                                        setTextColor(15, "5. Chỉnh sửa ngày tháng xuất bản");
                                                                        gotoxy(xxx,17);
                                                                        setTextColor(15, "6. Chỉnh sửa số trang");
                                                                        gotoxy(xxx,19);
                                                                        setTextColor(15, "7. Chỉnh sửa số bản copy trong thư viện");
                                                                        gotoxy(xxx,yyy);
                                                                        setTextColor(12, "8. Quay lại");
                                                                    }
                                                                    break;
                                                                }
                                                                case 13:{ // da co ma so sach
                                                                    if(yyy == 7){
                                                                        bool bchinhSuaTenSach = true;
                                                                        while(bchinhSuaTenSach){
                                                                            system("cls");
                                                                            KhungGiaoDien();
                                                                            Nocursortype(FALSE);
                                                                            gotoxy(11,5);
                                                                            setTextColor(11,"SỬA ĐỔI THÔNG TIN SÁCH");
                                                                            gotoxy(34,5);
                                                                            setTextColor(10,"CHỈNH SỬA TÊN SÁCH");
                                                                            KhungNguoiDung();
                                                                            gotoxy(70,15);
                                                                            setTextColor(10, "THÔNG BÁO");
                                                                            gotoxy(70,17);
                                                                            setTextColor(15, "1. Thoát chỉnh sửa tên sách");
                                                                            gotoxy(15,7);
                                                                            setTextColor(11, "Nhập tên sách cần thay đổi:");
                                                                            gotoxy(13,9);
                                                                            setTextColor(15, "->");
                                                                            gotoxy(16,9);
                                                                            Nocursortype(TRUE);
                                                                            std::string tenSach;
                                                                            std::getline(std::cin, tenSach);
                                                                            Nocursortype(FALSE);
                                                                            if(tenSach == "1"){
                                                                                system("cls");
                                                                                gotoxy(50,10);
                                                                                setTextColor(14,"Quay lại..");
                                                                                Loading();
                                                                                bchinhSuaTenSach = false;
                                                                                bsuadoithongtinsach = false;
                                                                                continue;
                                                                            }
                                                                            if(tenSach.empty()){
                                                                                gotoxy(15,10);
                                                                                setTextColor(12, "Nhập không hợp lệ, vui lòng nhập lại");
                                                                                Loading();
                                                                                continue;
                                                                            }
                                                                            bool checkTrungTacGia = false;
                                                                            for( int i = 0; i < this->VtenSach.size(); i++ ){
                                                                                if(tenSach == this->VtenSach[i]){
                                                                                    if(this->VtacGia[position] == this->VtacGia[i] && position != i){
                                                                                        checkTrungTacGia = true;
                                                                                        break;
                                                                                    }
                                                                                }
                                                                            }
                                                                            if(checkTrungTacGia){
                                                                                gotoxy(15,10);
                                                                                setTextColor(12, "Tên sách và tác giả bị trùng trong thư viện, vui lòng nhập lại");
                                                                                Loading();
                                                                                continue;
                                                                            }
                                                                            gotoxy(15,9);
                                                                            textcolor(15);
                                                                            std::cout << this->VtenSach[position]  << " -> " << tenSach << std::endl;
                                                                            Loading();
                                                                            this->VtenSach[position] = tenSach;
                                                                            bchinhSuaTenSach = false;
                                                                            bsuadoithongtinsach = false;
                                                                        }
                                                                    }
                                                                    if(yyy == 9){
                                                                        bool bchinhSuaChuDeSach = true;
                                                                        while(bchinhSuaChuDeSach){
                                                                            system("cls");
                                                                            KhungGiaoDien();
                                                                            Nocursortype(FALSE);
                                                                            gotoxy(11,5);
                                                                            setTextColor(11,"SỬA ĐỔI THÔNG TIN SÁCH");
                                                                            gotoxy(34,5);
                                                                            setTextColor(10,"CHỈNH SỬA CHỦ ĐỀ");
                                                                            KhungNguoiDung();
                                                                            gotoxy(70,15);
                                                                            setTextColor(10, "THÔNG BÁO");
                                                                            gotoxy(70,17);
                                                                            setTextColor(15, "1. Thoát chỉnh sửa chủ đề");
                                                                            gotoxy(15,7);
                                                                            setTextColor(11, "Nhập chủ đề cần thay đổi:");
                                                                            gotoxy(13,9);
                                                                            setTextColor(15, "->");
                                                                            gotoxy(16,9);
                                                                            Nocursortype(TRUE);
                                                                            std::string chuDeSach;
                                                                            std::getline(std::cin, chuDeSach);
                                                                            Nocursortype(FALSE);
                                                                            if(chuDeSach == "1"){
                                                                                system("cls");
                                                                                gotoxy(50,10);
                                                                                setTextColor(14,"Quay lại..");
                                                                                Loading();
                                                                                bchinhSuaChuDeSach = false;
                                                                                bsuadoithongtinsach = false;
                                                                                continue;
                                                                            }
                                                                            if(chuDeSach.empty()){
                                                                                gotoxy(15,10);
                                                                                setTextColor(12, "Nhập không hợp lệ, vui lòng nhập lại");
                                                                                Loading();
                                                                                continue;
                                                                            }
                                                                            XuLiChuDeSach(chuDeSach);
                                                                            gotoxy(15,9);
                                                                            textcolor(15);
                                                                            std::cout << this->VchuDe[position] << " -> " << chuDeSach << std::endl;
                                                                            Loading();
                                                                            this->VchuDe[position] = chuDeSach;
                                                                            bchinhSuaChuDeSach = false;
                                                                            bsuadoithongtinsach = false;
                                                                        }
                                                                    }
                                                                    else if(yyy == 11){
                                                                        bool bchinhSuaTacGiaSach = true;
                                                                        while(bchinhSuaTacGiaSach){
                                                                            system("cls");
                                                                            KhungGiaoDien();
                                                                            Nocursortype(FALSE);
                                                                            gotoxy(11,5);
                                                                            setTextColor(11,"SỬA ĐỔI THÔNG TIN SÁCH");
                                                                            gotoxy(34,5);
                                                                            setTextColor(10,"CHỈNH SỬA TÁC GIẢ");
                                                                            KhungNguoiDung();
                                                                            gotoxy(70,15);
                                                                            setTextColor(10, "THÔNG BÁO");
                                                                            gotoxy(70,17);
                                                                            setTextColor(15, "1. Thoát chỉnh sửa tác giả");
                                                                            gotoxy(15,7);
                                                                            setTextColor(11, "Nhập tác giả cần thay đổi:");
                                                                            gotoxy(13,9);
                                                                            setTextColor(15, "->");
                                                                            gotoxy(16,9);
                                                                            Nocursortype(TRUE);
                                                                            std::string tacGiaSach;
                                                                            std::getline(std::cin, tacGiaSach);
                                                                            Nocursortype(FALSE);
                                                                            if(tacGiaSach == "1"){
                                                                                system("cls");
                                                                                gotoxy(50,10);
                                                                                setTextColor(14,"Quay lại..");
                                                                                Loading();
                                                                                bchinhSuaTacGiaSach = false;
                                                                                bsuadoithongtinsach = false;
                                                                                continue;
                                                                            }
                                                                            if(tacGiaSach.empty()){
                                                                                gotoxy(15,10);
                                                                                setTextColor(12, "Nhập không hợp lệ, vui lòng nhập lại");
                                                                                Loading();
                                                                                continue;
                                                                            }
                                                                            bool checkTrungTenSach = false;
                                                                            for( int i = 0; i < this->VtacGia.size(); i++ ){
                                                                                if(tacGiaSach == this->VtacGia[i]){
                                                                                    if(this->VtenSach[position] == this->VtenSach[i] && position != i){
                                                                                        checkTrungTenSach = true;
                                                                                        break;
                                                                                    }
                                                                                }
                                                                            }
                                                                            if(checkTrungTenSach){
                                                                                gotoxy(15,10);
                                                                                setTextColor(12, "Tên sách và tác giả bị trùng trong thư viện, vui lòng nhập lại");
                                                                                Loading();
                                                                                continue;
                                                                            }
                                                                            ChuanHoaChuoi(tacGiaSach);
                                                                            gotoxy(15,9);
                                                                            textcolor(15);
                                                                            std::cout << this->VtacGia[position] << " -> " << tacGiaSach << std::endl;
                                                                            Loading();
                                                                            this->VtacGia[position] = tacGiaSach;
                                                                            bchinhSuaTacGiaSach = false;
                                                                            bsuadoithongtinsach = false;
                                                                        }
                                                                    }
                                                                    else if(yyy == 13){
                                                                        // chinh sua nha xuat ban
                                                                        bool bchinhSuaNhaXBSach = true;
                                                                        while(bchinhSuaNhaXBSach){
                                                                            system("cls");
                                                                            KhungGiaoDien();
                                                                            Nocursortype(FALSE);
                                                                            gotoxy(11,5);
                                                                            setTextColor(11,"SỬA ĐỔI THÔNG TIN SÁCH");
                                                                            gotoxy(34,5);
                                                                            setTextColor(10,"CHỈNH SỬA NHÀ XUẤT BẢN");
                                                                            KhungNguoiDung();
                                                                            gotoxy(70,15);
                                                                            setTextColor(10, "THÔNG BÁO");
                                                                            gotoxy(70,17);
                                                                            setTextColor(15, "1. Thoát chỉnh sửa nhà xuất bản");
                                                                            gotoxy(15,7);
                                                                            setTextColor(11, "Nhập nhà xuất bản cần thay đổi:");
                                                                            gotoxy(13,9);
                                                                            setTextColor(15, "->");
                                                                            gotoxy(16,9);
                                                                            Nocursortype(TRUE);
                                                                            std::string nhaXBSach;
                                                                            std::getline(std::cin, nhaXBSach);
                                                                            Nocursortype(FALSE);
                                                                            if(nhaXBSach == "1"){
                                                                                system("cls");
                                                                                gotoxy(50,10);
                                                                                setTextColor(14,"Quay lại..");
                                                                                Loading();
                                                                                bchinhSuaNhaXBSach = false;
                                                                                bsuadoithongtinsach = false;
                                                                                continue;
                                                                            }
                                                                            if(nhaXBSach.empty()){
                                                                                gotoxy(15,10);
                                                                                setTextColor(12, "Tên sách và tác giả bị trùng trong thư viện, vui lòng nhập lại");
                                                                                Loading();
                                                                                continue;
                                                                            }
                                                                            ChuanHoaChuoi(nhaXBSach);
                                                                            gotoxy(15,9);
                                                                            textcolor(15);
                                                                            std::cout << this->VnhaXuatBan[position] << " -> " << nhaXBSach << std::endl;
                                                                            Loading();
                                                                            this->VnhaXuatBan[position] = nhaXBSach;
                                                                            bsuadoithongtinsach = false;
                                                                            bchinhSuaNhaXBSach = false;
                                                                        }
                                                                    }
                                                                    else if(yyy == 15){
                                                                        // chinh sua ngay thang xuat ban
                                                                        bool bchinhSuaNgayThangXuatBan = true;
                                                                        bool bchinhSuaNgay = false;
                                                                        bool bchinhSuaThang = false;
                                                                        bool bchinhSuaNam = false;
                                                                        while(bchinhSuaNgayThangXuatBan){
                                                                            // chon chinh sua ngay, thang, nam;  
                                                                            system("cls");
                                                                            KhungGiaoDien();
                                                                            Nocursortype(FALSE);
                                                                            gotoxy(11,5);
                                                                            setTextColor(11,"SỬA ĐỔI THÔNG TIN SÁCH");
                                                                            gotoxy(34,5);
                                                                            setTextColor(10,"CHỈNH SỬA NGÀY THÁNG XUẤT BẢN");
                                                                            KhungNguoiDung();
                                                                            gotoxy(70,15);
                                                                            setTextColor(10, "THÔNG BÁO");
                                                                            LuaChonChinhSuaNgayThangXuatBan();
                                                                            //
                                                                            int x4 = 11;
                                                                            int y4 = 7;
                                                                            gotoxy(x4,y4);
                                                                            setTextColor(12,"1. Chỉnh sửa ngày");
                                                                            bool bLuaChonNgayThangNam = true;
                                                                            while(bLuaChonNgayThangNam){
                                                                                char luaChonNgayThangNam = _getch();
                                                                                switch(luaChonNgayThangNam){
                                                                                    case 'w':{
                                                                                        if(y4 == 7){
                                                                                            y4 = 13;
                                                                                        }
                                                                                        else{
                                                                                            y4 -= 2;
                                                                                        }
                                                                                        if(y4 == 7){
                                                                                            gotoxy(x4,9);
                                                                                            setTextColor(15,"2. Chỉnh sửa tháng");
                                                                                            gotoxy(x4,y4);
                                                                                            setTextColor(12,"1. Chỉnh sửa ngày");
                                                                                        }
                                                                                        else if(y4 == 9){
                                                                                            gotoxy(x4,11);
                                                                                            setTextColor(15,"3. Chỉnh sửa năm");
                                                                                            gotoxy(x4,y4);
                                                                                            setTextColor(12,"2. Chỉnh sửa tháng");
                                                                                        }
                                                                                        else if(y4 == 11){
                                                                                            gotoxy(x4,13);
                                                                                            setTextColor(15,"4. Quay lại");
                                                                                            gotoxy(x4,y4);
                                                                                            setTextColor(12,"3. Chỉnh sửa năm");
                                                                                        }
                                                                                        else if(y4 == 13){
                                                                                            gotoxy(x4,7);
                                                                                            setTextColor(15,"1. Chỉnh sửa ngày");
                                                                                            gotoxy(x4,y4);
                                                                                            setTextColor(12,"4. Quay lại");
                                                                                        }
                                                                                        break;
                                                                                    }
                                                                                    case 's':{
                                                                                        if(y4 == 13){
                                                                                            y4 = 7;
                                                                                        }
                                                                                        else{
                                                                                            y4 += 2;
                                                                                        }
                                                                                        if(y4 == 7){
                                                                                            gotoxy(x4,13);
                                                                                            setTextColor(15,"4. Quay lại");
                                                                                            gotoxy(x4,y4);
                                                                                            setTextColor(12,"1. Chỉnh sửa ngày");
                                                                                        }
                                                                                        else if(y4 == 9){
                                                                                            gotoxy(x4,7);
                                                                                            setTextColor(15,"1. Chỉnh sửa ngày");
                                                                                            gotoxy(x4,y4);
                                                                                            setTextColor(12,"2. Chỉnh sửa tháng");
                                                                                        }
                                                                                        else if(y4 == 11){
                                                                                            gotoxy(x4,7);
                                                                                            setTextColor(15,"1. Chỉnh sửa ngày");
                                                                                            gotoxy(x4,9);
                                                                                            setTextColor(15,"2. Chỉnh sửa tháng");
                                                                                            gotoxy(x4,y4);
                                                                                            setTextColor(12,"3. Chỉnh sửa năm");
                                                                                        }
                                                                                        else if(y4 == 13){
                                                                                            gotoxy(x4,7);
                                                                                            setTextColor(15,"1. Chỉnh sửa ngày");
                                                                                            gotoxy(x4,9);
                                                                                            setTextColor(15,"2. Chỉnh sửa tháng");
                                                                                            gotoxy(x4,11);
                                                                                            setTextColor(15,"3. Chỉnh sửa năm");
                                                                                            gotoxy(x4,y4);
                                                                                            setTextColor(12,"4. Quay lại");
                                                                                        }
                                                                                        break;
                                                                                    }
                                                                                    case 13:{
                                                                                        if(y4 == 7){
                                                                                            // chinh sua ngay
                                                                                            bchinhSuaNgay = true;
                                           	                                                while(bchinhSuaNgay){
                                                                                                system("cls");
                                                                                                KhungGiaoDien();
                                                                                                Nocursortype(FALSE);
                                                                                                gotoxy(11,5);
                                                                                                setTextColor(11,"CHỈNH SỬA NGÀY THÁNG XUẤT BẢN");
                                                                                                gotoxy(41,5);
                                                                                                setTextColor(10,"CHỈNH SỬA NGÀY");
                                                                                                KhungNguoiDung();
                                                                                                gotoxy(70,15);
                                                                                                setTextColor(10, "THÔNG BÁO");
                                                                                                gotoxy(70,17);
                                                                                                setTextColor(15, "Nhấn Enter để thoát chỉnh sửa ngày");
                                                                                                gotoxy(15,7);
                                                                                                setTextColor(11,"Nhập ngày cần chỉnh sửa:");
                                                                                                gotoxy(13,9);
                                                                                                setTextColor(15,"->");
                                                                                                gotoxy(16,9);
                                                                                                Nocursortype(TRUE);
                                                                                                std::string nhapNgayCanChinhSua;
                                                                                                InputCheckCin(nhapNgayCanChinhSua);
                                                                                                Nocursortype(FALSE);
                                                                                                if(nhapNgayCanChinhSua.empty()){
                                                                                                    system("cls");
                                                                                                    gotoxy(50,10);
                                                                                                    setTextColor(14,"Quay lại..");
                                                                                                    bchinhSuaNgay = false;
                                                                                                    bLuaChonNgayThangNam = false;
                                                                                                    Loading();
                                                                                                    continue;
                                                                                                }
                                                                                                // cracking
                                                                                                std::string thang = LayNgayThangNam(1, position);
                                                                                                std::string nam = LayNgayThangNam(2, position);
                                                                                                if(!KiemTraTinhHopLeNamXuatBan(nhapNgayCanChinhSua, thang, nam)){
                                                                                                    gotoxy(15,10);
                                                                                                    setTextColor(15,"Nhập ngày không hợp lệ, vui lòng nhập lại");
                                                                                                    Loading();
                                                                                                    continue;
                                                                                                }
                                                                                                gotoxy(15,10);
                                                                                                textcolor(15);
                                                                                                ThayDoiNgayThangNam(nhapNgayCanChinhSua, 0, position);
                                                                                                Sleep(1000);
                                                                                                system("cls");
                                                                                                bchinhSuaNgay = false;
                                                                                                bLuaChonNgayThangNam = false;
                                                                                            }
                                                                                        }
                                                                                        if(y4 == 9){
                                                                                            // chinh sua thang
                                                                                            bchinhSuaThang = true;
                                                                                            while(bchinhSuaThang){
                                                                                                system("cls");
                                                                                                KhungGiaoDien();
                                                                                                Nocursortype(FALSE);
                                                                                                gotoxy(11,5);
                                                                                                setTextColor(11,"CHỈNH SỬA NGÀY THÁNG XUẤT BẢN");
                                                                                                gotoxy(41,5);
                                                                                                setTextColor(10,"CHỈNH SỬA THÁNG");
                                                                                                KhungNguoiDung();
                                                                                                gotoxy(70,15);
                                                                                                setTextColor(10, "THÔNG BÁO");
                                                                                                gotoxy(70,17);
                                                                                                setTextColor(15, "Nhấn Enter để thoát chỉnh sửa tháng");
                                                                                                gotoxy(15,7);
                                                                                                setTextColor(11,"Nhập tháng cần chỉnh sửa:");
                                                                                                gotoxy(13,9);
                                                                                                setTextColor(15,"->");
                                                                                                gotoxy(16,9);
                                                                                                Nocursortype(TRUE);
                                                                                                std::string nhapThangCanChinhSua;
                                                                                                InputCheckCin(nhapThangCanChinhSua);
                                                                                                Nocursortype(FALSE);
                                                                                                if(nhapThangCanChinhSua.empty()){
                                                                                                    system("cls");
                                                                                                    gotoxy(50,10);
                                                                                                    setTextColor(14,"Quay lại..");
                                                                                                    bchinhSuaThang = false;
                                                                                                    bLuaChonNgayThangNam = false;
                                                                                                    Loading();
                                                                                                    continue;
                                                                                                }
                                                                                                //
                                                                                                std::string ngay = LayNgayThangNam(0, position);
                                                                                                std::string nam = LayNgayThangNam(2, position);
                                                                                                if(!KiemTraTinhHopLeNamXuatBan(ngay, nhapThangCanChinhSua, nam)){
                                                                                                    gotoxy(15,10);
                                                                                                    setTextColor(15,"Nhập tháng không hợp lệ, vui lòng nhập lại");
                                                                                                    Loading();
                                                                                                    continue;
                                                                                                }
                                                                                                gotoxy(15,10);
                                                                                                textcolor(15);
                                                                                                ThayDoiNgayThangNam(nhapThangCanChinhSua, 1, position);
                                                                                                Sleep(1000);
                                                                                                system("cls");
                                                                                                bchinhSuaThang = false;
                                                                                                bLuaChonNgayThangNam = false;
                                                                                            }
                                                                                        }
                                                                                        else if(y4 == 11){
                                                                                            // chinh sua nam
                                                                                            bchinhSuaNam = true;
                                                                                            while(bchinhSuaNam){
                                                                                                system("cls");
                                                                                                KhungGiaoDien();
                                                                                                Nocursortype(FALSE);
                                                                                                gotoxy(11,5);
                                                                                                setTextColor(11,"CHỈNH SỬA NGÀY THÁNG XUẤT BẢN");
                                                                                                gotoxy(41,5);
                                                                                                setTextColor(10,"CHỈNH SỬA NĂM");
                                                                                                KhungNguoiDung();
                                                                                                gotoxy(70,15);
                                                                                                setTextColor(10, "THÔNG BÁO");
                                                                                                gotoxy(70,17);
                                                                                                setTextColor(15, "Nhấn Enter để thoát chỉnh sửa năm");
                                                                                                gotoxy(15,7);
                                                                                                setTextColor(11,"Nhập năm cần chỉnh sửa:");
                                                                                                gotoxy(13,9);
                                                                                                setTextColor(15,"->");
                                                                                                gotoxy(16,9);
                                                                                                Nocursortype(TRUE);
                                                                                                std::string nhapNamCanChinhSua;
                                                                                                InputCheckCin(nhapNamCanChinhSua);
                                                                                                Nocursortype(FALSE);
                                                                                                if(nhapNamCanChinhSua.empty()){
                                                                                                    system("cls");
                                                                                                    gotoxy(50,10);
                                                                                                    setTextColor(14,"Quay lại..");
                                                                                                    bchinhSuaNam = false;
                                                                                                    bLuaChonNgayThangNam = false;
                                                                                                    Loading();
                                                                                                    continue;
                                                                                                }
                                                                                                //
                                                                                                std::string ngay = LayNgayThangNam(0, position);
                                                                                                std::string thang = LayNgayThangNam(1, position);
                                                                                                if(!KiemTraTinhHopLeNamXuatBan(ngay, thang, nhapNamCanChinhSua)){
                                                                                                    gotoxy(15,10);
                                                                                                    setTextColor(15,"Nhập năm không hợp lệ, vui lòng nhập lại");
                                                                                                    Loading();
                                                                                                    continue;
                                                                                                }
                                                                                                gotoxy(15,10);
                                                                                                textcolor(15);  
                                                                                                ThayDoiNgayThangNam(nhapNamCanChinhSua, 2, position);
                                                                                                Sleep(1000);
                                                                                                system("cls");
                                                                                                bchinhSuaNam = false;
                                                                                                bLuaChonNgayThangNam = false;
                                                                                            }
                                                                                        }
                                                                                        else if(y4 == 13){
                                                                                            system("cls");
                                                                                            gotoxy(50,10);
                                                                                            setTextColor(14,"Quay lại..");
                                                                                            Loading();
                                                                                            bLuaChonNgayThangNam = false;
                                                                                            bchinhSuaNgayThangXuatBan = false;
                                                                                            bsuadoithongtinsach = false;
                                                                                        }
                                                                                        break;
                                                                                    }
                                                                                }
                                                                            } 
                                                                        }
                                                                    }
                                                                    else if(yyy == 17){
                                                                        // chinh sua so trang
                                                                        bool bchinhSuaSoTrang = true;
                                                                        while(bchinhSuaSoTrang){
                                                                            system("cls");
                                                                            gotoxy(11,5);
                                                                            setTextColor(11,"SỬA ĐỔI THÔNG TIN SÁCH");
                                                                            gotoxy(34,5);
                                                                            setTextColor(10,"CHỈNH SỬA SỐ TRANG");
                                                                            KhungNguoiDung();
                                                                            gotoxy(70,15);
                                                                            setTextColor(10, "THÔNG BÁO");
                                                                            gotoxy(70,17);
                                                                            setTextColor(15, "Nhấn Enter để thoát chỉnh sửa số trang");
                                                                            gotoxy(15,7);
                                                                            setTextColor(11, "Nhập số trang cần chỉnh sửa:");
                                                                            gotoxy(13,9);
                                                                            setTextColor(15, "->");
                                                                            gotoxy(16,9);
                                                                            Nocursortype(TRUE);
                                                                            std::string chinhSuaSoTrang;
                                                                            InputCheckCin(chinhSuaSoTrang);
                                                                            Nocursortype(FALSE);
                                                                            if(!KiemTraKiTuNgayThangNam(chinhSuaSoTrang)){
                                                                                gotoxy(15,10);
                                                                                setTextColor(12, "Nhập không hợp lệ, vui lòng nhập lại");
                                                                                Loading();
                                                                                continue;
                                                                            }
                                                                            if(chinhSuaSoTrang == "0"){
                                                                                gotoxy(15,10);
                                                                                setTextColor(12, "Số trang không thể bằng \'0\', vui lòng nhập lại");
                                                                                Loading();
                                                                                continue;
                                                                            }
                                                                            if(chinhSuaSoTrang.empty()){
                                                                                chinhSuaSoTrang = this->VsoTrang[position];
                                                                            }
                                                                            gotoxy(15,9);
                                                                            textcolor(15);
                                                                            std::cout << this->VsoTrang[position] << " -> " << chinhSuaSoTrang << std::endl;
                                                                            Loading();
                                                                            this->VsoTrang[position] = chinhSuaSoTrang;
                                                                            bchinhSuaSoTrang = false;
                                                                            bsuadoithongtinsach = false;
                                                                        }
                                                                    }
                                                                    else if(yyy == 19){
                                                                        // chinh sua so ban copy trong thu vien
                                                                        bool bchinhSuaSoBanCopy = true;
                                                                        while(bchinhSuaSoBanCopy){
                                                                            system("cls");
                                                                            gotoxy(11,5);
                                                                            setTextColor(11,"SỬA ĐỔI THÔNG TIN SÁCH");
                                                                            gotoxy(34,5);
                                                                            setTextColor(10,"CHỈNH SỬA SỐ BẢN COPY");
                                                                            KhungNguoiDung();
                                                                            gotoxy(70,15);
                                                                            setTextColor(10, "THÔNG BÁO");
                                                                            gotoxy(70,17);
                                                                            setTextColor(15, "Nhấn Enter để thoát chỉnh sửa số bản copy");
                                                                            gotoxy(15,7);
                                                                            setTextColor(11, "Nhập số bản copy cần chỉnh sửa:");
                                                                            gotoxy(13,9);
                                                                            setTextColor(15, "->");
                                                                            gotoxy(16,9);
                                                                            Nocursortype(TRUE);
                                                                            std::string chinhSuaSoBanCopy;
                                                                            InputCheckCin(chinhSuaSoBanCopy);
                                                                            Nocursortype(FALSE);
                                                                            if(!KiemTraKiTuNgayThangNam(chinhSuaSoBanCopy)){
                                                                                gotoxy(15,10);
                                                                                setTextColor(12, "Nhập không hợp lệ, vui lòng nhập lại");
                                                                                Loading();
                                                                                continue;
                                                                            }
                                                                            if(chinhSuaSoBanCopy.empty()){
                                                                                chinhSuaSoBanCopy = this->VsoBanCopyTrongThuVien[position];
                                                                            }
                                                                            gotoxy(15,9);
                                                                            textcolor(15);
                                                                            std::cout << this->VsoBanCopyTrongThuVien[position] << " -> " << chinhSuaSoBanCopy << std::endl;
                                                                            Loading();
                                                                            this->VsoBanCopyTrongThuVien[position] = chinhSuaSoBanCopy;
                                                                            bchinhSuaSoBanCopy = false;
                                                                            bsuadoithongtinsach = false;
                                                                        }
                                                                    }
                                                                    else if(yyy == 21){
                                                                        system("cls");
                                                                        gotoxy(50,10);
                                                                        setTextColor(14,"Quay lại..");
                                                                        Loading();
                                                                        bsuadoithongtinsach = false;
                                                                        bmainChinhSua = false;
                                                                    }
                                                                    break;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            else if(yy == 13){
                                                // xem danh sach sach trong thu vien
                                                bool bLoopDanhSachSach = true;
                                                while(bLoopDanhSachSach){
                                                    system("cls");
                                                    gotoxy(11,5);
                                                    setTextColor(11,"QUẢN LÍ SÁCH TRONG THƯ VIỆN");
                                                    gotoxy(39,5);
                                                    setTextColor(10,"XEM DANH SÁCH SÁCH TRONG THƯ VIỆN");
                                                    InRaDanhSachSach();
                                                    gotoxy(1,13 + this->VtenSach.size() + 1);
                                                    std::cout << "1. Tìm kiếm sách dựa trên từ khoá" << std::endl;
                                                    gotoxy(1,13 + this->VtenSach.size() + 3);
                                                    std::cout << "2. Quay lại" << std::endl;
                                                    gotoxy(1,13 + this->VtenSach.size() + 1);
                                                    setTextColor(12,"1. Tìm kiếm sách dựa trên từ khoá");
                                                    int xx = 1;
                                                    int yy = 13 + this->VtenSach.size() + 1;
                                                    bool bnhapInRaDanhSach = true;
                                                    while(bnhapInRaDanhSach){
                                                        char nhapInRaDanhSachfake = _getch();
                                                        switch(nhapInRaDanhSachfake){
                                                            case 'w':{
                                                                if(yy == 13 + this->VtenSach.size() + 1){
                                                                    yy = 13 + this->VtenSach.size() + 3;
                                                                }
                                                                else{
                                                                    yy -= 2;
                                                                }
                                                                if(yy == 13 + this->VtenSach.size() + 1){
                                                                    gotoxy(xx, 13 + this->VtenSach.size() + 3);
                                                                    setTextColor(15,"2. Quay lại");
                                                                    gotoxy(xx,yy);
                                                                    setTextColor(12,"1. Tìm kiếm sách dựa trên từ khoá");
                                                                }
                                                                else if(yy == 13 + this->VtenSach.size() + 3){
                                                                    gotoxy(xx, 13 + this->VtenSach.size() + 1);
                                                                    setTextColor(15,"1. Tìm kiếm sách dựa trên từ khoá");
                                                                    gotoxy(xx, yy);
                                                                    setTextColor(12,"2. Quay lại");
                                                                }
                                                                break;
                                                            }
                                                            case 's':{
                                                                if(yy == 13 + this->VtenSach.size() + 3){
                                                                    yy = 13 + this->VtenSach.size() + 1;
                                                                }
                                                                else{
                                                                    yy += 2;
                                                                }
                                                                if(yy == 13 + this->VtenSach.size() + 1){
                                                                    gotoxy(xx, 13 + this->VtenSach.size() + 3);
                                                                    setTextColor(15,"2. Quay lại");
                                                                    gotoxy(xx,yy);
                                                                    setTextColor(12,"1. Tìm kiếm sách dựa trên từ khoá");
                                                                }
                                                                else if(yy == 13 + this->VtenSach.size() + 3){
                                                                    gotoxy(xx,13 + this->VtenSach.size() + 1);
                                                                    setTextColor(15,"1. Tìm kiếm sách dựa trên từ khoá");
                                                                    gotoxy(xx,yy);
                                                                    setTextColor(12,"2. Quay lại");
                                                                }
                                                                break;
                                                            }
                                                            case 13:{
                                                                if(yy == 13 + this->VtenSach.size() + 1){
                                                                    bool run;
                                                                    TimKiemThongTinSach(run, getCheckAdmin(), "QUẢN LÍ SÁCH TRONG THƯ VIỆN","XEM DANH SÁCH SÁCH TRONG THƯ VIỆN");
                                                                    bnhapInRaDanhSach = false;
                                                                }
                                                                else if(yy == 13 + this->VtenSach.size() + 3){
                                                                    system("cls");
                                                                    gotoxy(50,10);
                                                                    setTextColor(14,"Quay lại..");
                                                                    Loading();
                                                                    bnhapInRaDanhSach = false;
                                                                    bLoopDanhSachSach = false;
                                                                    bNhapChinhSuaTaiKhoan = false;
                                                                }
                                                                break;
                                                            }
                                                        }
                                                    }
                                                }
                                                
                                            }
                                            else if(yy == 15){
                                                system("cls");
                                                gotoxy(50,10);
                                                setTextColor(14,"Quay lại..");
                                                Loading();
                                                bNhapChinhSuaTaiKhoan = false;
                                                bloopnhapQuanLi = false;
                                                bloopMainIn = false;
                                            }
                                            break;
                                        }
                                    }
                                }
                                // start
                            }
                        }
                        else if(y == 11){
                            system("cls");
                            gotoxy(50,10);
                            setTextColor(14,"..Đang đăng xuất");
                            Loading();
                            bloopMainIn = false;
                            bloopMain = false;
                        }
                    }
                }
            }
            // rebuild
            // tracking
        } 
    }
    else{ // nguoi dung binh thuong
        bool bloopMain = true;
        while(bloopMain){
        	system("cls");
            KhungGiaoDien();
            Nocursortype(FALSE);
            GiaoDienNonAdmin();
            gotoxy(11,7);
            textcolor(15);
            setTextColor(12,"1. Xem danh sách sách trong thư viện");
            gotoxy(11,5);
            setTextColor(10,"TRANG CHỦ:");
            KhungNguoiDung();
            gotoxy(70,15);
            setTextColor(10, "THÔNG BÁO"); 
            int x = 11;
            int y = 7;
            // rebuild 
            bool bloopMainIn = true;
            while(bloopMainIn){
                char nhapLoopMainIn = _getch();
                switch(nhapLoopMainIn){
                    case 'w':{
                        if(y == 7){
                            y = 11;
                        }
                        else{
                            y -= 2;
                        }
                        if(y == 7){
                            gotoxy(x,9);
                            setTextColor(15,"2. Chỉnh sửa thông tin tài khoản");
                            gotoxy(x,y);
                            setTextColor(12,"1. Xem danh sách sách trong thư viện");
                        }
                        else if(y == 9){
                            gotoxy(x,11);
                            setTextColor(15,"3. Đăng xuất");
                            gotoxy(x,y);
                            setTextColor(12,"2. Chỉnh sửa thông tin tài khoản");
                        }
                        else if(y == 11){
                            gotoxy(x,7);
                            setTextColor(15,"1. Xem danh sách sách trong thư viện");
                            gotoxy(x,y);
                            setTextColor(12,"3. Đăng xuất");
                        }
                        break;
                    }
                    case 's':{
                        if(y == 11){
                            y = 7;
                        }
                        else{
                            y += 2;
                        }
                        if(y == 7){
                            gotoxy(x,11);
                            setTextColor(15,"3. Đăng xuất");
                            gotoxy(x,y);
                            setTextColor(12,"1. Xem danh sách sách trong thư viện");
                        }
                        else if(y == 9){
                            gotoxy(x,7);
                            setTextColor(15,"1. Xem danh sách sách trong thư viện");
                            gotoxy(x,y);
                            setTextColor(12,"2. Chỉnh sửa thông tin tài khoản");
                        }
                        else if(y == 11){
                            gotoxy(x,7);
                            setTextColor(15,"1. Xem danh sách sách trong thư viện");
                            gotoxy(x,9);
                            setTextColor(15,"2. Chỉnh sửa thông tin tài khoản");
                            gotoxy(x,y);
                            setTextColor(12,"3. Đăng xuất");
                        }
                        break;
                    }
                    case 13:{
                        if(y == 7){
                            system("cls");
                            // xem danh sach sach trong thu vien
                            bool bloopnhapQuanLi = true;
                            while(bloopnhapQuanLi){
                                gotoxy(11,5);
                                setTextColor(11,"TRANG CHỦ");
                                gotoxy(21,5);
                                setTextColor(10,"XEM DANH SÁCH SÁCH TRONG THƯ VIỆN");
                                // need proccess
                                gotoxy(1,7);
                                InRaDanhSachSach();
                                gotoxy(1,13 + this->VtenSach.size() + 1);
                                std::cout << "1. Tìm kiếm sách dựa trên từ khoá" << std::endl;
                                gotoxy(1,13 + this->VtenSach.size() + 3);
                                std::cout << "2. Quay lại" << std::endl;
                                gotoxy(1,13 + this->VtenSach.size() + 1);
                                setTextColor(12,"1. Tìm kiếm sách dựa trên từ khoá");
                                int xx = 1;
                                int yy = 13 + this->VtenSach.size() + 1;
                                bool bnhapInRaDanhSach = true;
                                while(bnhapInRaDanhSach){
                                    char nhapInRaDanhSachfake = _getch();
                                    switch(nhapInRaDanhSachfake){
                                        case 'w':{
                                            if(yy == 13 + this->VtenSach.size() + 1){
                                                yy = 13 + this->VtenSach.size() + 3;
                                            }
                                            else{
                                                yy -= 2;
                                            }
                                            if(yy == 13 + this->VtenSach.size() + 1){
                                                gotoxy(xx, 13 + this->VtenSach.size() + 3);
                                                setTextColor(15,"2. Quay lại");
                                                gotoxy(xx,yy);
                                                setTextColor(12,"1. Tìm kiếm sách dựa trên từ khoá");
                                            }
                                            else if(yy == 13 + this->VtenSach.size() + 3){
                                                gotoxy(xx, 13 + this->VtenSach.size() + 1);
                                                setTextColor(15,"1. Tìm kiếm sách dựa trên từ khoá");
                                                gotoxy(xx, yy);
                                                setTextColor(12,"2. Quay lại");
                                            }
                                            break;
                                        }
                                        case 's':{
                                            if(yy == 13 + this->VtenSach.size() + 3){
                                                yy = 13 + this->VtenSach.size() + 1;
                                            }
                                            else{
                                                yy += 2;
                                            }
                                            if(yy == 13 + this->VtenSach.size() + 1){
                                                gotoxy(xx, 13 + this->VtenSach.size() + 3);
                                                setTextColor(15,"2. Quay lại");
                                                gotoxy(xx,yy);
                                                setTextColor(12,"1. Tìm kiếm sách dựa trên từ khoá");
                                            }
                                            else if(yy == 13 + this->VtenSach.size() + 3){
                                                gotoxy(xx,13 + this->VtenSach.size() + 1);
                                                setTextColor(15,"1. Tìm kiếm sách dựa trên từ khoá");
                                                gotoxy(xx,yy);
                                                setTextColor(12,"2. Quay lại");
                                            }
                                            break;
                                        }
                                        case 13:{
                                            if(yy == 13 + this->VtenSach.size() + 1){
                                                bool run;
                                                TimKiemThongTinSach(run, getCheckAdmin());
                                                bnhapInRaDanhSach = false;
                                            }
                                            else if(yy == 13 + this->VtenSach.size() + 3){
                                                system("cls");
                                                gotoxy(50,10);
                                                setTextColor(14,"Quay lại..");
                                                Loading();
                                                bnhapInRaDanhSach = false;
                                                bloopnhapQuanLi = false;
                                                bloopMainIn = false;
                                            }
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                        if(y == 9){
                            //* cracking 
                            system("cls");
                            // chinh sua thong tin nguoi dung
                            bool bloopnhapQuanLi = true;
                            while(bloopnhapQuanLi){
                                KhungGiaoDien();
                                Nocursortype(FALSE);
                                gotoxy(11,5);
                                setTextColor(11,"TRANG CHỦ");
                                gotoxy(21,5);
                                setTextColor(10,"CHỈNH SỬA THÔNG TIN TÀI KHOẢN");
                                 // start fixing
                                ThongBaoChinhSuaThongTinTaiKhoan();
                                gotoxy(11,7);
                                textcolor(15);
                                setTextColor(12,"1. Đổi tên người dùng");
                                KhungNguoiDung();
                                gotoxy(70,15);
                                setTextColor(10, "THÔNG BÁO"); 
                                //
                                int xx = 11;
                                int yy = 7;
                                bool  bNhapChinhSuaTaiKhoan = true;
                                while(bNhapChinhSuaTaiKhoan){
                                    char nhapChinhSuaTaiKhoan = _getch();
                                    switch(nhapChinhSuaTaiKhoan){
                                        case 'w':{
                                            if(yy == 7){
                                                yy = 13;
                                            }
                                            else{
                                                yy -= 2;
                                            }
                                            if(yy == 7){
                                                gotoxy(xx,9);
                                                setTextColor(15,"2. Đổi mật khẩu");
                                                gotoxy(xx,yy);
                                                setTextColor(12,"1. Đổi tên người dùng");
                                            }
                                            else if(yy == 9){
                                                gotoxy(xx,11);
                                                setTextColor(15,"3. Xoá tài khoản");
                                                gotoxy(xx,yy);
                                                setTextColor(12,"2. Đổi mật khẩu");
                                            }
                                            else if(yy == 11){
                                                gotoxy(xx,13);
                                                setTextColor(15,"4. Quay lại");
                                                gotoxy(xx,yy);
                                                setTextColor(12,"3. Xoá tài khoản");
                                            }
                                            else if(yy == 13){
                                                gotoxy(xx,7);
                                                setTextColor(15,"1. Đổi tên người dùng");
                                                gotoxy(xx,yy);
                                                setTextColor(12,"4. Quay lại");
                                            }
                                            break;
                                        }
                                        case 's':{
                                            if(yy == 13){
                                                yy = 7;
                                            }
                                            else{
                                                yy += 2;
                                            }
                                            if(yy == 7){
                                                gotoxy(xx,13);
                                                setTextColor(15,"4. Quay lại");
                                                gotoxy(xx,yy);
                                                setTextColor(12,"1. Đổi tên người dùng");
                                            }
                                            else if(yy == 9){
                                                gotoxy(xx,7);
                                                setTextColor(15,"1. Đổi tên người dùng");
                                                gotoxy(xx,yy);
                                                setTextColor(12,"2. Đổi mật khẩu");
                                            }
                                            else if(yy == 11){
                                                gotoxy(xx,7);
                                                setTextColor(15,"1. Đổi tên người dùng");
                                                gotoxy(xx,9);
                                                setTextColor(15,"2. Đổi mật khẩu");
                                                gotoxy(xx,yy);
                                                setTextColor(12,"3. Xoá tài khoản");
                                            }
                                            else if(yy == 13){
                                                gotoxy(xx,7);
                                                setTextColor(15,"1. Đổi tên người dùng");
                                                gotoxy(xx,9);
                                                setTextColor(15,"2. Đổi mật khẩu");
                                                gotoxy(xx,11);
                                                setTextColor(15,"3. Xoá tài khoản");
                                                gotoxy(xx,yy);
                                                setTextColor(12,"4. Quay lại");
                                            }
                                            break;
                                        }
                                        case 13:{
                                            if(yy == 7){
                                                bool bdoiTenNguoiDung = true;
                                                while(bdoiTenNguoiDung){
                                                    system("cls");
                                                    KhungGiaoDien();
                                                    Nocursortype(FALSE);
                                                    gotoxy(11,5);
                                                    setTextColor(11,"CHỈNH SỬA THÔNG TIN TÀI KHOẢN");
                                                    gotoxy(40,5);
                                                    setTextColor(10," ĐỔI TÊN NGƯỜI DÙNG");
                                                    // start fixing
                                                    KhungNguoiDung();
                                                    gotoxy(70,15);
                                                    setTextColor(10, "THÔNG BÁO"); 
                                                    gotoxy(70,17);
                                                    setTextColor(15, "1. Quay lại"); 
                                                    gotoxy(15,7);
                                                    setTextColor(11, "Nhập tên người dùng cần thay đổi:");
                                                    gotoxy(13,9);
                                                    setTextColor(15,"->");    
                                                    gotoxy(16,9);
                                                    Nocursortype(TRUE);
                                                    std::string tenNguoiDungThayDoi;
                                                    std::getline(std::cin, tenNguoiDungThayDoi);
                                                    Nocursortype(FALSE);
                                                    if(tenNguoiDungThayDoi == "1"){
                                                        system("cls");
                                                        gotoxy(50,10);
                                                        setTextColor(14,"Quay lại..");
                                                        Loading();
                                                        bdoiTenNguoiDung = false;
                                                        bNhapChinhSuaTaiKhoan = false;
                                                        continue;
                                                    }
                                                    if(tenNguoiDungThayDoi.empty()){
                                                        gotoxy(16,10);
                                                        setTextColor(12, "Nhập không hợp lệ, vui lòng nhập lại");
                                                        Loading();
                                                        continue;
                                                    }
                                                    for( int i = 0; i < this->VtenTaiKhoan.size(); i++ ){
                                                        if(this->VtenTaiKhoan[i] == getTaiKhoan()){
                                                            ChuanHoaChuoi(tenNguoiDungThayDoi);
                                                            setTenNguoiDung(tenNguoiDungThayDoi);
                                                            gotoxy(16,10);
                                                            textcolor(15);
                                                            std::cout << this->VtenNguoiDung[i] << " -> " << tenNguoiDungThayDoi << std::endl;
                                                            this->VtenNguoiDung[i] = tenNguoiDungThayDoi;
                                                            Loading();
                                                            bdoiTenNguoiDung = false;
                                                            bNhapChinhSuaTaiKhoan = false;
                                                            break;
                                                        }
                                                    }
                                                }
                                            }
                                            else if(yy == 9){
                                                bool bdoiMatKhau = true;
                                                while(bdoiMatKhau){
                                                    system("cls");
                                                    KhungGiaoDien();
                                                    Nocursortype(FALSE);
                                                    gotoxy(11,5);
                                                    setTextColor(11,"CHỈNH SỬA THÔNG TIN TÀI KHOẢN");
                                                    gotoxy(40,5);
                                                    setTextColor(10," ĐỔI MẬT KHẨU");
                                                    //
                                                    KhungNguoiDung();
                                                    gotoxy(70,15);
                                                    setTextColor(10, "THÔNG BÁO"); 
                                                    gotoxy(70,17);
                                                    setTextColor(15, "1. Quay lại"); 
                                                    gotoxy(15,7);
                                                    setTextColor(11, "Nhập mật khẩu cũ:");
                                                    gotoxy(13,9);
                                                    setTextColor(15,"->");    
                                                    gotoxy(16,9);
                                                    Nocursortype(TRUE);
                                                    std::string matKhauCu;
                                                    InputCheckCin(matKhauCu);
                                                    Nocursortype(FALSE);
                                                    if(matKhauCu == "1"){
                                                        system("cls");
                                                        gotoxy(50,10);
                                                        setTextColor(14,"Quay lại..");
                                                        Loading();
                                                        bdoiMatKhau = false;
                                                        bNhapChinhSuaTaiKhoan = false;
                                                        continue;
                                                    }
                                                    if(matKhauCu.empty()){
                                                        gotoxy(16,10);
                                                        setTextColor(12, "Nhập không hợp lệ, vui lòng nhập lại");
                                                        Loading();
                                                        continue;
                                                    }
                                                    system("cls");
                                                    KhungGiaoDien();
                                                    Nocursortype(FALSE);
                                                    gotoxy(11,5);
                                                    setTextColor(11,"CHỈNH SỬA THÔNG TIN TÀI KHOẢN");
                                                    gotoxy(40,5);
                                                    setTextColor(10," ĐỔI MẬT KHẨU");
                                                    //
                                                    KhungNguoiDung();
                                                    gotoxy(70,15);
                                                    setTextColor(10, "THÔNG BÁO"); 
                                                    gotoxy(70,17);
                                                    setTextColor(15, "1. Nhập lại mật khẩu cũ"); 
                                                    gotoxy(70,19);
                                                    setTextColor(15, "2. Thoát đổi mật khẩu");
                                                    gotoxy(15,7);
                                                    setTextColor(10, "Mật khẩu cũ:");
                                                    gotoxy(28,7);
                                                    setTextColor(15, AnMatKhau(matKhauCu));
                                                    // nhap mat khau moi
                                                    gotoxy(15,9);
                                                    setTextColor(11, "Nhập mật khẩu mới:");
                                                    gotoxy(13,11);
                                                    setTextColor(15,"->");    
                                                    gotoxy(16,11);
                                                    Nocursortype(TRUE);
                                                    std::string matKhauMoi;
                                                    InputCheckCin(matKhauMoi);
                                                    Nocursortype(FALSE);
                                                    if(matKhauMoi == "1"){
                                                        system("cls");
                                                        gotoxy(50,10);
                                                        setTextColor(14,"Quay lại..");
                                                        Loading();
                                                        continue;
                                                    }
                                                    if(matKhauMoi == "2"){
                                                        system("cls");
                                                        gotoxy(50,10);
                                                        setTextColor(14,"Quay lại..");
                                                        Loading();
                                                        bdoiMatKhau = false;
                                                        bNhapChinhSuaTaiKhoan = false;
                                                        continue;
                                                    }   
                                                    if(matKhauCu != getMatKhau()){
                                                        gotoxy(16,12);
                                                        setTextColor(12, "Mật khẩu cũ không trùng khớp, vui lòng nhập lại");
                                                        Loading();
                                                        continue;
                                                    }
                                                    if(matKhauMoi.empty()){
                                                        gotoxy(16,12);
                                                        setTextColor(12, "Nhập không hợp lệ, vui lòng nhập lại");
                                                        Loading();
                                                        continue;
                                                    }
                                                    if(matKhauMoi.length() < 5){
                                                        gotoxy(16,12);
                                                        setTextColor(12, "Yêu cầu mật khẩu ít nhất 5 kí tự, yêu cầu nhập lại");
                                                        Loading();
                                                        continue;
                                                    }
                                                    int position = -1;
                                                    for( int i = 0; i < this->VmatKhau.size(); i++ ){
                                                        if(this->VtenTaiKhoan[i] == getTaiKhoan()){
                                                            if(this->VmatKhau[i] == getMatKhau()){
                                                                position = i;
                                                                break;
                                                            }
                                                        }
                                                    }
                                                    gotoxy(16,12);
                                                    setTextColor(10, "..Đổi mật khẩu thành công !!");
                                                    setMatKhau(matKhauMoi);
                                                    this->VmatKhau[position] = matKhauMoi;
                                                    Loading();
                                                    bdoiMatKhau = false;
                                                    bNhapChinhSuaTaiKhoan = false;
                                                }
                                            }
                                            else if(yy == 11){
                                                bool bxoaTaiKhoan = true;
                                                while(bxoaTaiKhoan){
                                                    system("cls");
                                                    KhungGiaoDien();
                                                    Nocursortype(FALSE);
                                                    gotoxy(11,5);
                                                    setTextColor(11,"CHỈNH SỬA THÔNG TIN TÀI KHOẢN");
                                                    gotoxy(41,5);
                                                    setTextColor(10,"XOÁ TÀI KHOẢN");
                                                    //
                                                    KhungNguoiDung();
                                                    gotoxy(70,15);
                                                    setTextColor(10, "THÔNG BÁO"); 
                                                    gotoxy(70,17);
                                                    setTextColor(15, "1. Quay lại"); 
                                                    gotoxy(15,7);
                                                    setTextColor(11, "Nhập mật khẩu để xoá tài khoản");
                                                    gotoxy(13,9);
                                                    setTextColor(15,"->");    
                                                    gotoxy(16,9);
                                                    Nocursortype(TRUE);
                                                    std::string matKhauDelete;
                                                    std::getline(std::cin, matKhauDelete);
                                                    Nocursortype(FALSE);
                                                    if(matKhauDelete == "1"){
                                                        system("cls");
                                                        gotoxy(50,10);
                                                        setTextColor(14,"Quay lại..");
                                                        Loading();
                                                        bxoaTaiKhoan = false;
                                                        bNhapChinhSuaTaiKhoan = false;
                                                        continue;
                                                    }
                                                    if(matKhauDelete.empty()){
                                                        gotoxy(16,10);
                                                        setTextColor(12, "Nhập không hợp lệ, vui lòng nhập lại");
                                                        Loading();
                                                        continue;
                                                    }
                                                    system("cls");
                                                    KhungGiaoDien();
                                                    Nocursortype(FALSE);
                                                    gotoxy(11,5);
                                                    setTextColor(11,"CHỈNH SỬA THÔNG TIN TÀI KHOẢN");
                                                    gotoxy(41,5);
                                                    setTextColor(10,"XOÁ TÀI KHOẢN");
                                                    //
                                                    KhungNguoiDung();
                                                    gotoxy(70,15);
                                                    setTextColor(10, "THÔNG BÁO"); 
                                                    gotoxy(70,17);
                                                    setTextColor(15, "1. Quay lại"); 
                                                    gotoxy(15,7);
                                                    setTextColor(11, "Mật khẩu cũ:");
                                                    gotoxy(28,7);
                                                    setTextColor(15, AnMatKhau(matKhauDelete));
                                                    if(matKhauDelete != getMatKhau()){
                                                        gotoxy(16,12);
                                                        setTextColor(12, "Mật khẩu cũ không trùng khớp, vui lòng nhập lại");
                                                        Loading();
                                                        continue;
                                                    }
                                                    // need add some feartures
                                                    gotoxy(15,9);
                                                    setTextColor(12, "..Đang xoá tài khoản");
                                                    Loading();
                                                    int position = -1;
                                                    for( int i = 0; i < this->VtenTaiKhoan.size(); i++ ){
                                                        if(this->VtenTaiKhoan[i] == getTaiKhoan()){
                                                            this->VuserID.erase(this->VuserID.begin() + i, this->VuserID.begin() + i + 1);
                                                            this->VtenNguoiDung.erase(this->VtenNguoiDung.begin() + i, this->VtenNguoiDung.begin() + i + 1);
                                                            this->VtenTaiKhoan.erase(this->VtenTaiKhoan.begin() + i, this->VtenTaiKhoan.begin() + i + 1);
                                                            this->VmatKhau.erase(this->VmatKhau.begin() + i, this->VmatKhau.begin() + i + 1);
                                                            break;
                                                        }
                                                    }
                                                    bxoaTaiKhoan = false;
                                                    bNhapChinhSuaTaiKhoan = false;
                                                    bloopnhapQuanLi = false;
                                                    bloopMainIn = false;
                                                    bloopMain = false;
                                                }
                                            }
                                            else if(yy == 13){
                                                system("cls");
                                                gotoxy(50,10);
                                                setTextColor(14,"Quay lại..");
                                                Loading();
                                                bNhapChinhSuaTaiKhoan = false;
                                                bloopnhapQuanLi = false;
                                                bloopMainIn = false;
                                            }
                                            break;
                                        }
                                    }
                                }
                            }
                            //* cracking 
                        }
                        if(y == 11){
                            system("cls");
                            gotoxy(50,10);
                            setTextColor(14,"..Đang đăng xuất");
                            Loading();
                            bloopMainIn = false;
                            bloopMain = false;
                        }
                        break;
                    }
                }
            }
            // rebuild
        }
    }
}

void NguoiDung::XuLiLuaChonDangNhapDangKy() {
    bool loop = true;
    int x = 40;
    int y = 11;
    std::string Copy = "1. Đăng nhập";
    while(loop){
        Nocursortype(FALSE);
        ManHinhChinhDangNhapDangKy();
        KhungXuLiLuaChonDangNhapDangKy();
        Nocursortype(FALSE);
        // confirm build
        gotoxy(x,y);
        setTextColor(12,Copy);
        bool bloopMain = true;
        while(bloopMain){
            char nhapManHinhDangNhapDangKy = _getch();
            switch(nhapManHinhDangNhapDangKy){
                case 'w':{
                    if(y == 11){
                        y = 19;
                    }
                    else{
                        y -= 2;
                    }
                    if(y == 11){
                        gotoxy(x,13);
                        setTextColor(15, "2. Đăng ký");
                        gotoxy(x,y);
                        setTextColor(12, "1. Đăng nhập");
                    }
                    else if(y == 13){
                        gotoxy(x,15);
                        setTextColor(15, "3. Hướng dẫn sử dụng chương trình");
                        gotoxy(x,y);
                        setTextColor(12, "2. Đăng ký");
                    }
                    else if(y == 15){
                        gotoxy(x,17);
                        setTextColor(15, "4. Thông tin bài tập lớn");
                        gotoxy(x,y);
                        setTextColor(12, "3. Hướng dẫn sử dụng chương trình");
                    }
                    else if(y == 17){
                        gotoxy(x,19);
                        setTextColor(15, "5. Thoát chương trình");
                        gotoxy(x,y);
                        setTextColor(12, "4. Thông tin bài tập lớn");
                    }
                    else if(y == 19){
                        gotoxy(x,11);
                        setTextColor(15, "1. Đăng nhập");
                        gotoxy(x,y);
                        setTextColor(12, "5. Thoát chương trình");
                    }

                    break;
                }
                case 's':{
                    if(y == 19){
                        y = 11;
                    }
                    else{
                        y += 2;
                    }
                    if(y == 11){
                        gotoxy(x,19);
                        setTextColor(15, "5. Thoát chương trình");
                        gotoxy(x,y);
                        setTextColor(12, "1. Đăng nhập");
                    }
                    else if(y == 13){
                        gotoxy(x,11);
                        setTextColor(15,"1. Đăng nhập");
                        gotoxy(x,y);
                        setTextColor(12, "2. Đăng ký");
                    }
                    else if(y == 15){
                        gotoxy(x,11);
                        setTextColor(15,"1. Đăng nhập");
                        gotoxy(x,13);
                        setTextColor(15, "2. Đăng ký");
                        gotoxy(x,y);
                        setTextColor(12, "3. Hướng dẫn sử dụng chương trình");
                    }
                    else if(y == 17){
                        gotoxy(x,11);
                        setTextColor(15,"1. Đăng nhập");
                        gotoxy(x,13);
                        setTextColor(15, "2. Đăng ký");
                        gotoxy(x,15);
                        setTextColor(15, "3. Hướng dẫn sử dụng chương trình");
                        gotoxy(x,y);
                        setTextColor(12, "4. Thông tin bài tập lớn");
                    }
                    else if(y == 19){
                        gotoxy(x,11);
                        setTextColor(15,"1. Đăng nhập");
                        gotoxy(x,13);
                        setTextColor(15, "2. Đăng ký");
                        gotoxy(x,15);
                        setTextColor(15, "3. Hướng dẫn sử dụng chương trình");
                        gotoxy(x,17);
                        setTextColor(15, "4. Thông tin bài tập lớn");
                        gotoxy(x,y);
                        setTextColor(12, "5. Thoát chương trình");
                    }
                    break;
                }
                case 13:{
                    if(y == 11){
                        Copy = "1. Đăng nhập";
                        system("cls");
                        ThucHienDangNhap();
                        if(getDangNhapThanhCong()){
                        // chuyen vao man hinh dang nhap
                            QuanLiNguoiDung();
                        }
                        bloopMain = false;
                    }
                    else if(y == 13){
                        Copy = "2. Đăng ký";
                        system("cls");
                        ThucHienDangKy();
                        bloopMain = false;
                    }
                    else if(y == 15){

                    }
                    else if(y == 17){
                        
                    }
                    else if(y == 19){
                        system("cls");
                        for( int i = 0; i < 10; i++ ){
                            gotoxy(20 + i, 10);
                            setTextColor(160, " ");
                            Sleep(120);
                        }
                        bloopMain = false;
                        loop = false;
                    }
                    break;
                }
            }
        }
        //
    }
}

void NguoiDung::KhungXuLiLuaChonDangNhapDangKy(){
    gotoxy(37,9);
    Nocursortype(FALSE);
    for( int i = 0; i <= 38; i++ ){
        gotoxy(37 + i, 9);
        setTextColor(15, "_");
    }
    for( int i = 0; i <= 38; i++ ){
        gotoxy(37 + i, 20);
        setTextColor(15, "_");
    }
    Nocursortype(FALSE);
}

void NguoiDung::KhungNguoiDung(){
    gotoxy(70,5);
    setTextColor(10, "NGƯỜI DÙNG"); 
    gotoxy(70,7);
    setTextColor(15, "Tên người dùng: "); 
    gotoxy(86,7); 
    setTextColor(15, getTenNguoiDung()); 
    gotoxy(70,9);
    setTextColor(15, "Tên tài khoản: "); 
    gotoxy(85,9);
    setTextColor(15, getTaiKhoan()); 
    gotoxy(70,11);
    setTextColor(15, "Mật khẩu: "); 
    gotoxy(80,11);
    setTextColor(15, AnMatKhau(getMatKhau())); 
    gotoxy(70,13);
    setTextColor(15, "Trạng thái: "); 
    gotoxy(82,13);
    if(getCheckAdmin()){
        setTextColor(15, "Quản lí");
    }
    else{
        setTextColor(15, "Thành viên");
    }
}   
