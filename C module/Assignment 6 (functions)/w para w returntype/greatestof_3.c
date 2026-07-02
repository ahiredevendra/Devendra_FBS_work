int greatest(int,int,int);
void main()
{
	int a,b,c;
	
	printf("Enter a : ");
	scanf("%d",&a);
	
	printf("Enter b : ");
	scanf("%d",&b);
	
	printf("Enter c : ");
	scanf("%d",&c);
	
	int grt = greatest(a,b,c);
	
	printf("%d is greater",grt);
}
int greatest(int x, int y, int z)
{
	
	
	if(x>y)
	{
		if(x>z){
			return x;
		}
		else{
			return z;
		}
	}
	else{
		if(y>z)
		{
			return y;
		}
		else
		{
			return z;
		}
	}
}