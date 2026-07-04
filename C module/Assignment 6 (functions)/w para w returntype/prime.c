int CheckPrime(int);
void main()
{
	int no;
	printf("Enter number : ");
	scanf("%d",&no);
	
	int x = CheckPrime(no);
	
	if(x==0)
		printf("Number is not prime");
	else
		printf("Number is prime");
}
int CheckPrime(int n)
{
	int i = 2;
	int flag = 0;
	
	while(i<n)
	{
		if(n%i==0)
		{
			flag = 1;
			break;
		}
		i++;
	}
	
	if(flag==1)
		return 0;
	else
		return 1;
}