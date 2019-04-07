#include <stdio.h>
int main()
{
	float a,b,c,y,z,p,q;
	printf("enter time (ns) to service page fault (non modified)");
	scanf("%f",&b);
	printf("enter time (ns) to service page fault (modified)");
	scanf("%f",&a);
	printf("enter memory access time (ns) : ");
	scanf("%f",&c);
	printf("enter effective access time: ");
	scanf("%f",&y);
	printf("enter page replace modified % ");
	scanf("%f",&z);
	z= z/100;
	q = 1-z;
	p=(y-c)/((z*a)+(q*b)-(c));
//	p=(y-c)/((-c)+(z*a)+(q*b));
//	p=(y-c)/(((z*a)+(1-z)*b)+c);
	printf("%f",p);
}
