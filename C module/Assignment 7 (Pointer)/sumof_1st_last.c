void Sumof_1st_last(int*);
void main()
{
	int no;
	printf("Enter number : ");
	scanf("%d",&no);
	
	Sumof_1st_last(&no);
}
void Sumof_1st_last(int* n)
{
	
	int firstdigit = 0;
	int sum, lastdigit;
	
	lastdigit = *n%10;
	
	while(*n>=10)
	{
		*n = *n/10;
	}
	
	firstdigit = *n;
	
	sum = firstdigit + lastdigit;
	
	printf("Sum of first and last digit is = %d",sum);
}