#include<stdio.h>


//���� : �� ���� ���ĵ� �迭�� �Է� �޾�, ������������ ���� ������ ���Ͻÿ�.

int A[10] = { 1, 3, 5, 7, 9, 11, 13, 16, 18, 20 };
int B[5] = { 2, 4, 6, 8, 12 };
int C[15];
int i, j, k;
int temp;

i = j = k = 0;

for (k = 0; k < 15; ) {
    if (A[i] > B[j]) C[k++] = B[j++]; // a��b�� ���Ͽ� c�� ���ֱ�
    else C[k++] = A[i++];

    if (i >= 10) { // a�� ����? b�� �������� ������ c�� �ֱ�
        for (; j < 5;) C[k++] = B[j++];
    }
    else if (j >= 5) { // b�� ����? a�� �������� ������ c�� �ֱ�
        for (; i < 10;) C[k++] = A[i++];
    }
}//for end

//result
puts("A�迭");
for (i = 0; i < 10; i++) printf("%d ", A[i]);
puts("");
puts("B�迭");
for (j = 0; j < 5; j++) printf("%d ", B[j]);
puts("");
puts("C�迭");
for (k = 0; k < 15; k++) printf("%d ", C[k]);
puts("");

getchar(); //��� ���� ����ġ����.

}