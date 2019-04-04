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
		printf("%s", "����� �Է����ּ���: ");
		scanf_s("%s", command, sizeof(command));

		if (strcmp(command, "push") == 0)
		{
			printf("%s", "PUSH�� �����͸� �Է��Ͻÿ�: ");
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
			printf("Stack �������� ������ %d���̴�.\n\n", top + 1);
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
			printf("%s", "�߸��� ����Դϴ�.\n\n");
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
	printf("%s", "======��ɾ� ����======\n");
	printf("%s", "push : ������ ����\n");
	printf("%s", "pop : ������ ����, ���\n");
	printf("%s", "size : ���� ������ ���\n");
	printf("%s", "empty : �����Ͱ� ����ٸ� 1, �ִٸ� 0 ���\n");
	printf("%s", "top: TOP��ġ ������ ���\n");
	printf("%s", "quit : ���α׷� ����\n");
	printf("%s", "=======================\n");
}