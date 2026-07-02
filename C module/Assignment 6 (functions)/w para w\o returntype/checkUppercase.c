void checkUppercase(char);
void main()
{
	char n;
	printf("Enter Character : ");
	scanf("%c",&n);
	
	checkUppercase(n);
}
void checkUppercase(char ch)
{
	
	if(ch >= 65 && ch<=90)
	{
		printf("Letter is uppercase");
	}
	else if(ch >= 97 && ch<=122)
	{
		printf("Letter is lowercase");
	}
	else
	{
		printf("Invalid input");
	}
}