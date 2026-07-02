int TriangleType();
void main()
{
	int x = TriangleType();
	
	if(x==1)
		printf("Triangle is equivalent");
	else if(x==2)
		printf("Triangle is isosceles");
	else
		printf("Triangle is scalen");
}
int TriangleType()
{
	int s1,s2,s3;
	
	printf("Enter 3 Sides : ");
	scanf("%d %d %d",&s1,&s2,&s3);
	
	if(s1==s2 && s1==s3)
		return 1;
	else if(s1==s2 || s1==s3 || s2==s3)
		return 2;
	else
		return 3;
}