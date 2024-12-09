#include <stdio.h>

int perfectNumber(int n);
int main(){
    int num1,num2;
    printf("Nhap vao so dau tien: ");
    scanf("%d", &num1);
    printf("Nhap vao so thu hai: ");
    scanf("%d", &num2);
    if (perfectNumber(num1)){
        printf("true");
    } else {
        printf("false");
    }
	printf("\n");
	if (perfectNumber(num2)) {
        printf("true");
    } else {
        printf("false");
    return 0;
	}
    return 0;
}

int perfectNumber(int n){
    if (n <= 0) {
        return 0;
    }
    int sum=0; 
    for (int i=1; i<=n/2; i++){
        if (n%i==0) {
            sum+=i; 
        }
    }
    return (sum==n);
}
