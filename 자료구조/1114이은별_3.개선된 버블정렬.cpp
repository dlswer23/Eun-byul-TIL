#include <stdio.h>


int main() {
    int arr[10] = { 9, 5, 3, 6, 10, 1, 8, 2, 4, 7 };
    int len = sizeof(arr) / sizeof(int);
    int temp;
    int flag = 1;

    printf("Before : ");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < len - 1; i++) {
        flag = 0;
        for (int j = 0; j < len - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                flag = 1;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if (flag == 0) {
            break;
        }
    }

    printf("After : ");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}