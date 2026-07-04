int RangeSum(int);
void main()
{
	int no;
	printf("Enter range number : ");
	scanf("%d",&no);
	
	int x = RangeSum(no);
	
	printf("Sum of range = %d",x);
}
int RangeSum(int n)
{
	int i = 1;
	int sum = 0;
	
	while(i<=n)
	{
		sum = sum+i;
		i++;
	}
	return sum;
}