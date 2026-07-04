void CountFact(int);
void main()
{
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	
	CountFact(n);
}
void CountFact(int no)
{
	
	int i = 1;
	int fact = 1;
	
	while(no>=i)
	{
		fact = fact*i;
		i++;
	}
	printf("Factorial is : %d",fact);
}