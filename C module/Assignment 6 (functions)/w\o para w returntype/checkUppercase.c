int checkUppercase();
void main()
{
	int x = checkUppercase();
	
	if(x==1)
	{
		printf("Letter is uppercase");
	}
	else if(x==2)
	{
		printf("Letter is lowercase");
	}
	else
	{
		printf("Invalid input");
	}
}
int checkUppercase()
{
	char ch;
	printf("Enter Character : ");
	scanf("%c",&ch);
	
	if(ch >= 65 && ch<=90)
	{
		return 1;
	}
	else if(ch >= 97 && ch<=122)
	{
		return 2;
	}
	else
	{
		return 0;
	}
}