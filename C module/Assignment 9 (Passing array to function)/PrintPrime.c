void display(int*, int);
void PrintPrime(int*, int);
void main()
{
	int size,i;
	printf("Enter size of array : ");
	scanf("%d",&size);
	
	int arr[size];
	
	printf("Enter elements : ");
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	display(arr,size);
	
	PrintPrime(arr,size);
}
void display(int* arr, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}
}
void PrintPrime(int* brr, int size)
{
	int i,j;
	printf("\nPrime numbers are = ");
	for(i=0; i<size; i++)
	{
		int flag = 0;
		for(j=2; j<brr[i]/2; j++)
		{
			if(brr[i]%j==0)
			{
				flag = 1;
				break;
			}
		}
		if(flag==0)
			printf("%d ",brr[i]);
	}
}