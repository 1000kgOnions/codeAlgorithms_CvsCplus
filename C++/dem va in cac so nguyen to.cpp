#include <iostream>
#include <math.h>
using namespace std;
int nguyento(int k)
{    int d;
	  for(int i=2;i<=sqrt(k);i++)
	   
	   if (k%i==0)
	   {return 0; }
	   d++;
	 return 1;
}
int main()
{
  int n,i,d;
//  printf("nhap so tu nhien n= ");
//  scanf ("%d",&n);
  cout<<"cac so nguyen to lan luot la:";
  for(i=2;i<100;i++)
   if(nguyento(i)==1)
   { d++;
    cout<<i<<" ";
   }
   cout<<"\n Co "<<d<<" so nguyen to trong day";
//     break;
//    if (i>sqrt(n))
//	printf("la so nguyen to");
//	else
//	printf("khong la so nguyen to");
    
}

