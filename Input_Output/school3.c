#include <stdio.h>

/*
int main()
{
	char str[10] = {0, };
	int dec, i = 0;
	
	printf("10진수를 입력해라: ");
	scanf("%d", &dec);
	
	for(i=0; i<10;i++)
	{
		str[i] = dec % 2;
		dec /= 2;
		if (dec < 1)
			break;
	}
	
	printf("2진수로는 이거다: ");
	for(;i>=0;i--)
		printf("%d", str[i]);
		
	putchar('\n');
	
	10 % 2 = 0
	5 %2 = 1
	2 % 2 = 0
	1 & 2 = 1
}*/

/*
int main(void)
{
	char str[20];
	int i = 0;
	int flag = 0;
	scanf("%[^\n]", str);
	
	while (str[i] != '\0')
	{
		if(str[i] == ' ')
		{
			flag = 1;
			i++;
		}
		
		else	
		{
			if(flag == 1)
			{
				printf(" ");
				flag = 0;
			}
			printf("%c", str[i]);
			i++;
		}
	}

}*/
/*
int main()
{
	char str[20];
	scanf("%s", str);
	int i;
	int num = 0;
	
	for(i=0;i<10;i++)
	{

		while(str[i + num] != '\0')
		{
			printf("%c", str[i+num]);
			num++;
		}
		putchar(' ');
		num = 0;		
	}
	//c co cod code         o od ode       d         de         e
}
*/
/*
void add(const int a, const int b, int *p);

int main()
{
	int a = 1, b = 3, c =0;
	int sum = 0;
	add(a, b, &c);

}

void add(const int a, const int b, int *p)
{
	*p = a + b;
	printf("%d\n", *p);
}*/

/*
void cyclic_swap(int *a, int *b, int *c);

int main()
{
	int a = 1, b = 2, c = 3;
	cyclic_swap(&a, &b, &c);
	printf("스왑후: %d %d %d", a, b, c);
}

void cyclic_swap(int *a, int *b, int *c)
{
	int temp;
	temp = *a;
	*a = *c;
	*c = *b;
	*b = temp;

}*/
