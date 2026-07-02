void discount();
void main()
{
	discount();
}
void discount()
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