void salary(int*);
void main()
{
	int b_sal;
	
	printf("Enter Salary : ");
	scanf("%d",&b_sal);
	
	salary(&b_sal);
			
}
void salary(int* x)
{
	int da,ta,hra;
	int t_sal;
	
	if(*x <= 5000)
	{
		da = *x*0.10;
		ta = *x*0.20;
		hra = *x*0.25;
		
		t_sal = *x + da + ta + hra;
		
		printf("Total salary is : %d",t_sal);
	}
	else
	{
		da = *x*0.15;
		ta = *x*0.25;
		hra = *x*0.30;
		
		t_sal = *x + da + ta + hra;
		
		printf("Total salary is : %d",t_sal);
	}
}