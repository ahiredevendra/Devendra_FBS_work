void operation();
void main()
{
	
	operation();
}

void operation()
{
	int a = 10;
	printf("Enter no1 : ");
	scanf("%d",&a);
	
	int b = 30;
	printf("Enter no1 : ");
	scanf("%d",&b);
	
	char op;
	printf("Enter operator : ");
	scanf(" %c",&op);
	
	int calc;
	
	if(op == '+' || op == '-' || op == '*' || op == '/' || op == '%')
	{
		if(op == '+'){
			calc = a+b;
			printf("%d",calc);
		}
		else{
			if(op == '-'){
				calc = a-b;
				printf("%d",calc);
			}
			else{
				if(op == '*'){
					calc = a*b;
					printf("%d",calc);
				}
				else{
					if(op == '/'){
						calc = a/b;
						printf("%d",calc);
					}
					else{
						if(op == '%'){
							calc = a%b;
							printf("%d",calc);
						}
					}
				}
			}
		}
	}
	else
	{
		printf("Invalid input");
	}
}