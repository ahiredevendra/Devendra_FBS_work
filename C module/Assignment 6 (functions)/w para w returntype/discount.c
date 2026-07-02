int discount(int);
void main()
{
	int cost;
	
	printf("Enter Price : ");
	scanf("%d",&cost);
	
	int x = discount(cost);  
	
	printf("Final price is : %d",x);
}
int discount(int price)
{
	int f_price;
	char ch;
	
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