//5.sum of first & last digit
#include<stdio.h>
main()
{
	int n,f,l,i,sum=0;
	printf("enter value:");
	scanf("%d",&n);
	l=n%10;

	f=n;
	while(f>10)
	{
		f=f/10;
	}
	printf("first number: %d\n",f);
      printf("last number: %d\n\n",l);
      sum=f+l;
      printf("sum of first &last digit: %d",sum);
}
