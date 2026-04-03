#include "GioPhutGiay.h"
#include <iostream>
using namespace std;
GioPhutGiay::GioPhutGiay()
{
    //ctor
}

GioPhutGiay::~GioPhutGiay()
{
    //dtor
}
void GioPhutGiay::Nhap()
{
    bool hopLe = false;
    while (!hopLe) {
        cin >> iGio >> iPhut >> iGiay;

        // Kiem tra dieu kien hop le
        if (iGio >= 0 && iGio < 24 &&
            iPhut >= 0 && iPhut < 60 &&
            iGiay >= 0 && iGiay < 60) {
            hopLe = true;
        } else {
            cout << "Du lieu khong hop le! Vui long nhap lai." << endl;
            cout << "Nhap thoi gian: ";
        }
    }
}
void GioPhutGiay::Xuat()
{
    cout<<iGio<<":"<<iPhut<<":"<<iGiay<<endl;
}
void GioPhutGiay::TinhCongThemMotGiay() {
    iGiay++;

    if (iGiay == 60) {
        iGiay = 0;
        iPhut++;

        if (iPhut == 60) {
            iPhut = 0;
            iGio++;

            if (iGio == 24) {
                iGio = 0;
            }
        }
    }
}
