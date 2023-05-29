#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void test(int arr[])
{
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr[0]));
}

int main()
{
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr[0]));
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
	test(arr);
	return 0;

}