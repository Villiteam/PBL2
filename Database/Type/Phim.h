#ifndef PBL2_PHIM_H
#define PBL2_PHIM_H

#include <string>

using namespace std;

class Phim {
private:
    int id;
    string ten;
    int thoiLuong;
    int gioiHangDoTuoi;
    string theLoai;
    string ngonNgu;
    string dienVien;
    string quocGia;
    string nhaSanXuat;
    string tomTac;
    bool trangThai;
    static int autoIncrease;
    friend class Database;
public:
    Phim();
    int GetId();
    void SetTen(string ten);
    string GetTen();
    void SetThoiLuong(int thoiLuong);
};
#endif //PBL2_PHIM_H
