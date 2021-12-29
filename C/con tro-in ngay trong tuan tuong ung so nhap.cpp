#include<stdio.h>
main()
{
	char *p,n;
	p=&n;
	printf("nhap so: ");
	scanf("%c",p);
	switch (*p)
	{
	 case 49:   printf("chu nhat");
	 break;
	 case 50:   printf("thu hai");
	 break;
	 case 51:   printf("thu ba");
	 break;
	 case 52:   printf("thu tu");
	 break;
	 case 53:   printf("thu nam");
	 break;
	 case 54:   printf("thu sau");
	 break;
	 case 55:   printf("thu bay");
	 break;
	 default:  printf("Ban da nhap mot so khac\n");
     break;
	}
	return 0;
}
