void main()
{
	int a = 10;
	int b = 30;
	int calc;
	
	int op = '/';
	
	if(op == '+' || op == '-' || op == '*' || op == '/' || op == '%')
	{
		if(op = '+'){
			calc = a+b;
			printf("%d",calc);
		}
		else{
			if(op = '-'){
				calc = a-b;
				printf("%d",calc);
			}
			else{
				if(op = '*'){
					calc = a*b;
					printf("%d",calc);
				}
				else{
					if(op = '/'){
						calc = a/b;
						printf("%d",calc);
					}
					else{
						if(op = '%'){
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