#include <iostream
using namespace std;

class BenhNhan
{
protected:
    int MSBN;

public:
    virtual void nhap(istream &is)
    {
        is >> this->MSBN;
    }
    virtual void capNhatNgayXuatVien(int ngay);
    virtual bool getTrangThai()
    {
        return true;
    }
    virtual long tinhTien()
    {
        return 0;
    }
    virtual void capNhatVienPhi()
    {
    }
};
class BenhNhanNgoaiTru
{
private:
    long _vienPhi;

public:
    BenhNhanNgoaiTru(int id)
    {
        this->MSBN = id;
    }
    virtual void nhap(istream &is)
    {
        is >> this->_vienPhi;
    }
    long tinhTien()
    {
        return this->_vienPhi;
    }
    void capNhatVienPhi(long Tien)
    {
        this->_vienPhi += Tien;
    }
};
class BenhNhanNoiTru
{
private:
    int _loaiPhong; // a=1,b=2,c=3
    int _ngayBatDauNamVien;
    int _soNgayNamVien;
    bool _daXuatVien; // true: da, false: chua
    long _phiKhamBenhMoiNgay;

public:
    static long A;
    static long B;
    static long C;
    void nhap(istream &is)
    {
        is >> this->_phiKhamBenhMoiNgay;
        char c;
        is >> c;
        this->_loaiPhong = c - 64;
    }
    BenhNhanNoiTru(int MaSo, int ngay, long tien, char c)
    {
        this->MSBN = MaSo;
        this->_ngayBatDauNamVien = ngay;
        this->_phiKhamBenhMoiNgay = tien;
        this->_loaiPhong = c - 64;
        this->_daXuatVien = false;
    }
    void capNhatNgayXuatVien(int ngay)
    {
        this->_soNgayNamVien = ngay - this->_ngayBatDauNamVien;
        this->_daXuatVien = true;
    }
    long tinhTien()
    {
        if (this->_loaiPhong == 1)
        {
            return this->A * (this->_soNgayNamVien + this->_phiKhamBenhMoiNgay);
        }
        else if (this->_loaiPhong == 2)
        {
            return this->B * (this->_soNgayNamVien + this->_phiKhamBenhMoiNgay);
        }
        else if (this->_loaiPhong == 3)
        {
            return this->C * (this->_soNgayNamVien + this->_phiKhamBenhMoiNgay);
        }
        else
        {
            return 0;
        }
    }
};
long BenhNhanNoiTru::A = 1400000;
long BenhNhanNoiTru::B = 900000;
long BenhNhanNoiTru::C = 600000;

class DanhSachBenhNhan
{
    vector<BenhNhan *> _ds;

public:
    void nhap()
    {
        freopen("input.log", "rt", stdin);
        int ngay = 0;
        while (!cin.eof())
        {
            cin >> ngay;
            int MaSo = 0;
            cin >> MaSo;
            cin.ignore();
            cin.clear();
            string s = "";
            cin >> s;
            BenhNhan *p = NULL;
            if (s == "KB")
            {
                long Tien = 0;
                cin >> Tien;
                if (MaSo <= this->_ds.size() - 1)
                {
                    this->_ds[MaSo - 1]->capNhatVienPhi(Tien);
                }
                else
                {
                    p = new BenhNhanNgoaiTru(MaSo, Tien);
                    this->_ds.push_back(p);
                }
            }
            else if (s == "NV")
            {
                long Tien = 0;
                cin >> Tien;
                char c;
                cin >> c;
                p = new BenhNhanNoiTru(MaSo, ngay, Tien, c) this->_ds.push_back(p);
            }
            else if (s == "XV")
            {
                this->_ds[MaSo - 1]->capNhatNgayXuatVien(ngay);
            }
            else if (s == "TKVP")
            {
                for (int i = 0; i < this->_ds.size(); i++)
                {
                    if (dynamic_cast<BenhNhanNgoaiTru *>(this->_ds[i]) == NULL)
                    {
                        if (this->_ds[i]->getTrangThai() == false)
                        {
                            this->_ds[i]->capNhatNgayXuatVien(ngay);
                        }
                    }
                }
            }
        }
        freopen("CON", "rt", stdin);
    }
    long tinhTongTienVienPhi()
    {
        long sum = 0;
        for (int i = 0; i < this->_ds.size(); i++)
        {
            sum += this->_ds[i]->tinhTien();
        }
        return sum;
    }
};