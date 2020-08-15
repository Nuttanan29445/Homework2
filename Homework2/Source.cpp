#include <stdio.h>
int main()
{
	int num,sum=0;
	printf("Please input number:");
	scanf_s("%d", &num);
	for (int i = 0; i <= num; i++) 
	{
		sum += i;
	}
	printf("Summary number of 1 to %d = %d",num, sum);
	return 0;
}