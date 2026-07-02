void checkPalindrome(int);
void main()
{
	int no = 121;
	
	checkPalindrome(no);
	
}
void checkPalindrome(int p)
{
	int a,b,c,temp;
	int rev;
	
	a = p%10;
	temp = p/10;
	b = temp%10;
	c = temp/10;
	
	rev = a*100 + b*10 + c;
	
	if(p==rev)
	{
		printf("Number is Palindrome");
	}
	else
	{
		printf("Number is not Palindrome");
	}
}