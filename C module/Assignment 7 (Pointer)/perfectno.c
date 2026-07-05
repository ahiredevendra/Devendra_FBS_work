void CheckPerfect(int*);
void main()
{
	int no;
	printf("Enter number : ");
	scanf("%d",&no);
	
	CheckPerfect(&no);
}
void CheckPerfect(int* n)
{
	
	int i = 1;
	int sum = 0;
	
	while(i<=*n/2)
	{
		if(*n%i==0)
		{
			sum = sum+i;	
		}
		i++;
	}
	
	if(sum==*n)
	{
		printf("Perfect Number");
	}
	else
	{
		printf("Not Perfect Number");
	}
}