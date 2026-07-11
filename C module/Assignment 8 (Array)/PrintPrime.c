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
	
	for(i=0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}
	
	int j;
	printf("\nPrime numbers are = ");
	for(i=0; i<size; i++)
	{
		int flag = 0;
		for(j=2; j<arr[i]/2; j++)
		{
			if(arr[i]%j==0)
			{
				flag = 1;
				break;
			}
		}
		if(flag==0)
			printf("%d ",arr[i]);
	}
}