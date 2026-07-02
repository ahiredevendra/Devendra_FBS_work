int result();
void main()
{
	int x = result();
	
	if(x==1)
		printf("Distinction");
	else if(x==2)
		printf("First Class");
	else if(x==3)
		printf("Second Class");
	else if(x==4)
		printf("Pass Class");
	else
		printf("Fail");
}
int result()
{
	int marks;
	
	printf("Enter marks : ");
	scanf("%d",&marks);
	
	if(marks>=75)
		return 1;
	else if(marks>=65)
		return 2;
	else if(marks>=55)
		return 3;
	else if(marks>=40)
		return 4;
	else
		return 5;
					
}