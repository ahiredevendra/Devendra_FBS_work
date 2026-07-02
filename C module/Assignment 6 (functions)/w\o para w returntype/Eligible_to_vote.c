int Eligibletovote();
void main()
{
	int x = Eligibletovote();
	
	if(x==1)
	{
		printf("Eligible to vote");
	}
	else if(x==0)
	{
		printf("Not eligible to vote");
	}
}
int Eligibletovote()
{
	int age;
	printf("Enter age : ");
	scanf("%d",&age);
	
	if(age>=18)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}