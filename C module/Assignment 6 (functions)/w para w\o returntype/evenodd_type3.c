void evenodd(int);
void main()
{
	int no;
	
	printf("Enter number : ");
	scanf("%d",&no);
	
	evenodd(no);
	
		
}
void evenodd(int x)
{
	
	if(x%2==0)
		printf("Number is even");
	else
		printf("Number is odd");
}