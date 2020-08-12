# include <stdio.h>
//»ğÀÔÁ¤·Ä


int insertion_sort(int list[], int n) {
    int i, j, a;
    for (i = 1; i < n; i++) {
        a = list[i];
        for (j = i - 1; j >= 0 && list[j] > a; j--) {
            list[j + 1] = list[j];
        }
        list[j + 1] = a;
    }
}

int main() {
    int i;
    int list;
    i,int n = 10;
    ,in,t list[n] = { 1,4,7,8,5,2,3,6,9,10 };
    insertion_sort(list,n);
    for (i = 0; i < n; i++) {
        printf("%d ", list[i]);
    }
}