void CheckEven(int);
void CheckPrime(int);
void CheckPalindrome(int);
void CheckPalindrome(int);
void ReverseNumber(int);
void FindSum(int);
void main(){
	int n;
	printf("Enter number : ");
	scanf("%d", &n);
	
	int optn;
	printf("\nPress 1.To check number is even or odd.\n2.To check number is prime or not.\n3.To check number is pallindrome or not.\n4.To check number is positive, negative or zero.\n5.To reverse a number.\n6.To find sum of digits.\n\n");
	scanf("%d", &optn);
	
	switch(optn)
	{
		case 1 :
			CheckEven(n);
			break;
			
		case 2 :
			CheckPrime(n);
			break;
			
		case 3 :
			CheckPalindrome(n);
			break;
			
		case 4 :
			CheckPositive(n);
			break;
			
		case 5 :
			ReverseNumber(n);
			break;
			
		case 6 :
			FindSum(n);
			break;
			
		default :
			printf("Invalid input");
	}
}
void CheckEven(int n){
	if(n%2==0)
		printf("\nNumber is even");
	else
		printf("\nNumber is odd");
}
void CheckPrime(int n){
	int flag = 0;
	for(int i=2; i<=n/2; i++)
	{
		if(n%i==0)
		{
			flag = 1;
			break;
		}
	}
	if(flag==1)
	{
		printf("Number is not prime");
	}
	else
	{
		printf("Number is prime");
	}
}
void CheckPalindrome(int n){
	int rev = 0;
	int rem;
	for(i=n; i!=0; i=i/10)
	{
		rem = i%10;
		rev = rev*10 + rem;
	}
	if(rev==n)
		printf("Number is palindrome");
	else
		printf("Number is not palindrome");
}
void CheckPositive(int n){
	if(n>0)
		printf("Number is positive");
	else if(n<0)
		printf("Number is negative");
	else
		printf("Number is zero");
}
void ReverseNumber(int n){
	int rev = 0;
	int rem;
	for(i=n; i!=0; i=i/10)
	{		rem = i%10;
				rev = rev*10 + rem;
	}
	printf("%d",rev);
}
void FindSum(int n){
	int sum = 0;
	for(i=n; i!=0; i=i/10)
	{
		rem = i%10;
		sum = sum + rem;
	}
	printf("%d",sum);
}