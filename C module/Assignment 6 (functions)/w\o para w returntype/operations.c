int operation();
void main()
{
	
	int x = operation();
	
	if(x==0)
		printf("invalid input");
	else
		printf("%d",x);
		
	
	
}

int operation()
{
	
	int calc;
	
	int a = 10;
	printf("Enter no1 : ");
	scanf("%d",&a);
	
	int b = 30;
	printf("Enter no1 : ");
	scanf("%d",&b);
	
	char op;
	printf("Enter operator : ");
	scanf(" %c",&op);
	
	if(op == '+' || op == '-' || op == '*' || op == '/' || op == '%')
	{
		if(op == '+'){
			calc = a+b;
		}
		else{
			if(op == '-'){
				calc = a-b;
			}
			else{
				if(op == '*'){
					calc = a*b;
				}
				else{
					if(op == '/'){
						calc = a/b;
					}
					else{
						if(op == '%'){
							calc = a%b;
						}
					}
				}
			}
		}
	return calc;
	}
	
	else
	{
		return 0;
	}
}