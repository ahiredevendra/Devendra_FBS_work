void main()
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
		printf("Number is Palindrome");
	}
	else
	{
		printf("Number is not Palindrome");
	}
}