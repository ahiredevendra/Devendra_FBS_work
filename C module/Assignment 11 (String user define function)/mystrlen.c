int mystrlen(char*);
void main()
{
	char str[] = "devendra";
	
	int x = mystrlen(str);
	
	printf("Length of string is : %d",x);
}
int mystrlen(char* str)
{
	int i=0;
	
	while(str[i]!='\0')
	{
		i++;
	}
	
	return i;
}