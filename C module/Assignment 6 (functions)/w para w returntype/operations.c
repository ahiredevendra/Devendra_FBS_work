int operation(int, int);
void main()
{
	int x;
	printf("Enter no1 : ");
	scanf("%d",&x);
	
	int y;
	printf("Enter no1 : ");
	scanf("%d",&y);
	
	int p = operation(x, y);
	
	if(p==0)
		printf("invalid input");
	else
		printf("%d",p);
		
	
	
}

int operation(int a, int b)
{
	
	char op;
	printf("Enter operator : ");
	scanf(" %c",&op);
	
	int calc;
	
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