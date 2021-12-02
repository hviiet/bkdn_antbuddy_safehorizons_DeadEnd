#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float a,b,c,d,x1,x2;
	printf("nhap a=");
	scanf("%f",&a);
	printf("nhap b=");
	scanf("%f",&b);
	printf("nhap c=");
	scanf("%f",&c);
	d=b*b-4*a*c;
	if(d>=0)
	{
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		if(x1>=0&&x2>=0)
			printf("%f\n%f\n%f\n%f",sqrt(x1),-sqrt(x1),sqrt(x2),-sqrt(x2));
		else if(x1>=0&&x2<0)
			printf("%f\n%f",sqrt(x1),-sqrt(x1));
		else if(x1<0&&x2>=0)
			printf("%f\n%f",sqrt(x2),-sqrt(x2));
		else
			printf("Phuong trinh vo nghiem");
	}
	else
	{
		printf("Phuong trinh vo nghiem");
	}
}
