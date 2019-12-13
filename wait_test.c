
// Test program for operating systems course to test the 'wait' system call
// Parent/child processes, child runs for a bit, parent waits for child and sleeps a bit
// Used after implementing a round-robin scheduler in xv6
// Bruh Beyene

#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
  int i, j;

  if(fork() == 0)
  {
    for(i = 400000000; i > 0; --i)
    {
        if(i % 100000000 == 0)
        {
            for(j = 400000000; j > 0; --j)
            {
                if(j % 100000000 == 0)
                  printf(1, "\n============== in child: PID: %d running...\n", getpid());
            }
        }
    }
    exit();
  }
  int retval = wait();
  printf(1, "\n============== in parent: PID: %d EXITED after wait sys call\n", retval);
  sleep(5000);
  printf(1, "\n============== in parent: PID: %d EXITING\n", getpid());
  exit();
}
