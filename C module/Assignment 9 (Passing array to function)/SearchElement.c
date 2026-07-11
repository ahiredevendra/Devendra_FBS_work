void SearchElement(int* brr,int size);
void display(int*, int);
void main()
{
	int size;
	printf("Enter size of array : ");
	scanf("%d",&size);
	
	int arr[size];
	
	printf("Enter elements :\n");
	
	int i;
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	display(arr,size);
	
	SearchElement(arr,size);
}
void display(int* brr, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("%d ",brr[i]);
	}
}
void SearchElement(int* brr,int size)
{
	int i;
	
	int ele;
	printf("\nEnter element you want to search : ");
	scanf("%d",&ele);
	 
	int flag = 0;
	for(i=0; i<size; i++)
	{
		if(ele==brr[i])
		{
			printf("Found at index number %d\n",i);
			flag = 1;
		}
	}
	if(flag==0)
		printf("Element not found");
}