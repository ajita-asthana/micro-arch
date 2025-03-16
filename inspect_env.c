#define _GNU_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	int n;
	char *envstr;
	while((n = scanf("%as", &envstr)) != EOF) {
		putenv(envstr);
	}
	return 0;
}
