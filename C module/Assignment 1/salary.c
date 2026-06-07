void main()
{
	int b_sal = 9000;
	int da,ta,hra;
	int t_sal;
	
	if(b_sal <= 5000)
	{
		da = b_sal*0.10;
		ta = b_sal*0.20;
		hra = b_sal*0.25;
		
		t_sal = b_sal + da + ta + hra;
		
		printf("Total salary is %d",t_sal);
	}
	else
	{
		da = b_sal*0.15;
		ta = b_sal*0.25;
		hra = b_sal*0.30;
		
		t_sal = b_sal + da + ta + hra;
		
		printf("Total salary is %d",t_sal);
	}
}