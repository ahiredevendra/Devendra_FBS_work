void main()
{
	int n;
	int optn;
	int i;
	int flag;
	int rem,rev;
	int sum;
	
	printf("Enter number : ");
	scanf("%d", &n);
	
	printf("\nPress 1.To check number is even or odd.\n2.To check number is prime or not.\n3.To check number is pallindrome or not.\n4.To check number is positive, negative or zero.\n5.To reverse a number.\n6.To find sum of digits.\n\n");
	scanf("%d", &optn);
	
	switch(optn)
	{
		case 1 :
			if(n%2==0)
				printf("\nNumber is even");
			else
				printf("\nNumber is odd");
			break;
			
		case 2 :
			flag = 0;
			for(i=2; i<=n/2; i++)
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
			break;
			
		case 3 :
			rev = 0;
			for(i=n; i!=0; i=i/10)
			{
				rem = i%10;
				rev = rev*10 + rem;
			}
			if(rev==n)
				printf("Number is palindrome");
			else
				printf("Number is not palindrome");
			break;
			
		case 4 :
			if(n>0)
				printf("Number is positive");
			else if(n<0)
				printf("Number is negative");
			else
				printf("Number is zero");
			break;
			
		case 5 :
			rev = 0;
			for(i=n; i!=0; i=i/10)
			{
				rem = i%10;
				rev = rev*10 + rem;
			}
			printf("%d",rev);
			break;
			
		case 6 :
			sum = 0;
			for(i=n; i!=0; i=i/10)
			{
				rem = i%10;
				sum = sum + rem;
			}
			printf("%d",sum);
			break;
			
		default :
			printf("Invalid input");
	}
}