#include<stdio.h>

int main() {
    int num[5] = { 3, 5, 1, 4, 2 }; //배열선언
    int i, j, temp = 0;

    printf("전 : ");

    for (i = 0; i < 5; i++) {
        printf("%d  ", num[i]);
    }
    printf("\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (num[j] > num[j + 1]) {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    printf("후 : ");
    for (i = 0; i < 5; i++) {
        printf("%d  ", num[i]);
    }
    printf("\n");
}
