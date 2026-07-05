void greatest(int*, int*, int*);
void main()
{
	int a,b,c;
	
	printf("Enter a : ");
	scanf("%d",&a);
	
	printf("Enter b : ");
	scanf("%d",&b);
	
	printf("Enter c : ");
	scanf("%d",&c);
	
	greatest(&a, &b, &c);
}
void greatest(int* x, int* y, int* z)
{
	
	if(*x>*y)
	{
		if(*x>*z){
			printf("%d is greater",*x);
		}
		else{
			printf("%d is greater",*z);
		}
	}
	else{
		if(*y>*z)
		{
			printf("%d is greater",*y);
		}
		else
		{
			printf("%d is greater",*z);
		}
	}
}