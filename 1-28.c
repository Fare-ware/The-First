#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	scanf("%d", &a);
	int i = 0;
	int count = 0;
	for (i = 0; i <32; i++)
	{
		if ((a >> i) & 1 == 1)
			count++;
	}
	printf("%d", count);
	return 0;
}