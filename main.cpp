#include <iostream>
#include <string>

#include "Database/Database.h"

#include "Database/Type/Phim.h"

using namespace std;

int main() {
    Database data;
    Phim phim;
    phim.SetTen("Harry Potter Part 1");
    phim.SetThoiLuong(170);
    data.AddPhim(phim);
    phim.SetTen("Harry Potter Part 2");
    phim.SetThoiLuong(185);
    data.AddPhim(phim);
    cout << data.GetDSPhim()[0].GetTen();
    cout << data.SearchPhim("Harry Potter Part 2").GetId();
    system("pause");
    return 0;
}
