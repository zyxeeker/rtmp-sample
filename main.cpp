#include <iostream>
#include "rtmp.h"

int main() {
    char version[100];
    sprintf(version, "rtmp version : %d", RTMP_LibVersion());
    printf("%s", version);
    return 0;
}
