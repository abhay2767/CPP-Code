#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Number from 1 to 5: ");
	scanf("%d",&n);
	if(n == 1)
	{
		printf("The Number is 1.");
	}
	else if(n == 2){
		printf("The Number is 2.");
	}else if(n == 3)
	{
		printf("The Number is 3.");
	}else if(n == 4)
	{
		printf("The Number is 4.");
	}
	else if(n == 5)
	{
		printf("The Number is 5.");
	}else
	{
		printf("The Number is Not valid,So please enter the number from 1 to 5");
	}return 0;
}
