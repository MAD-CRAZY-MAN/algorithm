/* Baekjoon 10845 ť ���� */ 

#include <stdio.h>
#include <string.h>
#define QUEUE_SIZE 10000

int main(void)
{
	int queue[QUEUE_SIZE];
	int front = 0, rear = 0;
	int data, size = 0;
	char command[10] = { 0 };
    int command_Counter;
    printf("����� ������ �Է��ϼ���"); 
    scanf("%d", &command_Counter);
    
	while (command_Counter)
	{
		printf("����� �Է��ϼ���: ");
		scanf("%s", command);

		if (!(strcmp(command, "push")))
		{
			printf("������ �����͸� �Է��ϼ���:  ");
			scanf("%d", &data);
			queue[++rear] = data;
		}
		else if (!(strcmp(command, "pop")))
		{
			if (front == rear)
				printf("%d\n", -1);
			else
				printf("%d\n", queue[++front]);
		}
		else if (!(strcmp(command, "empty")))
		{
			if(front == rear)
				printf("%d\n", 1);
		    else
                printf("%d\n", 0);
        }
		else if (!(strcmp(command, "size")))
		{
			if (front < rear)
			{
				size = rear - front;
				printf("%d\n", size);
			}
			else if (front > rear)
			{
				size = rear + QUEUE_SIZE - front;
				printf("%d\n", size);
			}
			else if (front == rear)
			{
				printf("%d\n", 0);
			}
		}
        else if (!(strcmp(command, "front")))
        {
            if(front == rear)
                printf("%d\n", -1);
            else
            {
                printf("%d\n", queue[++front]);
                front--;
            }
        }
        else if (!(strcmp(command, "back")))
        {
            if(front == rear)
                printf("%d\n", -1);
            else 
             printf("%d\n", queue[rear]);
        }
        command_Counter--;
	}
	
		return 0;
}
