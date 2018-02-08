#include <stdio.h>
#include <stdlib.h>

void DumpBitset(char bitset)
{
    long ii;
    char bitmask;

    bitmask = 1 << 7;

    for (ii=1; ii<=8; ii++)
    {
	char *bit = ((bitset & bitmask) == 0) ? "0" : "1";

	printf("%s", bit);

	bitset <<= 1;
    }

    printf("\n");

    return;
}

int main(int argc, char *argv[])
{
    char bitset = 0;

    DumpBitset(bitset);
 
    exit(0);
}
