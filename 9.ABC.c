/*9.A
    BC
    DEF
    GHIJ
    KLMNO*/
    
   #include<stdio.h>
main()
{
	char  i;
	char  j;
	char  a='A';

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",a);
			a++;
		}

			printf("\n");
	}
}
