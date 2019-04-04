#include <stdio.h>
#define SIZE 10000
#define BOTTOM -1

void Menu(void);
void Push(int *data, int *top, int *stack);
void Pop(int *top, int *stack);

int main(void)
{
	int stack[SIZE];
	int top = -1, data;
	
	char command[20] = { 0 };
	Menu();

	while (strcmp(command, "quit"))
	{
		printf("%s", "명령을 입력해주세요: ");
		scanf_s("%s", command, sizeof(command));

		if (strcmp(command, "push") == 0)
		{
			printf("%s", "PUSH할 데이터를 입력하시오: ");
			scanf_s("%d", &data);
			Push(&data, &top, stack);
			putchar('\n');
		}
		else if (strcmp(command, "pop") == 0)
		{
			if (top == -1)
			{
				printf("%d", -1);
			}
			else
				Pop(&top, stack);
		}
		else if (strcmp(command, "size") == 0)
		{
			printf("Stack 데이터의 개수는 %d개이다.\n\n", top + 1);
		}
		else if (strcmp(command, "empty") == 0)
		{
			if (top == -1)
				printf("%d\n\n", 1);
			else
				printf("%d\n\n", 0);
		}
		else if (strcmp(command, "top") == 0)
		{
			if (top == -1)
				printf("%d\m", -1);
			else
				printf("%d\n", stack[top]);
		}
		else
		{
			printf("%s", "잘못된 명령입니다.\n\n");
		}
	}
	return 0;
}

void Push(int *data, int *top, int *stack)
{
	stack[++*top] = *data;
}

void Pop(int *top, int *stack)
{
	printf("%d\n", stack[*top]);
	(*top)--;
}

void Menu(void)
{
	printf("%s", "     STACK PROGRAM     \n");
	printf("%s", "======명령어 종류======\n");
	printf("%s", "push : 데이터 삽입\n");
	printf("%s", "pop : 데이터 삭제, 출력\n");
	printf("%s", "size : 스택 사이즈 출력\n");
	printf("%s", "empty : 데이터가 비었다면 1, 있다면 0 출력\n");
	printf("%s", "top: TOP위치 데이터 출력\n");
	printf("%s", "quit : 프로그램 종료\n");
	printf("%s", "=======================\n");
}