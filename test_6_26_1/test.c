#define _CRT_SECURE_NO_WARNINGS 1
//判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC

#include<stdio.h>

#include<stdlib.h>

#include<string.h>

void  reverse(char* start, char* end) 
{

	while (start < end) 
	{

		char temp = *start;

		*start = *end;

		*end = temp;

		start++;

		end--;

	}

}

void  left_rotate(char* str, int k) 
{

	int  len = strlen(str);

	//旋转前k个字符

	reverse(str, str + k - 1);

	//旋转剩余的字符串

	reverse(str + k, str + len - 1);

	//旋转整体

	reverse(str, str + len - 1);

}

int is_rotate(char* dest, char* src)
{

	if (strlen(dest) != strlen(src)) 
	{

		return 0;

	}

	if (!strcmp(dest, src)) 
	{

		return 1;

	}

	int  k = strlen(dest);

	k--;

	while (k--) 
	{

		//每次旋转一次

		left_rotate(src, 1);

		//判断旋转之后的内容是否和目标一致

		if (!strcmp(dest, src))
		{

			return 1;

	    }

	}

	return  0;

}

int  main() 
{

	char dest[100];

	char src[100];

	scanf("%s", &dest);

	scanf("%s", &src);

	printf("%d\n", is_rotate(dest, src));

	system("pause");

	return 0;

}
