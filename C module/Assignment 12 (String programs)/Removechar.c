//WAP to Remove the nth Index Character from a Non-Empty String

void main()
{
	int size;
	printf("Enter size of string : ");
	scanf("%d",&size);
	
	char str[size];
	printf("Enter a string : ");
	scanf("%s",str);
	
	int n;
	printf("Enter which index character you want to remove : ");
	scanf("%d",&n);
	
	for(int i=0; i<size; i++)
	{
		if(i==n)
		{
			while(i<size-1)
			{
			str[i] = str[i+1];
			i++;
			}
		}
	}
	
	printf("%s",str);
}