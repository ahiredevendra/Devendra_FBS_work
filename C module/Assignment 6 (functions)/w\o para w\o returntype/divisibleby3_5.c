void discount();
void main()
{
	discount();	
}
void discount()
{
	int no;
	
	printf("Enter number : ");
	scanf("%d",&no);
	
	if(no%3==0 && no%5==0)
		printf("number is divisible by both 3 and 5");
	else if(no%5==0)
		printf("number is divisible by 5");
	else if(no%3==0)
		printf("number is divisible by both 3");
	else
		printf("number is divisible by none");
}