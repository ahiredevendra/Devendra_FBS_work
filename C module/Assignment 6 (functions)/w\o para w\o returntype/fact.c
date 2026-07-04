void CountFact();
void main()
{
	CountFact();
}
void CountFact()
{
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	
	int i = 1;
	int fact = 1;
	
	while(n>=i)
	{
		fact = fact*i;
		i++;
	}
	printf("Factorial is : %d",fact);
}