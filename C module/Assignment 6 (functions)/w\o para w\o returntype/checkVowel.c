void checkVowel();
void main()
{
	 checkVowel();
}
void checkVowel()
{
	char ch;
	printf("Enter character");
	scanf("%c",&ch);
	
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||  ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	{
		printf("Charcter is vowel");
	}
	else{
		printf("Character is consonant");
	}
}