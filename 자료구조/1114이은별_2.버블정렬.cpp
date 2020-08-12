#include <stdio.h>


int main() {
    int arr[10] = { 10,9,6,3,8,5,2,7,4,1};
    int a = sizeof(arr) / sizeof(int);
    int temp;

    printf("Àü : ");
    for (int i = 0; i < a; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < a - 1; i++) {
        for (int j = 0; j < a - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("ÈÄ : ");
    for (int i = 0; i < a; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}