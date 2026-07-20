char* mystrlower(char*);
void main()
{
	char str[] = "DEVENDRA";
	
	mystrlower(str);
	
	printf("%s",str);
}
char* mystrlower(char* ptr)
{
	int i = 0;
	while(ptr[i]!='\0')
	{
		if(ptr[i]>=65 && ptr[i]<=90)
		{
			ptr[i] = ptr[i]+32;
		}
		i++;
	}
	return ptr;
}