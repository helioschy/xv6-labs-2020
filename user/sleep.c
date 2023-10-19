#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        write(1, "err!\n", strlen("err!\n"));
        write(2, "error input\n", strlen("error input\n"));
        exit(1);
    }
    else {
        int time = atoi(argv[1]);
        sleep(time);
        exit(0);
    }
    exit(1);
}