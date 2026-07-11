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
	
	for(i=0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}
	
	printf("\nOdd numbers are = ");
	for(i=0; i<size; i++)
	{
		if(arr[i]%2!=0)
		{
			printf("%d ",arr[i]);
		}
	}
	
	printf("\nEven numbers are = ");
	for(i=0; i<size; i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d ",arr[i]);
		}
	}

}