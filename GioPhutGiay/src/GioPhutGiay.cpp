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
    cin>>iGio>>iPhut>>iGiay;
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
