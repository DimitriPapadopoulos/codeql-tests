#include <stdio.h>
#include <inttypes.h>

int main() {
	uint64_t denom = UINT64_MAX/2+1;
	printf("denom = %"PRIu64"\n", denom);
	denom *= 2;
	printf("denom = %"PRIu64"\n", denom);
	if (denom == 0)
		printf("WHAT?!?");
}
