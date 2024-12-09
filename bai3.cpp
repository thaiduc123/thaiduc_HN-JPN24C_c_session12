#include<stdio.h>

int giaiThua(int n);
int main(){
	int result;
	int n;
	printf("Nhap vao so bay ki: ");
	scanf("%d", &n);
	result = giaiThua(n);
	printf("Giai thua cua so da nhap la: %d", result);
	return 0;
}

int giaiThua(int n){
	int result=1;
	for (int i=1; i<=n; i++){
		result*=i;
	}
	return result;
}

