#ifndef SINHVIEN_H
#define SINHVIEN_H

#include <iostream>
#include <string.h>
using namespace std;

class SinhVien
{
protected:
    // thuoc tinh
         string hoTen;
         string maSV;
         string ngaySinh;
         string lop;
public:
        // phuong thuc
        // ham khoi tao khong doi so
         SinhVien();

        // ham khoi tao co doi so
         SinhVien(string hoTen, string maSV, string ngaySinh, string lop);

        // ham nhap
         void nhapThongTin();

        // ham hien thi
         void hienThiThongTin();
};

#endif // SINHVIEN_H
