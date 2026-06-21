void main()
{
	int n = 27;
	int i = 2;
	int flag = 0;
	
	while(i<n)
	{
		if(n%i==0)
		{
			flag = 1;
			break;
		}
		i++;
	}
	
	if(flag==1)
	{
		printf("Number is not prime");
	}
	else
	{
		printf("Number is prime");
	}
}