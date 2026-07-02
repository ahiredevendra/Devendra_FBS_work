void TriangleType();
void main()
{
	TriangleType();
}
void TriangleType()
{
	int s1,s2,s3;
	
	printf("Enter 3 Sides : ");
	scanf("%d %d %d",&s1,&s2,&s3);
	
	if(s1==s2 && s1==s3)
	{
		printf("Triangle is equivalent");
	}
	else{
		if(s1==s2 || s1==s3 || s2==s3){
			printf("Triangle is isosceles");
		}
		else{
			printf("Triangle is scalen");
		}
	}
}