#include "types.h"
#include "stat.h"
#include "user.h"

// running system call PartA()
int
main(void)
{
    printf(1, "I'm a process with ID:%d\n", getpid());
    exit();
}