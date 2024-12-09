#include <stdio.h>

int findMax(int arr[], int n);
int main() {
    int n; 
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n]; 
    for (int i = 0; i < n; i++){
        printf("nhap phan tu thu %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int max = findMax(arr, n);
    printf("So lon nhat trong mang la: %d", max);

    return 0;
}

int findMax(int arr[], int n) {
    int max=arr[0]; 
    for (int i=0; i<n; i++) {
        if (arr[i] > max) {
            max=arr[i];
        }
    }
    return max;
}

