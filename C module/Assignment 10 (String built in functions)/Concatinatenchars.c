void main()
{
	char str1[30];
	printf("Enter string 1 : ");
	scanf("%s",str1);
	
	char str2[30];
	printf("Enter string 2 : ");
	scanf("%s",str2);
	
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	
	printf("%s",strncat(str1,str2,n));
}