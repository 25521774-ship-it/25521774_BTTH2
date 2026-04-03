#include <iostream>
#include <GioPhutGiay.h>
using namespace std;

int main()
{
    GioPhutGiay A;
    cout<<"Nhap thoi gian: ";
    A.Nhap();

    cout<<"Thoi gian ban dau: ";
    A.Xuat();

    A.TinhCongThemMotGiay();

    cout<<"Sau khi cong them mot giay: ";
    A.Xuat();

    return 0;
}



