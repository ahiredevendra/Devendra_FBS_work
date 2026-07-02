void checkUppercase();
void main()
{
	checkUppercase();
}
void checkUppercase()
{
	char ch;
	printf("Enter Character : ");
	scanf("%c",&ch);
	
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