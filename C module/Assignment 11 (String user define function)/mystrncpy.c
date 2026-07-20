char* mystrncpy(char*, char*, int);
void main()
{
	char str1[20];
	char str2[] = "devendra";
	
	int n;
	printf("Enter how many characters you want to copy : ");
	scanf("%d",&n);
	
	mystrncpy(str1,str2,n);
	
	printf("%s",str1);
}
char* mystrncpy(char* ptr1, char* ptr2, int x)
{
	int i;
	for(i=0; i<x; i++)
	{
		ptr1[i] = ptr2[i];
	}
	ptr1[i] = '\0';
	
	return ptr1;
}