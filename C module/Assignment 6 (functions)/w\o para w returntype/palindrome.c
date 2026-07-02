int checkPalindrome();
void main()
{
	
	int x = checkPalindrome();
	
	if(x==1)
	{
		printf("Number is Palindrome");
	}
	else if(x==0)
	{
		printf("Number is not Palindrome");
	}
}
int checkPalindrome()
{
	int no = 121;
	int a,b,c,temp;
	int rev;
	
	a = no%10;
	temp = no/10;
	b = temp%10;
	c = temp/10;
	
	rev = a*100 + b*10 + c;
	
	if(no==rev)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}