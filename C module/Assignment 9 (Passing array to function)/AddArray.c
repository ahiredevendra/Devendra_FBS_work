void AddArray(int*, int*, int);
void main()
{
	int size,i;
	printf("Enter array size of arr and brr : ");
	scanf("%d",&size);
	
	int arr[size];
	int brr[size];
	
	printf("Enter elments in arr : ");
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter elments in brr : ");
	for(i=0; i<size; i++)
	{
		scanf("%d",&brr[i]);
	}
		
		AddArray(arr,brr,size);
}
void AddArray(int* arr, int* brr, int size)
{
	int i;
	
	int crr[size];
	
	for(i=0; i<size; i++)
	{
		crr[i] = arr[i]+brr[i];	
	}
	
	printf("Addition = ");
	for(i=0; i<size; i++)
	{
		printf("%d ",crr[i]);
	}
}