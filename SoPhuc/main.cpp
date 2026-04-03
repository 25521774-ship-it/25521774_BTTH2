#include <iostream>
#include "SoPhuc.h"
using namespace std;

int main() {
    SoPhuc a, b, tong, hieu, tich, thuong;

    cout << "Nhap so phuc A:\n";
    a.Nhap();

    cout << "\nNhap so phuc B:\n";
    b.Nhap();

    cout << "\nA = ";
    a.Xuat();

    cout << "\nB = ";
    b.Xuat();

    tong = a.Tong(b);
    hieu = a.Hieu(b);
    tich = a.Tich(b);
    thuong = a.Thuong(b);

    cout << "\n\nTong: ";
    tong.Xuat();

    cout << "\nHieu: ";
    hieu.Xuat();   // <-- thiếu dấu ; ở đây, mình đã sửa

    cout << "\nTich: ";
    tich.Xuat();

    cout << "\nThuong: ";
    thuong.Xuat();

    return 0;
}
