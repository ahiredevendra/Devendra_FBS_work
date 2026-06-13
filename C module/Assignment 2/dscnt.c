void main()
{
	int price = 1000;
	char ch = 'y';
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