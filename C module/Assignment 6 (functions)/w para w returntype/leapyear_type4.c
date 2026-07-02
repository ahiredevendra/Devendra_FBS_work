int leapYear(int);
void main()
{
	
	int year;
	
	printf("Enter Year : ");
	scanf("%d",&year);
	
	int a = leapYear(year);
	
	if(a==1)
	{
		printf("Year is a leap year");
	}
	else if(a==0){
		
		printf("Year is not a leap year");
	}
}
int leapYear(int x)
{
	
	if(x%4==0 && x%100!=0 || x%400==0)
	{
		return 1;
	}
	else{
		
		return 0;
	}
}