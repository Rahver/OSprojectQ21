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
	scanf("%f",&b); //taking input for service page fault (non modified)
	printf("enter time (ns) to service page fault (modified): ");
	scanf("%f",&a); //taking input for service page fault (modified)
	printf("enter memory access time (ns) : ");
	scanf("%f",&c); //taking values ofr memory access time
	printf("enter effective access time: ");
	scanf("%f",&y); //taking values for effective access time
	printf("enter page replace modified %: ");
	scanf("%f",&z); //taking values for page replace modified %
	
	void calc() //this is the function to calculate the maximum effective access time
	{
	z= z/100; //here im convertig % vallue in decimal float values
	q = 1-z; //to calculte the coplement of z(in float values)
	p=(y-c)/((z*a)+(q*b)-(c)); //this is the formulate to calculate the maximum effective access time
	if (p< 200) //boundary condition to check for errors and respond accordingly
	{
	printf("maximum effective access is : %f",p);
	}
	else{
		printf("maximum effective access is more than 200: %f",p);
	}
}
calc(); //here i calling the calc functon whic will calculte the maximum effective access time and will print it on the screen
}
