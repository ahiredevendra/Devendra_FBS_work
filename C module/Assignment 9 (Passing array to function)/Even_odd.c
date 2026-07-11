void display(int*, int);
void FindOddEven(int* brr, int size);
void main()
{
	int size,i;
	printf("Enter size of array : ");
	scanf("%d",&size);
	
	int arr[size];
	
	printf("Enter elements :\n");
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	display(arr,size);
	
	FindOddEven(arr,size);
}
void display(int* brr, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("%d ",brr[i]);
	}
}
void FindOddEven(int* brr, int size)
{
	int i;
	
	printf("\nOdd numbers are = ");
	for(i=0; i<size; i++)
	{
		if(brr[i]%2!=0)
		{
			printf("%d ",brr[i]);
		}
	}
	
	printf("\nEven numbers are = ");
	for(i=0; i<size; i++)
	{
		if(brr[i]%2==0)
		{
			printf("%d ",brr[i]);
		}
	}
}