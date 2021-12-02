#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int D,M,Y,i;
	printf("nhap ngay : ");
	scanf("%d",&D);
	printf("nhap thang : ");
	scanf("%d",&M);
	printf("nhap nam : ");
	scanf("%d",&Y);
	if(M<3)
	{
		M+=12;
		Y-=1;
	}
	i=(D+2*M+3*(M+1)/5 +Y +Y/4 -Y/100 + Y/400) %7;
	switch(i)
	{
		case 0:printf("T2");break;
		case 1:printf("T3");break;
		case 2:printf("T4");break;
		case 3:printf("T5");break;
		case 4:printf("T6");break;
		case 5:printf("T7");break;
		case 6:printf("CN");break;
	}
}
