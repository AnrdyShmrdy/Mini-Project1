#include "types.h"
#include "stat.h"
#include "user.h"

// running system call PartA()
int
main(void)
{
    printf(1, "There are %d getpid() system calls.\n", TestPartA());
    exit();
}