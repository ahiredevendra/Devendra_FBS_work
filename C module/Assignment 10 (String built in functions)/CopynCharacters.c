void main()
{
	char str1[30];
	char str2[30];
	
	printf("Enter string 1 : ");
	scanf("%s",str1);
	
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	
	strncpy(str2,str1,n);
	str2[n] = '\0';
	printf("\nString 1 copied upto n in string 2 successfully");
	
	printf("\nString 2 is = %s",str2);
}