#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*
int main()
{
	int input;
	int sum = 0;
	int i;
	scanf("%d", &input);
	
	for(i=1; i<=input;i++)
	{
		if(i%5 == 0)
			continue;
		sum += i;
	}
	printf("%d\n", sum);
	
	return 0;
}*/

/*
int main()
{
	int num = 9;
	int sum = 9;
	int a;
	int i;
	for(i=1; i<5; i++)
	{
		sum += 9 * pow(10, i)+ num;
		num = 9 * pow(10, i)+ num;
	}
	printf("%d", sum);
}
*/
/*
int main()
{
	int input, num;
	scanf("%d", &input);
	int sum = 0, i;
	for(i=0;i<4;i++)
	{
		num = input % 10;
		input -= num;
		input /= 10;
		sum += num;
	}
	printf("%d", sum);
}*/
/*
int narciss();

int main()
{
	int rec;
	
	rec = narciss();
	
	if(rec == 0)
		printf("It is not NNAN\n");
	else
		printf("It is NNAN\n");
	
}

int narciss()
{
	int sum, i;
	int input1, input2, input3;
	int NNAN;
	
	scanf("%d %d %d", &input1, &input2, &input3);
	NNAN = input1 * 100 + input2 * 10 + input3;
	
	for(i=1;i<99;i++)
	{
		sum = 0;
		sum += pow(input1, i); 
		sum += pow(input2, i);
		sum += pow(input3, i);
		
		if(NNAN == sum)
			break;
	}
	
	if(i>=99)
		return 0;
	else
		return 1;
}*/
/*
int main(void)
{
	int key, i;
	char str[10] = {0, };
	printf("키 값을 입력하세요: ");
	scanf("%d", &key);
	
	printf("텍스트를 입력하세요: ");
	scanf(" %[^\n]", str);

	for(i=0;i<10;i++)
	{
		if(str[i] == NULL)		
				break;		

		str[i] = (str[i] + key) % 128;
	}
	printf("암호화된 텍스트: %s", str);
	

}*/
