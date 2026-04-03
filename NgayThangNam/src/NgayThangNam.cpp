#include "NgayThangNam.h"
#include <iostream>
using namespace std;

NgayThangNam::NgayThangNam()
{
    //ctor
    iNgay = iThang = iNam = 0;
}

NgayThangNam::~NgayThangNam()
{
    //dtor
}
int days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31}; // Tạo một mảng dùng chung bao gồm số ngày có trong tháng

void NgayThangNam::Nhap()
{
    cin>>iNgay>>iThang>>iNam;
}
bool NgayThangNam::Check()
{

    if ((iNam % 4 == 0 && iNam% 100 != 0) || iNam % 400 == 0) // Nếu năm nhuận thì tháng 2 có 29 ngày
        days[2] = 29;
    else days[2] = 28;

    if (iThang < 1 || iThang > 12 || iNgay < 1 || iNgay > days[iThang]) // Xét điều kiện hợp lệ của ngày, tháng
    {
        return false;
    }
    return true;
}
void NgayThangNam::NgayThangNamTiepTheo()
{
    if(!Check())
    {
        cout<<"Khong Hop Le";
        return;
    }
    iNgay++; // Tăng giá trị ngày

    if (iNgay> days[iThang]) // Kiểm tra nếu ngày sau khi tăng lớn hơn số ngày có trong tháng đó
    {
        iNgay = 1;
        iThang++;
        if (iThang> 12) // Nếu tháng > 12 thì qua năm
        {
            iThang= 1;
            iNam++;
        }
    }
}

    void NgayThangNam::Xuat()
    {
        cout<<iNgay<<"/"<<iThang<<"/"<<iNam<<endl;
    }


