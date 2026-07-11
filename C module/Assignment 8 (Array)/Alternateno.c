void main()
{
	int size,i;
	printf("Enter array size : ");
	scanf("%d",&size);
	
	int arr[size];
	
	printf("Enter elements : ");
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}
	
	printf("\nAlternate numbers are = ");
	for(i=0; i<size; i++)
	{
		if(i%2==0)
			printf("%d ",arr[i]);
	}
	
}