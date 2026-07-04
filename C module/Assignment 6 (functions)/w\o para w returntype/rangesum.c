int RangeSum();
void main()
{
	int x = RangeSum();
	printf("Sum of range = %d",x);
}
int RangeSum()
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
	return sum;
}
