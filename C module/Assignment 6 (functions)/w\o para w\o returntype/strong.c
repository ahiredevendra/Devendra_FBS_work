void CheckStrong();
void main()
{
	CheckStrong();
}
void CheckStrong()
{
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	
	int temp = n;
	int sum = 0;
	int rem;
	
	while(n!=0)
	{
		rem = n%10;
		int i = 1;
		int fact = 1;
		while(rem>=i)
		{
			fact = fact*i;
			i++;
		}
		sum = sum+fact;
		n = n/10;
	}
	
	
	if(sum==temp)
	{
		printf("Number is strong");
	}
	else
	{
		printf("Number is not strong");
	}
}