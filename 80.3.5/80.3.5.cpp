#include<stdio.h>
int main()
{
	int a, b, d{};
	char m;
	printf("输入符号:\n");
	scanf_s("%c", &m);
	printf("两个数:\n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	if (m == '+')
	{printf("%d%c%d=%d", a, m, b, a + b);}
	if (m == '-')
	{printf("%d%c%d=%d", a, m, b, a - b);}
	if (m == '*')
	{printf("%d%c%d=%d", a, m, b, a * b);}
	if (m == '/')
	{printf("%d%c%d=%d", a, m, b, a / b);}
	if (m == '%')
	{printf("%d%c%d=%d", a, m, b, a % b);}
}