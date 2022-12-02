#include "Phim.h"
#include "../../Exception/Exception.h"

int Phim::autoIncrease = 0;

Phim::Phim() {

}

int Phim::GetId() {
    return this->id;
}

void Phim::SetTen(string ten) {
    this->ten = ten;
}

string Phim::GetTen() {
    return this->ten;
}


void Phim::SetThoiLuong(int thoiLuong) {
    if(thoiLuong<0)
        throw Exception("Phim", "Do dai khong dung");
    this->thoiLuong = thoiLuong;
}
