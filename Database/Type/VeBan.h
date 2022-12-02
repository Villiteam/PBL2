#ifndef PBL2_VEBAN_H
#define PBL2_VEBAN_H

#include "SuatChieu.h"
#include "GheNgoi.h"

class VeBan {
private:
    int id;
    DateTime ngayBan;
    int giaVe;
    int idSuatChieu;
    int idGhe;
public:
    VeBan();
};
#endif //PBL2_VEBAN_H
