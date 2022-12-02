#ifndef PBL2_DATABASE_H
#define PBL2_DATABASE_H

// Type
#include "Type/Phim.h"
#include "../Utils/List.h"

class Database {
private:
    List<Phim> dsPhim;
    List<Phim> ds;
public:
    // Phim
    List<Phim>& GetDSPhim();
    void AddPhim(Phim phim);
    void DelPhim(int id);
    Phim& SearchPhim(string ten);
};
#endif //PBL2_DATABASE_H
