#include <stdio.h>
int main()
{
	//float a = 3.2;
	//float b = 2;
	//float c;
	//c = a / b;
	//printf("c=%f\n", c);

	int a = 3.2;
	int b = 2;
	int c = a / b;
	//int a=3.2,b=2
	printf("c=%d\n", c);
	float m = 3.5;
	int n;
	n = (int)m;
	printf("m=%f\nn=%d", m, n);
	return 0;
}

//'a'=97   char8位  转换为int 低八位显示为97 高八位为0
//标准C中int 为2 Byte
//1+'0'='1'
//+,-,*,/,%
//有浮点数参与相除，则输出浮点数
//实型常量是double型