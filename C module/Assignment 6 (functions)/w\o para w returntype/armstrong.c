#include<stdio.h>
int Armstrong();
void main()
{
	int x = Armstrong();
	
	if(x==1)
		printf("Number is armstrong");
	else
		printf("Number is not armstrong");
}
int Armstrong()
{
	int n;
	
	printf("Enter number : ");
	scanf("%d",&n);
	 
	int rem;
	int temp = n;
	int sum = 0;
	int count = 0;
	int i = n;
	
	while(i!=0)
	{
		count++;
		i=i/10;
	}
	while(temp!=0)
	{
		rem = temp%10;
		sum = sum + pow(rem,count);
		temp = temp/10;
	}
	
	if(n==sum)
		return 1;
	else
		return 0;
}
