void operation(int*, int*);
void main()
{
	int x;
	printf("Enter no1 : ");
	scanf("%d",&x);
	
	int y;
	printf("Enter no1 : ");
	scanf("%d",&y);
	
	operation(&x, &y);
}

void operation(int* a, int* b)
{
	
	char op;
	printf("Enter operator : ");
	scanf(" %c",&op);

	int calc;
		
	if(op == '+' || op == '-' || op == '*' || op == '/' || op == '%')
	{
		if(op == '+'){
			calc = *a+*b;
			printf("%d",calc);
		}
		else{
			if(op == '-'){
				calc = *a-*b;
				printf("%d",calc);
			}
			else{
				if(op == '*'){
					calc = *a**b;
					printf("%d",calc);
				}
				else{
					if(op == '/'){
						calc = *a / *b;
						printf("%d",calc);
					}
					else{
						if(op == '%'){
							calc = *a%*b;
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