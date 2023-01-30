#include<stdio.h>

struct str
{
	char name[20];
	int age;
};
int main()
{
	struct str s1 = { "lz",20 };
	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	return 0;
}