#include<stdio.h>
void main() {
	int Fibonacci[20], i;	//定义一个元素个数为20的整形数组
	Fibonacci[0] = 1;
	Fibonacci[1] = 1;	//为第一个和第二个元素初始化值为1
	for (i = 0; i < 20; i++) {	//循环遍历
		if (i >= 2) {	//当第三个元素值等于前两个元素值之和
			Fibonacci[i] = Fibonacci[i - 2] + Fibonacci[i - 1];
		}
		printf("Fibonacci数列公式前20个数：%d, ", Fibonacci[i]);
	}
}