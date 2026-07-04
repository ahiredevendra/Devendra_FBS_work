int Sumof_1st_last(int);
void main()
{
	int no;
	printf("Enter number : ");
	scanf("%d",&no);
	
	int x = Sumof_1st_last(no);
	
	printf("Sum of first and last digit is = %d",x);
}
int Sumof_1st_last(int n)
{
	
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