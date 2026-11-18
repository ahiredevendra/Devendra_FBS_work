void RangeArmstrong(int);
void main()
{
	int no;
	printf("Enter range : ");
	scanf("%d",&no);
	
	RangeArmstrong(no);
}
void RangeArmstrong(int n)
{
	int temp;
	int rem, sum;
	int i,count;
	
	for(i=1; i<=n; i++)
	{
		count = 0;
		for(temp=i; temp!=0; temp=temp/10)
		{
			count++;
		}
		
		sum = 0;
		for(temp=i; temp!=0; temp=temp/10){
		
			rem = temp%10;
			sum = sum + pow(rem, count);
		}
		
		if(sum==i)
			{
				printf("%d ",i);
			}
	}
}