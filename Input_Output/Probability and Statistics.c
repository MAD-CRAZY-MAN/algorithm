#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num, i;
	int sum = 0; 
	float devSum = 0;
	float devArr[90000];
	int arr[90000]; 
	float avg = 0, deviation = 0;
	
	printf("�� �� ������?: ");
	scanf("%d", &num);
	putchar('\n');
	
	for(i=0;i<num;i++)
	{
		arr[i] = ((rand() % 6) + 1);
		sum += arr[i];
	}
	avg = (float)sum / (float)num;
	
	for(i=0;i<num;i++)
	{
		devArr[i] = (float)arr[i] - avg; 
		devSum += pow(devArr[i], 2);
	}
	deviation = (float)devSum / (float)num;
	
	printf("���: %.2f\n", avg);
	printf("�л�: %.2f\n", deviation);
	printf("ǥ������: %.2f\n", sqrt(deviation));
	
}
