void main()
{
	int a,b,c;
	
	a = 100;
	b = 20;
	c = 30;
	
	if(a>b)
	{
		if(a>c){
			printf("a is greater");
		}
		else{
			printf("c is greater");
		}
	}
	else{
		if(b>c)
		{
			printf("b is greater");
		}
		else
		{
			printf("c is greater");
		}
	}
}