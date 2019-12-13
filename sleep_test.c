
// Test program for operating systems course to test the 'sleep' system call
// Sleep for 5 seconds then do some work, loops twice.
// Used after implementing a round-robin scheduler in xv6
// Bruh Beyene

#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
  int i;
  int loops = 2;

  printf(1, "\n");

  while(loops)
  {
    for(i = 400000000; i > 0; --i)
    {
      if(i % 100000000 == 0)
        printf(1, "============== PID: %d running...\n", getpid());
    }
    printf(1, "\n=============== PID: %d Going to long sleep in... ", getpid());
    for(i = 3; i > 0; --i)
    {
      printf(1, "%d... ", i);
      sleep(500);
    }
    printf(1, "\n");
    sleep(5000);
    printf(1, "=============== PID: %d AWAKE!\n", getpid());
    --loops;
  }
  exit();
}
