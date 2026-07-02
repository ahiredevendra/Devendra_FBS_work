void discount(int);
void main()
{
	int x;
	
	printf("Enter number : ");
	scanf("%d",&x);
	
	discount(x);	
}
void discount(int no)
{
	
	if(no%3==0 && no%5==0)
		printf("number is divisible by both 3 and 5");
	else if(no%5==0)
		printf("number is divisible by 5");
	else if(no%3==0)
		printf("number is divisible by both 3");
	else
		printf("number is divisible by none");
}