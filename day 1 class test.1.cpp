#include<stdio.h>
int main()
{
	int start,end,count=0;
	printf("enter the starting number:");
	scanf("%d",&start);
	printf("enter the end number:");
	scanf("%d",&end);
	for (int i=start;i <=end;i++) {
	if (i % 5  == 0){
	count++;
	}
}
  printf("the number of integers divisible by 5 is : %d,count");
  return 0;
}
