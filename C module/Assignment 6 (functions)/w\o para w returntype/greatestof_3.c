int greatest();
void main()
{
	int x = greatest();
	
	printf("%d is greater",x);
}
int greatest()
{
	int a,b,c;
	
	printf("Enter a : ");
	scanf("%d",&a);
	
	printf("Enter b : ");
	scanf("%d",&b);
	
	printf("Enter c : ");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c){
			return a;
		}
		else{
			return c;
		}
	}
	else{
		if(b>c)
		{
			return b;
		}
		else
		{
			return c;
		}
	}
}