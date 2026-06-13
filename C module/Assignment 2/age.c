void main()
{
	int age = 11;
	
	if(age>=12)
	{
		if(age>=12 && age<=19)
		{
			printf("Teenager");
		}
		else
		{
			if(age>=20 && age<=59)
			{
				printf("Adult");
			}
			else
			{
				if(age>=60)
				{
					printf("Senior");
				}
			}
		}
	}
	else
	{
		printf("Child");
	}
}