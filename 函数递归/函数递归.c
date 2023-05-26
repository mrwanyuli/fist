#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int my_strlen(char* str)
{
	//int count = 0;
	//while(*str != '\0')
	//{
	//	count++;
	//	str++;
	//}
	//return count;
	if(*str != '\0')
	{
		return 1 + my_strlen(str+1);
	}
	return 0;

}

int main()
{
	char arr[] = "adc";//其中abc\0  有4个字符
	int len = my_strlen(arr);
	printf("%d", len);

	return 0;
}