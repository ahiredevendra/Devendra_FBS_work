int discount();
void main()
{
	int x = discount();
	
	printf("Final price is : %d",x);
}
int discount()
{
	int price;
	char ch = 'y';
	int f_price;
	
	printf("Enter Price : ");
	scanf("%d",&price);
	
	printf("Enter y for student otherwise n : ");
	scanf(" %c",&ch);
	
	if(ch=='y')
	{
		if(price>500)
		{
			f_price = price - price*0.20;
		}
		else
		{
			f_price = price - price*0.10;
		}
	}
	else
	{
		if(price>600)
		{
			f_price = price - price*0.15;
		}
		else
		{
			f_price = price;
		}
	}
	
	return f_price;
}