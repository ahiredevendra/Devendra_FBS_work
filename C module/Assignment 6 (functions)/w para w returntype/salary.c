int salary(int);
void main()
{
	int b_sal;
	
	printf("Enter Salary : ");
	scanf("%d",&b_sal);
	
	int s = salary(b_sal);
	
	printf("Total salary is : %d",s);
	
}
int salary(int x)
{
	int da,ta,hra;
	int t_sal;
	
	if(x <= 5000)
	{
		da = x*0.10;
		ta = x*0.20;
		hra = x*0.25;
	}
	else
	{
		da = x*0.15;
		ta = x*0.25;
		hra = x*0.30;
	}
	
	t_sal = x + da + ta + hra;
	return t_sal;
}