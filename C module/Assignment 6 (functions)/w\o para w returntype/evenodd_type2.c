int evenodd();
void main()
{
	
	int x = evenodd();
	
	if(x==1)
		printf("Number is even");
	else if(x==0)
		printf("Number is odd");	
}
int evenodd()
{
	int no;
	
	printf("Enter number : ");
	scanf("%d",&no);
	
	if(no%2==0)
		return 1;
	else
		return 0;
}