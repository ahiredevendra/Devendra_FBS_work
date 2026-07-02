void main()
{
	int n = 5;
	int i,j;
	
	for(i=1; i<=n; i++)
	{
		for(j=n; j>=i; j--)
		{
			printf("* ");
		}
		printf("\n");
	}
}
