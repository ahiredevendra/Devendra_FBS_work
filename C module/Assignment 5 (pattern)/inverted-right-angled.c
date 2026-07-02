void main()
{
	int n = 5;
	int temp = n;
	int i,j;
	
	for(i=1; i<=n; i++,temp--)
	{
		for(j=1; j<=temp; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}