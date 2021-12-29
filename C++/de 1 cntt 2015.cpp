// 1.	X�y d?ng l?p M�n h?c :
// -	Thu?c t�nh: m� m�n, t�n m�n, s? t�n ch?
// -	Phuong th?c:Nh?p, xu?t, v�c phuong th?c kh�c
// 2.	X�y d?ng l?p �KHP (�ang k� h?c ph?n) c?a sinh vi�n g?m c� thu?c t�nh: m� sinh vi�n, t�n sinh vi�n, m?ng check d? luu tr? th�ng tin c�c m�n h?c sinh vi�n dang k� ho?c kh�ng( dang k� th� =1, kh�ng dang k� =0).
// 3.	Vi?t h�m main() th?c hi?n:
// -	Nh?p v�o m m�n h?c cho tru?c.
// -	Nh?p b?n dang k� h?c ph?n c?a n sinh vi�n.
// -	H�y cho bi?t m?i sinh vi�n d� dang k� bao nhi�u t�n ch?.
// -	Nh?p v�o m?t m�n v� th?ng k� s? sinh vi�n d� dang k� m�n h?c d� d?ng th?i in danh s�ch l?p cho m�n h?c.
#include<bits/stdc++.h>
using namespace std;
class Monhoc{
    protected:
    string mm,ten;
    int stc;
    public:
        void nhap(){
            cout<<"Nhap ma mon: "; cin>>mm;
            cout<<"Nhap ten mon: "; cin.ignore();getline(cin,ten);
            cout<<"So tin chi: "; cin>>stc;
        }
        void xuat(){
            cout<<"Ma mon: "<<mm<<endl;
            cout<<"Ten mon: "<<ten<<endl;
            cout<<"So tin chi: "<<stc<<endl;
        }
        string get(int i){return i==0?mm:ten;}
        int get(){return stc;}
};
class DKHP{
    string msv,tensv;
    vector<int> check;
    public:
        void nhap(Monhoc *a,int m){
            int c;
            cout<<"\n-----------\nNhap msv: "; cin>>msv;
            cout<<"Nhap ten sinh vien: "; cin.ignore();getline(cin,tensv);
            for(int i=0;i<m;i++) a[i].xuat(),
                cout<<"\nBan co dang ki mon nay khong? (1/0) --> ",
                cin>>c,check.push_back(c);
        }
        void xuat(){
            cout<<"Ma sinh vien: "<<msv<<endl;
            cout<<"Ten sinh vien: "<<tensv<<endl;
        }
        vector<int> get(){return check;}
        string get(int i){return i==0?msv:tensv;}
};
int main(){
    int m,t=0,ti=-1;cout<<"Nhap so mon hoc: ";cin>>m;
    Monhoc *a=new Monhoc[m];
    for(int i=0;i<m;i++) cout<<"\nMon thu "<<i+1<<": \n---------------\n",a[i].nhap();
    int n;cout<<"\n-------\nNhap so sinh vien: ";cin>>n;
    DKHP *b=new DKHP[n];
    for(int i=0;i<n;i++) {
        cout<<"\n----------\nSinh vien thu "<<i+1<<": \n";b[i].nhap(a,m);}
    for(int i=0;i<n;i++){
        t=0;
        cout<<"\n------\nSinh vien -"<<b[i].get(0)<<"- da dang ky: ";
        for(int j=0;j<m;j++)
            if(b[i].get()[j]==1) t+=a[j].get();
        cout<<t<<" tin chi.\n";
    }
    string s; cout<<"\nNhap ma mon: "; cin>>s;
    for(int i=0;i<m;i++)
        if(a[i].get(0)==s){
            ti=i;
            break;
        }
    if(ti==-1){
        cout<<"Ma mon nay khong ton tai!";
        return 0;
    }
    t=0;
    cout<<"\n------\nLop: "; a[ti].xuat();
    cout<<"Danh sach lop: \n";
    for(int i=0;i<n;i++){
        if(b[i].get()[ti]==1) t++,b[i].xuat();
    }
    cout<<"Lop co "<<t<<" thanh vien.";
}
