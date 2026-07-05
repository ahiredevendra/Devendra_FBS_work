void Table(int*);
void main()
{
	int no;
	printf("Enter number : ");
	scanf("%d",&no);
	
	Table(&no);	
}
void Table(int* n)
{
	int i = *n;
	
	while(i<=*n*10)
	{
		printf("%d ",i);
		i = i+*n;
	}
}