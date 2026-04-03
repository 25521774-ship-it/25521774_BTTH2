#include "NgayThangNam.h"
#include <iostream>
using namespace std;

int main()
{
    NgayThangNam a;

    a.Nhap();
    if (a.Check())
    {
        a.NgayThangNamTiepTheo();
        a.Xuat();
    }
    else cout<<"Khong Hop Le!";

    return 0;
}
