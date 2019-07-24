#include <stdio.h>

int main()
{
	float test;
	scanf("%f", &test);
	
	printf("%d", (int)test);

	return 0;
}

int main()
{
	char a, b ,c;
	scanf("%c%c%c", &a, &b, &c);
	printf("이니셜은 %c%c%c입니다.\n", a, b, c);
}

int main()
{
	int time;
	int hour, min, sec;
	printf("초를 입력하세요: ");
	scanf("%d", &time);
	
	hour = time / 3600;
	time -= hour * 3600;
	
	min = time / 60;
	time -= min * 60;
	
	sec = time;
	
	printf("이것은 %d시간, %d분, %d초입니다.\n", hour, min, sec);
	
	return 0;
}

int main()
{
	int a;
	int chk1 = 0, chk2 = 0;
	printf("숫자를 입력하세요: ");
	scanf("%d", &a);
	if(!(a%5))
		chk1 = 1;
	if(!(a%6))
		chk2 = 1;
		
	if(chk1 || chk2)
		printf("1 ");
	else
		printf("0 ");
			
	if(chk1 && chk2)
		printf("1 ");
	else
	 	printf("0 \n");
}

int main()
{
	int money = 0;
	int w500, w100, w50, w10;
	printf("입력: ");
	scanf("%d", &money);
	w500 = money / 500;
	money %= 500;
	
	w100 = money / 100;
	money %= 100;
	
	w50 = money / 50;
	money %= 50;
	
	w10 = money / 10;
	money %= 10;
	
	printf("출력: 500원 %d개, 100원 %d개, 50원 %d개, 10원 %d개", w500, w100, w50, w10);
	
	return 0;
}
