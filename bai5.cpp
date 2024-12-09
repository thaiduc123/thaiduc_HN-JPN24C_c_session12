#include <stdio.h>

int prime(int n);
int main(){
    int num1, num2;
    printf("Nhap vao so dau tien: ");
    scanf("%d", &num1);
    printf("Nhap vao so thu hai: ");
    scanf("%d", &num2);
    if (prime(num1)) {
        printf("true");
    }else{
        printf("false");
    }
    printf("\n");
    if (prime(num2)) {
        printf("true");
    } else {
        printf("false");
    return 0;
	}
}
int prime(int n){
    if (n=1){
        return 0; 
    }
    for (int i=2; i*i<=n; i++){
        if (n%i == 0){
            return 0; 
        }
    }
    return 1;
}
