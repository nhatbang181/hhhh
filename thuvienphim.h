#include <string>
using namespace std;
class date {
    protected:
    int ngay;
    int thang;  
    int nam;
    int ngaykhoichieu;
    int thangkhoichieu;
    int namkhoichieu;
    public:
    date();
    date(int,int,int);
    ~date();
    int getngay();
    int getthang();
    int getnam();
    int getngaykhoichieu();
    int getthangkhoichieu();
    int getnamkhoichieu();
    date setdate();
    void xuat();
    void xuathankhoichieu();
};
class phim {
private:
string tenphim;
int giave;
string daodien;
string theloai;
date khoichieu;
int thoiluong;
string ngonngu;
string gioithieuphim;
string age;
public:
phim ();
~phim();
string gettenphim();
int getgiave();
string getdaodien();
string gettheloai();
date getkhoichieu();
int getthoiluong();
string getngonngu();
string getgioithieuphim();
string getage();
void settenphim();
void setgiave();
void setdaodien();
void settheloai();
void setkhoichieu();
void setthoiluong();
void setngonngu();
void setgioithieuphim();
void setage();
};
