#include "SinhVien.h"

SinhVien::SinhVien()
{

}

// ham khoi tao co doi so
SinhVien::SinhVien(string hoTen, string maSV, string ngaySinh, string lop) {
    this->hoTen = hoTen;
    this->maSV = maSV;
    this->ngaySinh = ngaySinh;
    this->lop = lop;
}

// ham nhap
void SinhVien::nhapThongTin() {
    cout << "\tNhap ho ten: "; getline(cin, hoTen);
    cout << "\tNhap ma sinh vien: "; getline(cin, maSV);
    fflush(stdin);
    cout << "\tNhap ngay sinh: "; getline(cin, ngaySinh);
    fflush(stdin);
    cout << "\tNhap lop: "; getline(cin, lop);
    fflush(stdin);

}

// ham hien thi
void SinhVien::hienThiThongTin() {
     cout << "\tHo ten: " << hoTen << endl;
     cout << "\tNgay sinh: " << ngaySinh << endl;
     cout << "\tMa sinh vien: " << maSV << endl;
     cout << "\tLop: " << lop << endl;

}
