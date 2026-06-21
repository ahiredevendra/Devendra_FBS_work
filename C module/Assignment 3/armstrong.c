void main()
{
	int n = 153, rem;
	int temp = n;
	int sum = 0;
	
	while(n!=0)
	{
		rem = n%10;
		sum = sum + rem*rem*rem;
		n = n/10;
	}
	
	if(temp==sum)
	{
		printf("Number is armstrong");
	}
	else
	{
		printf("Number is not armstrong");
	}
}