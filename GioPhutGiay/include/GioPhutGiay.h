#ifndef GIOPHUTGIAY_H
#define GIOPHUTGIAY_H


class GioPhutGiay
{
    public:
        GioPhutGiay();
        virtual ~GioPhutGiay();
        void Nhap();
        void Xuat();
        void TinhCongThemMotGiay();

    protected:

    private:
        int iGio;
        int iPhut;
        int iGiay;
};

#endif // GIOPHUTGIAY_H


