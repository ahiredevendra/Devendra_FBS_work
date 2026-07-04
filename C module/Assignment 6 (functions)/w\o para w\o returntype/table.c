void Table();
void main()
{
	Table();	
}
void Table()
{
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	int i = n;
	
	while(i<=n*10)
	{
		printf("%d ",i);
		i = i+n;
	}
}