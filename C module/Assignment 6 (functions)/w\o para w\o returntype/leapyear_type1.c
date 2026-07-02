void leapYear();
void main()
{
	leapYear();
}
void leapYear()
{
	int year;
	
	printf("Enter Year : ");
	scanf("%d",&year);
	
	if(year%4==0 && year%100!=0 || year%400==0)
	{
		printf("Year is a leap year");
	}
	else{
		
		printf("Year is not a leap year");
	}
}