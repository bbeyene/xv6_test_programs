
// Test program for operating systems course to test my 'getpriority' and 'setpriority system calls
// Used after implementing a multi-level feedback queue round-robin scheduler in xv6
// Bruh Beyene 

#ifdef CS333_P4
#include "types.h"
#include "user.h"

int main(int argc, char *argv[])
{
  int i = 0;

  printf(1, "\n\nthis pid: %d, priority: %d", getpid(), getpriority(getpid()));

  printf(1, "\nsetting pid: %d to priority: %d", getpid(), atoi(argv[1]));

  setpriority(getpid(), atoi(argv[1]));

  printf(1, "\npid: %d, priority: %d\n", getpid(), getpriority(getpid()));

  printf(1, "\nget priority of other processes...\n");

  for(i = 1; i < 5; i++)
    printf(1, "\npid: %d, priority: %d\n", i, getpriority(i));

  printf(1, "\nset priority of other processes...");

  for(i = 1; i < 5; i++)
    printf(1, "\npid: %d, priority: %d\n", i, setpriority(i, i));

  exit();
}
#endif
