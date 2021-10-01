#include <stdio.h>
#include <limits.h>

#define INITIAL (UINT_MAX / 8 + 2)

int main() {
	unsigned int i = INITIAL;

	while (i >= INITIAL) {
		printf("%u >= %u\n", i, INITIAL);
		i *= 2;
	}
	printf("%u < %u\n", i, INITIAL);
}
