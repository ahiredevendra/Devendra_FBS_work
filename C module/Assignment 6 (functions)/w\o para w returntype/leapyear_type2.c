int leapYear();
void main()
{
	int x = leapYear();
	
	if(x==1)
	{
		printf("Year is a leap year");
	}
	else if(x==0)
	{
		printf("Year is not a leap year");
	}
}
int leapYear()
{
	int year;
	
	printf("Enter Year : ");
	scanf("%d",&year);
	
	if(year%4==0 && year%100!=0 || year%400==0)
	{
		return 1;
	}
	else{
		
		return 0;
	}
}