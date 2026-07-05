void Eligibletovote(int*);
void main()
{
	int age;
	printf("Enter age : ");
	scanf("%d",&age);
	
	Eligibletovote(&age);
	
	
}
void Eligibletovote(int* x)
{
	
	if(*x>=18)
	{
		printf("Eligible to vote");
	}
	else
	{
		printf("Not eligible to vote");
	}
}