//3.display student  roll number name and address using structure
#include<stdio.h>
struct name
{
	int rollnumber;
	char name;
	char address;
	
};
main()
{
	struct name i;
	i.rollnumber;
	i.name;
	i.address;
	
	int r;
	for(r=1;r<=5;r++)
	{

	printf("enter rollnumber:");
	scanf(" %d",&i.rollnumber);
	printf("enter name:");
	scanf("%s",&i.name);
	printf("enter address:");
	scanf("%s",&i.address);

	printf("rollnumber: %d\n",i.rollnumber);
	printf("name: %c\n",i.name);
	printf("address: %c\n\n",i.address);
}
}

