int CountFact(int);
void main()
{
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	
	int x = CountFact(n);
	
	printf("Factorial is : %d",x);
}
int CountFact(int no)
{
	
	int i = 1;
	int fact = 1;
	
	while(no>=i)
	{
		fact = fact*i;
		i++;
	}
	
	return fact;
}