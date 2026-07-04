int CheckPerfect(in);
void main()
{
	int no;
	printf("Enter number : ");
	scanf("%d",&no);
	
	int x = CheckPerfect(no);
	
	if(x==1)
		printf("Perfect Number");
	else
		printf("Not Perfect Number");
}
int CheckPerfect(int n)
{
	
	int i = 1;
	int sum = 0;
	
	while(i<=n/2)
	{
		if(n%i==0)
		{
			sum = sum+i;	
		}
		i++;
	}
	
	if(sum==n)
		return 1;
	else
		return 0;
}