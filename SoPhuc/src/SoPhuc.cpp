#include "SoPhuc.h"
#include <iostream>
using namespace std;

SoPhuc::SoPhuc() {
    iThuc = 0;
    iAo = 0;
}

SoPhuc::~SoPhuc() {}

// Nhập
void SoPhuc::Nhap() {
    cout << "Nhap phan thuc: ";
    cin >> iThuc;
    cout << "Nhap phan ao: ";
    cin >> iAo;
}

// Xuất
void SoPhuc::Xuat() {
    cout << iThuc;
    if (iAo >= 0)
        cout << " + " << iAo << "i";
    else
        cout << " - " << -iAo << "i";
}

// Tổng
SoPhuc SoPhuc::Tong(SoPhuc b) {
    SoPhuc kq;
    kq.iThuc = iThuc + b.iThuc;
    kq.iAo = iAo + b.iAo;
    return kq;
}

// Hiệu
SoPhuc SoPhuc::Hieu(SoPhuc b) {
    SoPhuc kq;
    kq.iThuc = iThuc - b.iThuc;
    kq.iAo = iAo - b.iAo;
    return kq;
}

// Tích
SoPhuc SoPhuc::Tich(SoPhuc b) {
    SoPhuc kq;
    kq.iThuc = iThuc * b.iThuc - iAo * b.iAo;
    kq.iAo   = iThuc * b.iAo + iAo * b.iThuc;
    return kq;
}

// Thương
SoPhuc SoPhuc::Thuong(SoPhuc b) {
    SoPhuc kq;
    float mau = b.iThuc * b.iThuc + b.iAo * b.iAo;

    kq.iThuc = (iThuc * b.iThuc + iAo * b.iAo) / mau;
    kq.iAo   = (iAo * b.iThuc - iThuc * b.iAo) / mau;

    return kq;
}
