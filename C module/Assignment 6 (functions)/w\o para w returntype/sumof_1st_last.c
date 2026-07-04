int Sumof_1st_last();
void main()
{
	int x = Sumof_1st_last();
	
	printf("Sum of first and last digit is = %d",x);
}
int Sumof_1st_last()
{
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	
	int firstdigit = 0;
	int sum, lastdigit;
	
	lastdigit = n%10;
	
	while(n>=10)
	{
		n = n/10;
	}
	
	firstdigit = n;
	
	sum = firstdigit + lastdigit;
	
	return sum;
}
