void main()
{
	char str1[30];
	printf("Enter string 1 : ");
	scanf("%s",str1);
	
	char str2[30];
	printf("Enter string 2 : ");
	scanf("%s",str2);
	
	int x = strcmp(str1,str2);
	
	if(x==0)
		printf("Strings are same");
	else
		printf("Strings are not same");
}