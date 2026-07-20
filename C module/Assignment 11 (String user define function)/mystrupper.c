char* mystrupper(char*);
void main()
{
	char str[] = "devendra";
	
	mystrupper(str);
	
	printf("%s",str);
}
char* mystrupper(char* ptr)
{
	int i = 0;
	while(ptr[i]!='\0')
	{
		if(ptr[i]>=97 && ptr[i]<=122)
		{
			ptr[i] = ptr[i]-32;
		}
		i++;
	}
	return ptr;
}