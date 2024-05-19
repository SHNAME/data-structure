#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_hello()
{
	printf("hello\n");
}

void print_hi()
{
	printf("hi\n");

}

void print_str(char* str)
{
	printf("%s\n", str);
}
int main()
{

	print_hello();
	print_hi();
	print_hello();
	print_hi();
	print_str("no one lives forever.");
	print_str("valar morghulis");

	return 0;
}