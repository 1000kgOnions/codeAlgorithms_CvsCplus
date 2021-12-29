#include<bits/stdc++.h>
using namespace std;
class Diem
{
	private:
		float x,y;
		public:
			Diem(){};
			Diem(float x1,float y1){
				float x=x1;
				float y=y1;
			}
		friend istream& operator>>(istream& is,Diem &d)
		{
			is>>d.x>>d.y;
			return is;
		}
		friend ostream& operator<<(ostream& os,Diem &d)
		{
			os<<"["<<d.x<<","<<d.y<<"]"<<endl;
			return os;
		}
		float kc()
		{
			return sqrt(x*x+y*y);
		}
		float diemy()
		{
		  return y;
		}
		
		
};
main()
{
  Diem *a;
  int n;
  cout<<"Nhap so luong diem:";
  cin>>n;
  a=new Diem[n+1];
  cout<<"nhap toa do cac diem:\n";
  for(int i=1;i<=n;i++)
  {
  	cin>>a[i];
  }
  cout<<"\ntoa do cac diem la:";
   for(int i=1;i<=n;i++)
  {
  	cout<<a[i];
  }
  cout<<"ncac diem nam phia tren truc hoanh:\n";
   for(int i=1;i<=n;i++)
   {
   	if(a[i].diemy() >0)
   	cout<<a[i];
   }
   float max=a[1].kc();
   for(int i=1;i<=n;i++)
   {
   	if(a[i].kc()>max)
   	max=a[i].kc();
   }
   cout<<"\ncac diem o xa goc toa do nhat la:\n";
   for(int i=1;i<=n;i++)	
   if(a[i].kc()==max)
   {
   	cout<<a[i];
   }
   
   
}

