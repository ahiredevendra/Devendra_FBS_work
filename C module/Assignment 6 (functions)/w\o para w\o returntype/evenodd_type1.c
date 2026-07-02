void evenodd();
void main()
{
	
	evenodd();	
}
void evenodd()
{
	int no;
	
	printf("Enter number : ");
	scanf("%d",&no);
	
	if(no%2==0)
	{
		printf("Number is even");
	}
	else
	{
		printf("Number is odd");
	}
}