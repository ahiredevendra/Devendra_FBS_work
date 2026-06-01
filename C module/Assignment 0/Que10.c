void main()
{
	int chem,bio,phy,math,geo,out_of;
	int total_marks;
	float percentage;
	
	out_of = 100;
	chem = 87;
	bio = 91;
	phy = 83;
	math = 88;
	geo = 89;
	
	total_marks = chem+bio+phy+math+geo;
	percentage = total_marks/5;
	
	printf("total marks are %d and percentage is %f",total_marks,percentage);
}