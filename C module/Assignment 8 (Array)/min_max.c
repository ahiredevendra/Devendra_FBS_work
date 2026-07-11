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
	
	for(i=0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}
	
	int max = arr[0];
	for(i=1; i<size; i++)
	{
		if(max<arr[i])
		max = arr[i];
	}
	printf("\nMaximum of array is : %d",max);
	
	int min = arr[0];
	for(i=1; i<size; i++)
	{
		if(min>arr[i])
			min = arr[i];
	}
	printf("\nMinimum of array is : %d",min);
	
}