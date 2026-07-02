int discount(int);
void main()
{
	int n;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	int x = discount(n);	
	
	if(x==1)
		printf("number is divisible by both 3 and 5");
	else if(x==2)
		printf("number is divisible by 5");
	else if(x==3)
		printf("number is divisible by both 3");
	else
		printf("number is divisible by none");
		
}
int discount(int no)
{
	
	if(no%3==0 && no%5==0)
		return 1;
	else if(no%5==0)
		return 2;
	else if(no%3==0)
		return 3;
	else
		return 4;
}