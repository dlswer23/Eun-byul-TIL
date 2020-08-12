#include<stdio.h>


//문제 : 두 개의 정렬된 배열을 입력 받아, 오름차순으로 병합 정렬을 구하시오.

int A[10] = { 1, 3, 5, 7, 9, 11, 13, 16, 18, 20 };
int B[5] = { 2, 4, 6, 8, 12 };
int C[15];
int i, j, k;
int temp;

i = j = k = 0;

for (k = 0; k < 15; ) {
    if (A[i] > B[j]) C[k++] = B[j++]; // a와b를 비교하여 c에 값넣기
    else C[k++] = A[i++];

    if (i >= 10) { // a값 소진? b값 남았으면 나머지 c에 넣기
        for (; j < 5;) C[k++] = B[j++];
    }
    else if (j >= 5) { // b값 소진? a값 남았으면 나머지 c에 넣기
        for (; i < 10;) C[k++] = A[i++];
    }
}//for end

//result
puts("A배열");
for (i = 0; i < 10; i++) printf("%d ", A[i]);
puts("");
puts("B배열");
for (j = 0; j < 5; j++) printf("%d ", B[j]);
puts("");
puts("C배열");
for (k = 0; k < 15; k++) printf("%d ", C[k]);
puts("");

getchar(); //잠깐 멈춤 엔터치세요.

}