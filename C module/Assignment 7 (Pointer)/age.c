void agedefine(int*);
void main()
{
	int n;
	
	printf("Enter age : ");
	scanf("%d",&n);
	
	agedefine(&n);
}
void agedefine(int* age)
{
	
	if(*age>=12){
		if(*age>=12 && *age<=19)
		{
			printf("Teenager");
		}
			if(*age>=20 && *age<=59)
			{
				printf("Adult");
			}
				else if(*age>=60){
					printf("Senior");
				}
	}
	else
	{
		printf("Child");
	}
}