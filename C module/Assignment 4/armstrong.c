void main()
{
	int n;
	int temp;
	int rem, sum;
	int i,count;
	
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		count = 0;
		sum = 0;
		for(temp=i; temp!=0; temp=temp/10)
		{
			count++;
		}
		
		for(temp=i; temp!=0; temp=temp/10){
		
			rem = temp%10;
			sum = sum + pow(rem, count);
		
			if(sum==i)
			{
				printf("%d ",i);
			}
		}
	}
}