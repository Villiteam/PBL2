cmake_minimum_required(VERSION 3.23)
project(PBL2)

set(CMAKE_CXX_STANDARD 20)

set(PROJECT_HEADERS
        Utils/List.h
        Database/Type/Phim.h
        Database/Type/PhongChieu.h
        Database/Type/VeBan.h
        Database/Type/HoaDon.h
        Database/Database.h
        Exception/Exception.h
        Utils/Date.h
        Database/Type/SuatChieu.h
        Utils/Time.h
        Database/Type/GheNgoi.h
        Database/Type/KhanhHang.h
        Database/Type/NhanVien.h
        Utils/DateTime.h
        Utils/Node.h)
set(PROJECT_SOURCES
        main.cpp
        Database/Database.cpp
        Exception/Exception.cpp
        Database/Type/Phim.cpp)

add_executable(PBL2 ${PROJECT_SOURCES} ${PROJECT_HEADERS})
