#include<bits/stdc++.h>
using namespace std;
class sophuc{
	private:
		float thuc;
		float ao;
	public:
	sophuc(){}
	sophuc(float a,float b)
	{	thuc=a;  	ao=b; 	}
friend istream &operator>>(istream &is,sophuc& p) //xay dung ham nhap =toantu
		{		is>>p.thuc>>p.ao;   	return is;		}
friend ostream &operator<<(ostream &os,sophuc& p) //xay dung ham xuat =toantu
		{	os<<p.thuc<<"+"<<p.ao;    return os;	    }
	void nhap(){  cout<<"\nnhap: ";	cin>>thuc>>ao;	}
	void xuat(){   cout<<thuc<<"+"<<ao<<"i";  }
	float operator!() {   	return thuc*thuc+ao*ao;  	}
	sophuc operator+(sophuc& s)
	{	   sophuc t; t.thuc=thuc +s.thuc; t.ao=ao +s.ao; return t;  	}
	
};
int main()
{
   sophuc s2,s1(7,8),s3,tong;
   s2.nhap();
   cin>>s3;
   float s;
    s=!s1+!s2;
   cout<<"\nso phuc 1:";
   s1.xuat();
   cout<<"\nso phuc 2:";
    s2.xuat();
     cout<<"\nso phuc 3:";
    cout<<s3;
    s=!s1+!s2;
    tong=s2+s3;
cout<<"\ntong binh phuong cua phan thuc va ao la:"<<s;
    cout<<"\n tong 2 so phuc la:"<<tong;
}

