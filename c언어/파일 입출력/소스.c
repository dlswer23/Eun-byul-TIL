#include<stdio.h>

int main() {

	char str[20] = { 0,};
	FILE* fp = fopen("hello2.txt", "w+");
	fputs("Lee",fp);
	fflush(fp);
	rewind(fp);
	fgets(str, 20, fp);
	fputs(str);
	fclose(fp);	
}