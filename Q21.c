#include <stdio.h>
int main()
{
	float a,b,c,y,z,p,q;
	//b is the time to service page fault (non modified)
	//a is the time to service page fault (modified)
	//c is the memory access time
	//y is the effective access time
	//z is the page replace modified percentage
	//q is ~ of z/100
	printf("enter time (ns) to service page fault (non modified): ");
	scanf("%f",&b); 
	printf("enter time (ns) to service page fault (modified): ");
	scanf("%f",&a);
	printf("enter memory access time (ns) : ");
	scanf("%f",&c);
	printf("enter effective access time: ");
	scanf("%f",&y);
	printf("enter page replace modified %: ");
	scanf("%f",&z);
	
	
	z= z/100;
	q = 1-z;
	p=(y-c)/((z*a)+(q*b)-(c));
	if (p< 200)
	{
	printf("maximum effective access is : %f",p);
	}
	else{
		printf("maximum effective access is more than 200: %f",p);
	}
}