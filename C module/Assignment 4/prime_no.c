void main()
{
	int n;
	int i,j;
	int flag;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("Prime number from 1 to %d are :\n",n);
	
	for(i=1; i<=n; i++)
	{
		flag = 0;
		for(j=2; j<i; j++)
		{
			if(i%j==0)
			{
				flag = 1;
				break;
			}
		}
		
		if(flag==0)
		{
			printf("%d ",i);
		}
		
	}
}