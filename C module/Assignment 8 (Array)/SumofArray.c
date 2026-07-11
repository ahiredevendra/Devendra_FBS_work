void main()
{
	int size,i;
	printf("Enter size of array : ");
	scanf("%d",&size);
	
	int arr[size];
	
	printf("Enter elements : \n");
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}
	
	int sum = 0;
	for(i=0; i<size; i++)
	{
		sum = sum+arr[i];
	}
	printf("\nSum of Array is = %d",sum);
}