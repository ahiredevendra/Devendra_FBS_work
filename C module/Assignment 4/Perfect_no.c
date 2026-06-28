void main()
{
	int n,i,temp;
	int sum;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	printf("\nPerfect numbers from 1 to n are : ");
	for(i=1; i<=n; i++)
	{
		sum=0;
		for(temp=1; temp<=i/2; temp++)
		{
			if(i%temp==0)
			{
				sum = sum+temp;
			}
		}
		if(sum==i)
		{
			printf("%d ",i);
		}
	}
}