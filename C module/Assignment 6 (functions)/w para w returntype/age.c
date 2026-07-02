int agedefine(int);
void main()
{
	int n;
	
	printf("Enter age : ");
	scanf("%d",&n);
	
	int x = agedefine(n);
	
	if(x==1)
		printf("Teenager");
	else if(x==2)
		printf("Adult");
	else if(x==3)
		printf("Senior");
	else
		printf("Child");
}
int agedefine(int age)
{
	
	if(age>=12)
	
		if(age>=12 && age<=19)
			return 1;
			
			if(age>=20 && age<=59)
					return 2;
					
				else if(age>=60)
					return 3;
	else
		return 4;
}