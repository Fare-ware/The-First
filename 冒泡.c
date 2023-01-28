#include<stdio.h>
void bs(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j<sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
}
int main()
{
	int arr[] = { 1,6,5,3,7,9 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bs(arr, sz);
		for (i = 0; i < sz; i++)
		{
			printf("%d", arr[i]);
		}
	return 0;
}