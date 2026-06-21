void main()
{
	int n = 12345;
	int firstdigit = 0;
	int sum, lastdigit;
	
	lastdigit = n%10;
	
	while(n>=10)
	{
		n = n/10;
	}
	
	firstdigit = n;
	
	sum = firstdigit + lastdigit;
	
	printf("%d",sum);
}