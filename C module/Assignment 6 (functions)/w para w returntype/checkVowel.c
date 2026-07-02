char checkVowel(char);
void main()
{
	
	char a;
	printf("Enter character : ");
	scanf("%c",&a);
	
	int x = checkVowel(a);
	 
	 if(x==1)
	{
		printf("Charcter is vowel");
	}
	else if(x==0)
	{
		printf("Character is consonant");
	}
	 
}
char checkVowel(char ch)
{
	
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||  ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	{
		return 1;
	}
	else{
		return 0;
	}
}