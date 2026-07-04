int CountFact();
void main()
{
	int x = CountFact();
	
	printf("Factorial is : %d",x);
}
int CountFact()
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
	
	return fact;
}
