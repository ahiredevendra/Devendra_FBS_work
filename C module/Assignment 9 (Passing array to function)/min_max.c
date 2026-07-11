void display(int* brr, int size);
int FindMax(int* brr, int size);
int FindMin(int* brr, int size);
void main()
{
	int size;
	printf("Enter size of array : ");
	scanf("%d",&size);
	
	int arr[size];
	
	printf("\nEnter elements : \n");
	int i;
	
	for(i=0;i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	display(arr,size);
	
	int x = FindMax(arr,size);
	printf("\nMaximum of array is : %d",x);
	
	int y = FindMin(arr,size);
	printf("\nMinimum of array is : %d",y);
}
void display(int* brr, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("%d ",brr[i]);
	}
}
int FindMax(int* brr, int size)
{
	int i;
	
	int max = brr[0];
	for(i=1; i<size; i++)
	{
		if(max<brr[i])
		max = brr[i];
	}
	return max;
}
int FindMin(int* brr, int size)
{
	int i;
	
	int min = brr[0];
	for(i=1; i<size; i++)
	{
		if(min>brr[i])
			min = brr[i];
	}
	return min;
}