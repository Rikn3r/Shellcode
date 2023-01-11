#include <stdio.h>
#include <unistd.h>

int main() {
    execl("/bin/sh", "sh", (char *)NULL);
    return 0;
}
