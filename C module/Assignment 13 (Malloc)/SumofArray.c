void display(int*, int);
int SumofArray(int*, int);
void main()
{
	int size,i;
	printf("Enter size of array : ");
	scanf("%d",&size);
	
	int* arr = (int*)malloc(sizeof(int)*size);
	
	printf("Enter elements : \n");
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	display(arr,size);
	
	int x = SumofArray(arr,size);
	printf("\nSum of Array is = %d",x);
}
void display(int* brr, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("%d ",brr[i]);
	}
}
int SumofArray(int* brr, int size)
{
	int i;
	
	int sum = 0;
	for(i=0; i<size; i++)
	{
		sum = sum+brr[i];
	}
	return sum;
}