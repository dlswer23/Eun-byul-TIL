#include<stdio.h>
#include<string.h>

struct adress
{
	char name[20];
	char addr[80];
};

void input(struct adress *data,int n)
{
	int i;
	for (i = 0; i < n; i++)
		scanf("%s %s", (data + i)->name, (data + i)->addr);
}

void output(struct adress *data,int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%s %s", (data + i)->name, (data + i)->addr);
}
void main()
{
	struct adress data[3];

	input(data, 3);

	output(data, 3);
}