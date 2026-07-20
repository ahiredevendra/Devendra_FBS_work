//WAP Replace all Occurrences of ‘a’ with $ in a String

void main()
{
	int size;
	printf("Enter size of string : ");
	scanf("%d",&size);
	
	char str[size];
	printf("Enter a string : ");
	scanf("%s",str);
	
	for(int i=0; i<size; i++)
	{
		if(str[i]=='a')
		{
			str[i] = '$';
		}
	}
	
	printf("%s",str);
}