void printPrime(int);
void main(){
	int n;
	printf("Enter range: ");
	scanf("%d",&n);
	
	printf("Prime numbers from 1 to %d are: ",n);
	printPrime(n);
}
void printPrime(int n){
	int i,j;
	int flag;
	for(i=1; i<=n; i++){
		flag=0;
		for(j=2; j<i; j++){
			if(i%j==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			printf("%d ",i);
		}
	}
}