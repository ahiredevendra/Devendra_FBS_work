int evenodd(int);
void main()
{
	int no;
	
	printf("Enter number : ");
	scanf("%d",&no);
	
	int x = evenodd(no);
	
	if(x==1)
		printf("Number is even");
	else
		printf("Number is odd");
		
}
int evenodd(int a)
{
	
	if(a%2==0)
		return 1;
	else
		return 0;
	
}