void TriangleType(int, int, int);
void main()
{
	int a,b,c;
	
	printf("Enter 3 Sides : ");
	scanf("%d %d %d",&a,&b,&c);
	
	TriangleType(a,b,c);
}
void TriangleType(int s1, int s2, int s3)
{
	
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