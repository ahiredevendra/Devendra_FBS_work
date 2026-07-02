int checkPalindrome(int);
void main()
{
	int no = 121;
	
	int x = checkPalindrome(no);
	
	if(x==1)
	{
		printf("Number is Palindrome");
	}
	else if(x==0)
	{
		printf("Number is not Palindrome");
	}
	
}
int checkPalindrome(int p)
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
		return 1;
	}
	else
	{
		return 0;
	}
}