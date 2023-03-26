#include <unistd.h>
#include <sys/syscall.h>
#include <stdlib.h>

enum Consts {
    STDOUT = 1,
    ERROR = -1
};

ssize_t my_write(int fd, const char* buf, size_t count) {
    return syscall(SYS_write, fd, buf, count);
}

int main() {

    ssize_t status = my_write(STDOUT, "Hello world!\n", 13);

    if (status == ERROR) {
    	return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

