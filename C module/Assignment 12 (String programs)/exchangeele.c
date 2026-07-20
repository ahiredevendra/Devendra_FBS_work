//WAP to Form a New String where the First Character and the Last Character have been Exchanged

char* Exchange(char*);
void main()
{
	char str[] = "devendra";
	
	char* n = Exchange(str);
	
	printf("%s",n);
}
char* Exchange(char* ptr)
{
	char temp = ptr[0];
	
	int x = strlen(ptr);
	
	ptr[0] = ptr[x-1];
	ptr[x-1] = temp;
	
	return ptr;
}