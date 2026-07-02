int checkVowel();
void main()
{
	 int x = checkVowel();
	 
	 if(x==1)
	{
		printf("Charcter is vowel");
	}
	else if(x==0){
		printf("Character is consonant");
	}
}
int checkVowel()
{
	char ch;
	printf("Enter character : ");
	scanf("%c",&ch);
	
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||  ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	{
		return 1;
	}
	else{
		return 0;
	}
}