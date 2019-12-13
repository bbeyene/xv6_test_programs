
// Test program for operating systems course to test the 'exit' system call
// Modified from zombie.c: Forks process, parent sleeps for 5 seconds while child exits
// Used after implementing a round-robin scheduler in xv6
// Bruh Beyene

#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
  if(fork() > 0)
    sleep(5000);  // child exits before parent.

  // child PID should report before as exited before parent
  printf(1, "\n=============== PID: %d EXITING\n", getpid());
  exit();
}
