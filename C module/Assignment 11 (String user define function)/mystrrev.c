char* mystrrev(char*);
void main()
{
	char str[] = "devendra";
	
	mystrrev(str);
	printf("%s",str);
}
char* mystrrev(char* ptr)
{
	int x = strlen(ptr);
	int n = x/2;
	
	for(int i=0; i<n; i++)
	{
		char temp = ptr[x-i-1];	
		ptr[x-i-1] = ptr[i];
		ptr[i] = temp;
	}
	
	return ptr;
}