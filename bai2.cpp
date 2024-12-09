#include<stdio.h>

void array(int arr[], int n);
int main(){
	int n;
	int arr[100];
	printf("Nhap vao so luong phan tu: ");
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("Cac phan tu trong mang la: ");
	array(arr,n);
	return 0;
}

void array(int arr[], int n){
	for (int i=0; i<n; i++){
		printf("%d ", arr[i]);
    }
    printf("\n");
}

