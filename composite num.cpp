#include<stdio.h>
int main()
{
	int arr[50],i,j,flag;
	for(i = 0;i<50;i++)
	{
		arr[i] = i+1;
	}
	printf("composite number between 1 to 50:");
	for(i = 0;i<50;i++)
	{ flag =0;
	for (j = 2;j<=arr[i]/2;j++){
	flag = 1;
	break;
}
}
if (flag == 1){
  printf("%d",arr[i]);
}
return 0;
	} 
