#include <stdio.h>
int main()
{
	int a,b,temp;
	printf("enter the value of varible a:");
	scanf("%d",&a);
	printf("enter the value of varible b:");
	scanf("%d",&b);
	printf("before swapping: a = %d, b = %D\n", a, b);
	temp =a;
	a =b;
	b =temp;
	printf("after swapping: a = %d, b = %D\n", a, b); 
	return 0;
}
