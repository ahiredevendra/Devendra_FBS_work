//WAP to Count the Number of Vowels in a String

int CountVowel(char*);
void main()
{
	char str[20];
	printf("Enter string : ");
	scanf("%s",str);
	
	int x = CountVowel(str);
	printf("String has %d vowels",x);
}
int CountVowel(char* ptr)
{
	int i=0;
	int count=0;
	
	while(ptr[i]!='\0')
	{
		if(ptr[i]=='a' || ptr[i]=='e' || ptr[i]=='i' || ptr[i]=='o' || ptr[i]=='u'|| 
		   ptr[i]=='A' || ptr[i]=='E' || ptr[i]=='I' || ptr[i]=='O' || ptr[i]=='U')
		{
			count++;
		}
		i++;
	}
	
	return count;
}