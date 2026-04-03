#ifndef NGAYTHANGNAM_H
#define NGAYTHANGNAM_H


class NgayThangNam
{
    public:
        NgayThangNam();
        virtual ~NgayThangNam();
        void Nhap();
        void NgayThangNamTiepTheo();
        bool Check();
        void Xuat();


    private:
        int iNgay, iThang, iNam;

};

#endif // NGAYTHANGNAM_H
