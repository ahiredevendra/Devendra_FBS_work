void printPerfectNo(int);
void main(){
	int n;
	printf("Enter range: ");
	scanf("%d",&n);
	
	printf("Perfect number from 1 to %d are: ",n);
	printPerfectNo(n);
}
void printPerfectNo(int n){
	int i,temp;
	int sum;
	
	for(i=1; i<=n; i++)
	{
		sum=0;
		for(temp=1; temp<=i/2; temp++)
		{
			if(i%temp==0)
			{
				sum = sum+temp;
			}
		}
		if(sum==i)
		{
			printf("%d ",i);
		}
	}
}