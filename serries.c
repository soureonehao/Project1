#include<stdio.h>
void main() {
	int Fibonacci[20], i;	//����һ��Ԫ�ظ���Ϊ20����������
	Fibonacci[0] = 1;
	Fibonacci[1] = 1;	//Ϊ��һ���͵ڶ���Ԫ�س�ʼ��ֵΪ1
	for (i = 0; i < 20; i++) {	//ѭ������
		if (i >= 2) {	//��������Ԫ��ֵ����ǰ����Ԫ��ֵ֮��
			Fibonacci[i] = Fibonacci[i - 2] + Fibonacci[i - 1];
		}
		printf("Fibonacci���й�ʽǰ20������%d, ", Fibonacci[i]);
	}
}