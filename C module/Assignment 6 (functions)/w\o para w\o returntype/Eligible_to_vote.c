void Eligibletovote();
void main()
{
	Eligibletovote();
}
void Eligibletovote()
{
	int age;
	printf("Enter age : ");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("Eligible to vote");
	}
	else
	{
		printf("Not eligible to vote");
	}
}