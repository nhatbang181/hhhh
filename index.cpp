#include <string>
#include "thuvienphim.h"
#include <iostream>
using namespace std;

int date::getngay()
{
    return this->ngay;
}
int date::getthang()
{
    return this->thang;
}
int date::getnam()
{
    return this->nam;
}
date::date()
{
    ngay = 0;
    thang = 0;
    nam = 0;
    ngaykhoichieu = 0;
    thangkhoichieu = 0;
    namkhoichieu = 0;
}
date::date(int x, int y, int z)
{
    ngay = x;
    thang = y;
    nam = z;
    if (ngay >= 15 && thang == 2)
    {
        ngaykhoichieu = ngay + 14 - 28;
        thangkhoichieu = thang + 1;
        namkhoichieu = nam;
    }
    else if (ngay >= 18 && thang == 12)
    {
        ngaykhoichieu = ngay + 14 - 31;
        thangkhoichieu = 1;
        namkhoichieu = nam + 1;
    }
    else if (ngay >= 17 && (thang == 4 || thang == 6 || thang == 9 || thang == 11))
    {
        ngaykhoichieu = ngay + 14 - 30;
        thangkhoichieu = thang + 1;
        namkhoichieu = nam;
    }
    else
    {
        ngaykhoichieu = ngay + 14;
        thangkhoichieu = thang;
        namkhoichieu = nam;
    }
}

date date::setdate()
{
    cout << "Nhap ngay khoi chieu :";
    cin >> ngay;
    cout << "Nhap thang khoi chieu :";
    cin >> thang;
    cout << "Nhap nam khoi chieu :";
    cin >> nam;
    if (ngay >= 15 && thang == 2)
    {
        ngaykhoichieu = ngay + 14 - 28;
        thangkhoichieu = thang + 1;
        namkhoichieu = nam;
    }
    else if (ngay >= 18 && thang == 12)
    {
        ngaykhoichieu = ngay + 14 - 31;
        thangkhoichieu = 1;
        namkhoichieu = nam + 1;
    }
    else if (ngay >= 17 && (thang == 4 || thang == 6 || thang == 9 || thang == 11))
    {
        ngaykhoichieu = ngay + 14 - 30;
        thangkhoichieu = thang + 1;
        namkhoichieu = nam;
    }
    else
    {
        ngaykhoichieu = ngay + 14;
        thangkhoichieu = thang;
        namkhoichieu = nam;
    }
    return *this;
}
void date::xuat()
{
    cout << "Ngay khoi chieu : " << ngay << "/" << thang << "/" << nam << endl;
}
void date::xuathankhoichieu()
{
    cout << "Ngay khoi chieu : " << ngaykhoichieu << "/" << thangkhoichieu << "/" << namkhoichieu << endl;
}
phim::phim()
{
    tenphim = "A";
    giave = 0;
    daodien = "A";
    theloai = "A";

    thoiluong = 0;
    ngonngu = "A";
    gioithieuphim = "A";
    age = "A";
}
string phim::gettenphim()
{
 return tenphim;
}
int phim::getgiave() {
    return giave;
}
string phim::getdaodien(){
    return daodien;
}
string phim::gettheloai()
{
    return theloai;
}
date phim::getkhoichieu()
{
    return khoichieu;
}
int phim::getthoiluong()
{
    return thoiluong;
}
string phim::getngonngu()
{
    return ngonngu;
}
string phim::getgioithieuphim()
{
    return gioithieuphim;
}
string phim::getage()
{
    return getage;
}
    void phim::settenphim()
    {
        cout << "Nhap ten phim : ";
        getline(cin, tenphim);
    }
    void phim::setgiave()
    {
        cout << "Nhap gia ve: ";
        cin >> giave;
    }
    void phim::setdaodien()
    {
        cout << "Nhap ten dao dien : ";
        getline(cin, daodien);
    }
    void phim::settheloai()
    {
        cout << "Nhap ten the loai : ";
        getline(cin, theloai);
    }
    void phim::setkhoichieu()
    {
        this->khoichieu.setdate();
    }
    void phim::setthoiluong()
    {
        cin >> thoiluong;
    }
    void phim::setngonngu()
    {
        cout << "Nhap ten phim : ";
        getline(cin, ngonngu);
    }
    void phim::setgioithieuphim()
    {
        cout << "Nhap gioi thieu phim : ";
        getline(cin, gioithieuphim);
    }
    void phim::setage()
    {
        cout << "Nhap do tuoi : ";
        getline(cin, age);
    }
