﻿#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 20;
//	int b = -10;
//	return 0;
//}
//判断大小端
#include<stdio.h>
//int check_sky(int i)
//{
//	return (*(char*)(&i));
//}
//int check_sky()
//{
//	union un
//	{
//		int i;
//		char j;
//	}un;
//	un.i = 3;
//	return un.j;
//}
//int main()
//{
//	int ret = check_sky();
//	if (ret == 3)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}
//输出什么？
//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	//11111111 11111111 11111111 11111111
//	//11111111  a
//	//11111111  b
//	//11111111  c
//	printf("a=%d,b=%d,c=%d", a, b, c);// -1   -1    255
//	//11111111 11111111 11111111 11111111 a
//	//11111111 11111111 11111111 11111111 b
//	//00000000 00000000 00000000 11111111 c
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char a = -128;
//	//10000000 00000000 00000000 10000000
//	//11111111 11111111 11111111 01111111
//	//11111111 11111111 11111111 10000000
//	//10000000 - a//有符号位整型提升
//	//11111111 11111111 11111111 10000000 补码
//	printf("%u\n", a);//打印原反补相同
//	return 0;
//}

//#include <stdio.h>
//#include<Windows.h>
//int main()
//{
//	//char a = 128;//a存不到128，%d打印出来会是-128  范围(-128 到 127)
//	////00000000 00000000 00000000 10000000
//	////10000000//依旧将1当成符号位
//	////11111111 11111111 11111111 10000000
//	//printf("%u\n", a);
//	//return 0;
//
//	//int i = -20;
//	//unsigned int j = 10;
//	////10000000 00000000 00000000 00010100
//	////11111111 11111111 11111111 11101011
//	////11111111 11111111 11111111 11101100 - i
//	////00000000 00000000 00000000 00001010 - j
//	////11111111 11111111 11111111 11110110 - i+j
//	////11111111 11111111 11111111 11110101 先减一
//	////10000000 00000000 00000000 00001010 再取反
//	//printf("%d\n", i + j);//-10
//	////按照补码的形式进行运算，最后格式化成为有符号整数
//
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		Sleep(100);
//		printf("%u\n", i);//无线循环
//	}
//
//}
//#include<stdio.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//-1 -2 -3 ...... -127 -128 127 126 ....... 3 2 1 0 后面有'\0'
//	//-1 -2 -3 ...... -127 -128 127 126 ....... 3 2 1 0............
//	printf("%d", strlen(a));//碰到\0停下 所以是255
//	return 0;
//}
//
//#include <stdio.h>
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}