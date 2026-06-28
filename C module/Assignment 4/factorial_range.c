void main()
{
	int n;
	int i,j;
	int temp, rem, fact,sum;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		sum = 0;
		for(temp=i; temp!=0; temp=temp/10)
		{
			rem = temp%10;
			
			fact = 1;
			for(j=1; j<=rem; j++)
			{
			fact = fact*j;
			}
			sum = sum+fact;
		
		}
		
		if(sum==i)
		{
			printf("%d ",i);
		}
	}
}