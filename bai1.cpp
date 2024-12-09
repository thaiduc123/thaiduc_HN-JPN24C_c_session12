#include<stdio.h>

int caculateSum();
int main(){
	int sum;
	sum=caculateSum();
	printf("Tong hai so la: %d", sum);
	return 0;
}

int	caculateSum(){
	int num1, num2;
	int sum;
	printf("Nhap so dau tien: ");
	scanf("%d", &num1);
	printf("Nhap so thu hai: ");
	scanf("%d", &num2);
	sum = num1 + num2;
	return sum;
}
