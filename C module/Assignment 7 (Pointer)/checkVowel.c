void checkVowel(char*);
void main()
{
	
	char a;
	printf("Enter character : ");
	scanf("%c",&a);
	
	 checkVowel(&a);
	 
}
void checkVowel(char* ch)
{
	
	if(*ch == 'a' || *ch == 'e' || *ch == 'i' || *ch == 'o' || *ch == 'u' ||  *ch == 'A' || *ch == 'E' || *ch == 'I' || *ch == 'O' || *ch == 'U')
	{
		printf("Charcter is vowel");
	}
	else{
		printf("Character is consonant");
	}
}