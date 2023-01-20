//8.given number is divisible by 3&5 both or not using udf.
#include<stdio.h>
void div(int a)
{     
int div;
	if(a%3==0||a%5==0)
	{
		printf("value is divisible by 3&5");
	}
	else
	{
		printf("value is not divisible by 3&5");
	}
}
main()
{
	int a;
	printf("enter any value");
	scanf("%d",&a);
	div(a);
	
	
}


