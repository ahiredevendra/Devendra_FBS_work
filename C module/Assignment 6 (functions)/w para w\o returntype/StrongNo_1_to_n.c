void printStrongNo(int);
void main(){
	int n;
	printf("Enter range: ");
	scanf("%d",&n);
	
	printf("Strong numbers from 1 to %d are: ",n);
	printStrongNo(n);
}
void printStrongNo(int n){
	int i,temp,rem,fact,sum,j;
	
	for(i=1; i<=n; i++)
	{
		
		sum = 0;
		for(temp=i; temp!=0; temp=temp/10)
		{
			rem = temp%10;
			
			fact = 1;
			for(j=1; j<=rem; j++)
			{
				fact = fact*j;
			}
			sum = sum+fact;
		}
	
	if(i==sum)
		printf("%d ",i);
	}
}