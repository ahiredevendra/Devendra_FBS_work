void RangeSum();
void main()
{
	RangeSum();
}
void RangeSum()
{
	int n;
	printf("Enter range number : ");
	scanf("%d",&n);
	
	int i = 1;
	int sum = 0;
	
	while(i<=n)
	{
		sum = sum+i;
		i++;
	}
	printf("Sum of range = %d",sum);
}