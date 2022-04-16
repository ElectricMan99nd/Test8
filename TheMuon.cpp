#include "TheMuon.h"

TheMuon::TheMuon()
{

}

// ham khoi tao co doi so
TheMuon::TheMuon(int maPhieuMuon, string ngayMuon, string soHieu) {
    this->maPhieuMuon = maPhieuMuon;
    this->ngayMuon = ngayMuon;
    this->soHieu = soHieu;
}

// ham nhap
void TheMuon::nhapThongTin() {
    SinhVien::nhapThongTin();
    cout <<"\tNhap ma phieu muon: "; cin >> maPhieuMuon;
    fflush(stdin);
    cout << "\tNhap ngay muon: "; getline(cin, ngayMuon);
    cout << "\tNhap ngay tra: "; getline(cin, hanTra);
    cout << "\tNhap so hieu:  "; getline(cin, soHieu);
    fflush(stdin);

}

// ham hien thi
void TheMuon::hienThiThongTin() {
    SinhVien::hienThiThongTin();
    cout <<"\tMa phieu muon: " << maPhieuMuon << endl;
    cout <<"\tNgay muon: " << ngayMuon << endl;
    cout <<"\tNgay tra: " << hanTra << endl;
    cout <<"\tSo hieu: " << soHieu << endl;
}

// ham lay ra thong tin ve han tra
int TheMuon::getMaPhieuMuon() {
    return maPhieuMuon;
}
