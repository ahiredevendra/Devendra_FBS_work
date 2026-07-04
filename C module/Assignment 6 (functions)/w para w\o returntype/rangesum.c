void RangeSum(int);
void main()
{
	int no;
	printf("Enter range number : ");
	scanf("%d",&no);
	
	RangeSum(no);
}
void RangeSum(int n)
{
	
	int i = 1;
	int sum = 0;
	
	while(i<=n)
	{
		sum = sum+i;
		i++;
	}
	printf("Sum of range = %d",sum);
}