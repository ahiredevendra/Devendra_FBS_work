void leapYear(int);
void main()
{
	
	int year;
	
	printf("Enter Year : ");
	scanf("%d",&year);
	
	leapYear(year);
}
void leapYear(int x)
{
	
	if(x%4==0 && x%100!=0 || x%400==0)
	{
		printf("Year is a leap year");
	}
	else{
		
		printf("Year is not a leap year");
	}
}