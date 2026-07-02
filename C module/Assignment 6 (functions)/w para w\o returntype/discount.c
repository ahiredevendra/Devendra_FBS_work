void discount(int);
void main()
{
	int cost;
	
	printf("Enter Price : ");
	scanf("%d",&cost);
	
	discount(cost);
}
void discount(int price)
{
	char ch;
	printf("Enter y for student otherwise n : ");
	scanf(" %c",&ch);
	
	int f_price;
	
	if(ch=='y')
	{
		if(price>500)
		{
			f_price = price - price*0.20;
			printf("%d",f_price);
		}
		else
		{
			f_price = price - price*0.10;
			printf("%d",f_price);
		}
	}
	else
	{
		if(price>600)
		{
			f_price = price - price*0.15;
			printf("%d",f_price);
		}
		else 
		{
			printf("No discount");
		}
	}
}