void main()
{
	char str[30];
	printf("Enter string : ");
	scanf("%s",str);
	
	char str1[10];
	printf("Enter substring : ");
	scanf("%s",str1);
	
	printf("%s",strstr(str,str1));
	
}