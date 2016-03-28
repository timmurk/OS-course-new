#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    void* mem = malloc(255 * sizeof(*mem));
    ssize_t = r;
    while ((r = read(0,mem,r)) >= 0) {
	write(1,mem,r);
    }
    close(1);
    free(mem);
    return 0;
}