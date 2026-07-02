void result(int);
void main()
{
	int score;
	
	printf("Enter marks : ");
	scanf("%d",&score);
	
	result(score);
	
}
void result(int marks)
{
	
	if(marks>=75)
		printf("Distinction");
	else if(marks>=65)
		printf("First Class");
	else if(marks>=55)
		printf("Second Class");
	else if(marks>=40)
		printf("Pass Class");
	else
		printf("Fail");
					
}