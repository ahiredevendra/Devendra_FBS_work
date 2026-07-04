void range();
void main()
{
	range();
}
void range()
{
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	int i = 1;
	
	while(i<=n)
	{
		printf("%d ",i);
		i++;
	}
}