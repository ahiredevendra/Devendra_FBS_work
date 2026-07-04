int Palindrome();
void main()
{
	int x = Palindrome();
	
	if(x==1)
		printf("Number is Palindrome");
	else
		printf("Number is not Palindrome");
}
int Palindrome()
{
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	
	int temp = n;
	int rev = 0;
	int rem;
	
	while(n!=0)
	{
		rem = n%10;
		rev = rev*10 + rem;
		n = n/10;
	}
	
	if(temp==rev)
		return 1;
	else
		return 0;
}
