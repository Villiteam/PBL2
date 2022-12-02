#include <iostream>
#include "Database.h"

List<Phim> &Database::GetDSPhim() {
    return this->dsPhim;
}

void Database::AddPhim(Phim phim) {
    cout << Phim::autoIncrease;
    phim.id = Phim::autoIncrease++;
    this->dsPhim.Insert(phim);
}

void Database::DelPhim(int id) {
    for (auto* i = this->dsPhim.GetFirst(); i!= this->dsPhim.GetLast(); i=i->GetNext()) {
        if (i->GetData().GetId() == id) {
            this->dsPhim.Delete(i);
        }
    }
}

Phim &Database::SearchPhim(string ten) {
    for (auto* i = this->dsPhim.GetFirst(); i!= this->dsPhim.GetLast(); i=i->GetNext()) {
        if (i->GetData().GetTen() == ten) {
            return i->GetData();
        }
    }
}
