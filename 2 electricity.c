//2.electricity bil
#include<stdio.h>
main()
{
	float unit,per,a,total;

	printf("enter unit:");
	scanf("%f",&unit);


	if(unit<=50)
		{
			a=unit*0.50;
		}
	else if(unit>50&&unit<=150)
		{
			a=(50*0.50)+((unit-50)*(0.75));
		}
	else if(unit>150&&unit<=250)
		{
			a=(50*0.50)+(100*0.75)+((unit-150)*(1.20));
		}
	else if(unit>250)
		{
			a=(50*0.50)+(100*0.75)+(100*1.20)+((unit-250)*(1.50));
		}

		per=unit*20/100;
		total=a+per;

		printf("electricity bill:%f",total);
}
