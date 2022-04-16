#include "QuanLy.h"

QuanLy::QuanLy()
{

}

// ham them the muon vao danh sach
void QuanLy::themTheMuon(TheMuon theMuon) {
    ds.push_back(theMuon);
}

// ham nhap vao danh sach
void QuanLy::nhapDanhSach() {
     int soLuongTheMuon;
     cout << "Nhap vao so luong the muon: ";
     cin >> soLuongTheMuon;
     fflush(stdin);
     cout << "*****Nhap vao danh sach*****" << endl;
     for (int i = 0; i < soLuongTheMuon; i++) {
        cout << "The muon thu " << (i +1)  << ":" << endl;
         theMuon.nhapThongTin();
         themTheMuon(theMuon);
     }

}

// ham hien thi danh sach
void QuanLy::xoaTheoMaPhieuMuon(int maPhieuMuon) {
     int count = 0;
    for (TheMuon the : ds) {
        count++;
        if (the.getMaPhieuMuon() == maPhieuMuon) {
            auto itr = ds.begin();
                for (int i=1; i < count; i++ )
                    ++itr;
             ds.erase(itr);
             cout << "Da xoa tai lieu co ma: " << maPhieuMuon << endl;
         }
        }
    }
