#include "stdio.h"
#include "stdlib.h"
#include "math.h"
typedef struct diem
{ float x, y;
} Diem;
void doctep(char *tentep, Diem *a, int *n)
{
FILE *f;
int i;

f=fopen(tentep,"r");
if (!f) // f==NULL
{
printf("Kiem tra lai tep du lieu dau vao");
exit(1);
}
fscanf(f,"%d",n);

for(i=1;i<=*n;i++) fscanf(f,"%f%f", &a[i].x, &a[i].y);
fclose(f);
}
void ghitep(char *tentep, Diem *a, int n)
{
FILE *f;
int i;
f=fopen(tentep,"w");
if (!f) // f==NULL
{
printf("Kiem tra lai tep du lieu ghi ra");
exit(1);
}
fprintf(f,"%d\n",n);
for(i=1;i<=n;i++) fprintf(f," %f %f \n ", a[i].x , a[i].y);

fclose(f);
}
void timdoanmax(Diem *a, int n)
{
float max =0, dij;
int i, j, dd, dc;
for (i=1;i<n;i++)
for(j=1+i;j<=n;j++)
{
dij = sqrt(pow(a[i].x-a[j].x,2) + pow(a[i].y -a[j].y ,2))	; 
if (dij > max)
{

max = dij; dd=i; dc=j;
}
} 
printf("\n Doan dai nhat la M%d-M%d = %f", dd, dc, max);
}
main()
{
int n;
Diem d[100];
doctep("diem.txt",d, &n);
printf("Du lieu doc tu tep:\n");
printf("n=%d\n", n);
for(int i=1;i<=n;i++) printf(" M%d(%.1f,%.1f)\n",i,d[i].x, d[i].y);
timdoanmax(d, n);
printf("\n Khoang cach tu cac diem den truc hoanh:");
for(int i=1;i<=n;i++) printf(" %.1f", fabs(d[i].y));
}
