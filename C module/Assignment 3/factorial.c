void main()
{
	int n = 5;
	int i = 1;
	int fact = 1;
	
	while(n>=i)
	{
		fact = fact*i;
		i++;
	}
	printf("%d",fact);
}