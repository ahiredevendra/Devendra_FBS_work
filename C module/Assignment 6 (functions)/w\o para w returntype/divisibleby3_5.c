int discount();
void main()
{
	int x = discount();	
	
	if(x==1)
		printf("number is divisible by both 3 and 5");
	else if(x==2)
		printf("number is divisible by 5");
	else if(x==3)
		printf("number is divisible by both 3");
	else
		printf("number is divisible by none");
		
}
int discount()
{
	int no;
	
	printf("Enter number : ");
	scanf("%d",&no);
	
	if(no%3==0 && no%5==0)
		return 1;
	else if(no%5==0)
		return 2;
	else if(no%3==0)
		return 3;
	else
		return 4;
}