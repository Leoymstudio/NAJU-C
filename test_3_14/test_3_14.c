#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�Ѿ��̶���a,b��ֵ
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	c = a, a = b, b = c;
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//}


//���������a,b��ֵ
int main()
{
	int a, b;
	a = b = 0;
	scanf("%d%d", &a, &b);
	int c = 0;
	c = a, a = b, b = c;
	printf("a=%d\n", a);
	printf("b=%d\n", b); 
	return 0;
}