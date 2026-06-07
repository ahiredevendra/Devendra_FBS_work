void main(){
	int year = 2005;
	
	if(year%4==0 && year%100!=0 || year%400==0)
	{
		printf("Year is a leap year");
	}
	else{
		
		printf("Year is not a leap year");
	}
}