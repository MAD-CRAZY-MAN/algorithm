#include <stdio.h>
#include <math.h>

/*
double average(double a, double b, double c);
double std_deviation(double a, double b, double c);

int main()
{
	double a, b, c;
	double ave;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	ave = average(a, b, c);
	printf("%lf\n", ave);
	
	a = a - ave;
	b = b - ave;
	c = c - ave;
	 
	printf("Standard deviation is %lf.\n", std_deviation(a, b, c));
	
	return 0;
}

double std_deviation(double a, double b, double c)
{
	double var; //분산 
	double dev; // 표준편차 
	var = (pow(a, 2) + pow(b, 2) + pow(c, 2)) / 3;
	
	dev = sqrt(dev);
	return dev;
 } 
 
double average(double a, double b, double c)
{
	double ave;	
	ave = (a + b + c) / 3;

	return ave;
}*/

/*
double round_up(double n);

int main()
{
	 double input;
	scanf("%lf", &input);
	
	printf("%.1lf\n", round_up(input));
	
	return 0;
}

double round_up(double n)
{
	n += 0.5;
	return floor(n);	
}*/

/*
char to_upper_case(char ch);

int main(void)
{
	char alp;
	scanf("%c", &alp);
	
	printf("%c\n", to_upper_case(alp));
	
	return 0;
}

char to_upper_case(char ch)
{
	ch -= 32;
	
	return ch;
} */

/*
int abs(int num);

int main(void)
{
	int num;
	scanf("%d", &num);
	
	num = abs(num);
	printf("%d\n", num);
	
	return 0;	
}

int abs(int num)
{
	num = num > 0 ? num : -num;
	
	return num;
}
*/

/*
int main(void)
{
	char ch;
	scanf("%c", &ch);
	
	if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)
	{
		printf("It is alp\n");
	}
	else if(ch >= 48 && ch <= 57)
	{
		printf("It is number\n");
	}
	
	return 0;
}*/

/*
int main(void)
{
	int num;
	scanf("%d", &num);
	
	if(num & 1)
		printf("홀수 입니다.\n");
	else
		printf("짝수 입니다.\n");
	
	return 0;
}*/

/*
int is_digit(int ch);

int main(void)
{
	int num;
	
	printf("3개의 문자를 입력하세요: ");
	num = is_digit(num);
	printf("숫자는%d개 입니다.\n", num);
	
	return 0;
}

int is_digit(int ch)
{
	char a, b, c;
	int num = 0;
	
	scanf("%c%c%c", &a, &b, &c);
	
	if(a >= 48 && a <= 57)
		num++;
	if(b >= 48 && b <= 57)
		num++;
	if(c >= 48 && c <= 57)
		num++;
	
	return num;
}*/
