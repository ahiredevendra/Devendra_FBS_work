void main()
{
	char str1[10];
	char str2[10];
	
	printf("Enter string 1 : ");
	scanf("%s",str1);
	
	strcpy(str2,str1);
	printf("\nString 1 copied in string 2 successfully");
	
	printf("\nString 2 is = %s",str2);
}