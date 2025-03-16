#include <stdio.h>
#include <stdlib.h>
#include <cxxabi.h>

int main() {
	const char *mangledName = "_ZNK3MapI10StringName3RefI8GDScriptE10ComparatorIS0_E16DefaultAllocatorE3hasERKS0_";
	int status = -1;
	char *demangledName = abi::__cxa_demangle(mangledName, NULL, NULL, &status);
	printf("Demangled: %s\n", demangledName);
	free(demangledName);
	return 0;
}
