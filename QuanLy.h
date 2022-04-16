#ifndef QUANLY_H
#define QUANLY_H

#include "TheMuon.h"
#include <list>
class QuanLy
{
    // thuoc tinh
         list <TheMuon> ds;
         TheMuon theMuon;
public:
        // phuong thuc
        // ham khoi tao khong doi so
         QuanLy();

        // ham them the muon vao danh sach
         void themTheMuon(TheMuon theMuon);

        // ham nhap vao danh sach
         void nhapDanhSach();

        // ham hien thi danh sach
         void xoaTheoMaPhieuMuon(int maPhieuMuon);

};

#endif // QUANLY_H
