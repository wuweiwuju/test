#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 9;
	float* pFloat = (float*)& n;

	printf("n的值为：%d\n", n);//9

	printf("*pFloat的值为：%f\n", *pFloat);//0
	//00000000 00000000 00000000 00001001 - n
	//0 00000000 00000000000000000001001
	//可看到E全为0（读取的话）
	//（-1）^0 * 0.0000000000000000001001 * (2)^-126
	//float读取后六位那必然是0.000000

	*pFloat = 9.0;

	printf("num的值为：%d\n", n);
	//1001
	//(-1)^0 * 1.001 * 2^3
	//s = 0    E = 3+127   M = 00100000000000000000000
	//0 10000010 00100000000000000000000
	//%d读取的话（原反补相同因此） 就是上面二进制转化为10进制的数

	printf("*pFloat的值为：%f\n", *pFloat);//9.000000
	return 0;
}