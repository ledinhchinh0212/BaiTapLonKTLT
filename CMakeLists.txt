cmake_minimum_required(VERSION 3.0.0)
project(Reality VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(reality main.cpp GiaoDien.cpp GiaoDien.h GiaoDienDangKy.cpp GiaoDienDangKy.h GiaoDienDangNhap.cpp GiaoDienDangNhap.h
 NguoiDung.cpp NguoiDung.h QuyenSach.h)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
