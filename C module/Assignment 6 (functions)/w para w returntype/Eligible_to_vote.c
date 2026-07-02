int Eligibletovote(int);
void main()
{
	int age;
	printf("Enter age : ");
	scanf("%d",&age);
	
	int x = Eligibletovote(age);
	
	if(x==1)
	{
		printf("Eligible to vote");
	}
	else if(x==0)
	{
		printf("Not eligible to vote");
	}
}
int Eligibletovote(int n)
{
	
	if(n>=18)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}