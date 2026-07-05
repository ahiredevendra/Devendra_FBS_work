void checkPalindrome(int*);
void main()
{
	int no;
	printf("Enter number : ");
	scanf("%d",&no);
	
	checkPalindrome(&no);
	
}
void checkPalindrome(int* p)
{
	int i,rem;
	int rev=0;
	
	for(i=*p; i>0; i=i/10)
	{
		rem = i%10;
		rev = rev*10 + rem;
	}
	
	if(*p==rev)
	{
		printf("Number is Palindrome");
	}
	else
	{
		printf("Number is not Palindrome");
	}
}