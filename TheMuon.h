#ifndef THEMUON_H
#define THEMUON_H

#include "SinhVien.h"

class TheMuon: public SinhVien
{
    // thuoc tinh
         int maPhieuMuon;
         string ngayMuon;
         string hanTra;
         string soHieu;
public:
        // phuong thuc
        // ham khoi tao khong doi so
         TheMuon();

        // ham khoi tao co doi so
         TheMuon(int maPhieuMuon, string ngayMuon, string soHieu);

        // ham nhap
         void nhapThongTin();

        // ham hien thi
         void hienThiThongTin();

        // ham lay ra thong tin ve han tra
         int getMaPhieuMuon();
};

#endif // THEMUON_H
