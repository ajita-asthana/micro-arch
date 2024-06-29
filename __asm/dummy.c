#include <stdio.h>

int global_var = 42;

void func() {
	printf("Hello World!\n");
}

int main() {
	func();
	return 0;
}
