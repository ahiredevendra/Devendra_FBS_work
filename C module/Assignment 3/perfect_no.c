void main()
{
	int n = 28;
	int i = 1;
	int sum = 0;
	
	while(i<=n/2)
	{
		if(n%i==0)
		{
			sum = sum+i;	
		}
		i++;
	}
	
	if(sum==n)
	{
		printf("Perfect Number");
	}
	else
	{
		printf("Not Perfect Number");
	}
}