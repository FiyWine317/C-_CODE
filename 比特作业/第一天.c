#define _CRT_SECURE_NO_WARNINGS
//求两个数的较大值,写一个函数求两个整数的较大值
// 输入：10 20,输出较大值：20
#include<stdio.h>
int bijiao(int a,int b)
{
	return (a > b) ? a:b;
}
int main()
{
	int a = 10, b = 20;
	printf("%d",bijiao(a, b));
	return 0;
}
