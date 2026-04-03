#ifndef SOPHUC_H
#define SOPHUC_H
#include <iostream>
class SoPhuc
{
    public:
        SoPhuc();
        virtual ~SoPhuc();
        void Nhap();
        void Xuat();
        SoPhuc Tong(SoPhuc b);
        SoPhuc Hieu(SoPhuc b);
        SoPhuc Tich(SoPhuc b);
        SoPhuc Thuong(SoPhuc b);

    protected:

    private:
        float iThuc;
        float iAo;
};

#endif // SOPHUC_H
