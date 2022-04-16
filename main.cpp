#include "QuanLy.h"

int main(){

    QuanLy ql;
    int maPhieuMuon;

            ql.nhapDanhSach();
            cout << "Danh sach the muon" << endl;
            ql.hienThiDanhSach();
            cout << "Nhap ma phieu muon muon xoa: ";
            cin >> maPhieuMuon;
            ql.xoaTheoMaPhieuMuon(maPhieuMuon);

}
