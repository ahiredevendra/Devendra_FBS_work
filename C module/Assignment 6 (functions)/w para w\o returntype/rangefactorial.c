void FactorialRange(int);
void main()
{
	int no;
	printf("Enter number : ");
	scanf("%d",&no);
	
	FactorialRange(no);
}
void FactorialRange(int n)
{
	int i,j,fact;
	
	for(i=1; i<=n; i++)
	{
		fact = 1;
		for(j=1; j<=i; j++)
		{
		fact = fact*j;
		}
		
		printf("\nFactorial of %d = %d ",i,fact);
	}
}