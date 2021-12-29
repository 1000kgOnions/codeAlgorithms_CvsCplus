// 1.	Xây d?ng l?p Môn h?c :
// -	Thu?c tính: mã môn, tên môn, s? tín ch?
// -	Phuong th?c:Nh?p, xu?t, vác phuong th?c khác
// 2.	Xây d?ng l?p ÐKHP (Ðang kí h?c ph?n) c?a sinh viên g?m có thu?c tính: mã sinh viên, tên sinh viên, m?ng check d? luu tr? thông tin các môn h?c sinh viên dang ký ho?c không( dang ký thì =1, không dang ký =0).
// 3.	Vi?t hàm main() th?c hi?n:
// -	Nh?p vào m môn h?c cho tru?c.
// -	Nh?p b?n dang ký h?c ph?n c?a n sinh viên.
// -	Hãy cho bi?t m?i sinh viên dã dang kí bao nhiêu tín ch?.
// -	Nh?p vào m?t môn và th?ng kê s? sinh viên dã dang kí môn h?c dó d?ng th?i in danh sách l?p cho môn h?c.
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
