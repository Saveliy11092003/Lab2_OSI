#include <unistd.h>
#include <stdlib.h>

enum Consts {
    STDOUT = 1,
    ERROR = -1
};

int main(){

    ssize_t status = write(STDOUT, "Hello world!\n", 13);

    if (status == ERROR) {
    	return EXIT_FAILURE;	
    }

    return EXIT_SUCCESS;
}
