void main()
{
	int s1,s2,s3;
	
	s1 = 10;
	s2 = 10;
	s3 = 10;
	
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