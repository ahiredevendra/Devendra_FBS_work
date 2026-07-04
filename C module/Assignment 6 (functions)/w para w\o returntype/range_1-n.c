void range(int);
void main()
{
	int no;
	printf("Enter number : ");
	scanf("%d",&no);
	
	range(no);
}
void range(int n)
{
	int i = 1;
	
	while(i<=n)
	{
		printf("%d ",i);
		i++;
	}
}