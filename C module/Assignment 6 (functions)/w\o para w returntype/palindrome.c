void Palindrome(int);
void main()
{
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	
	Palindrome(n);
}
void Palindrome(int no)
{
	
	int temp = no;
	int rev = 0;
	int rem;
	
	while(no!=0)
	{
		rem = no%10;
		rev = rev*10 + rem;
		no = no/10;
	}
	
	if(temp==rev)
	{
		printf("Number is Palindrome");
	}
	else
	{
		printf("Number is not Palindrome");
	}
}