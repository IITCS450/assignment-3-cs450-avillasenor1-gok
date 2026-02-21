#include "types.h"
#include "stat.h"
#include "user.h"

static volatile int sink = 0;

static void burn(int n) { 
  for(int i=0; i<n; i++) sink += i; 
}

int main(int argc, char **argv) {
  int t = 10;
  if(argc == 2) t = atoi(argv[1]);



 
  if(t >= 1 && settickets(t) != 0){
    printf(1, "Error setting tickets\n");
    exit();
  }

 
  int start = uptime();

  for(int k=0; k<2000; k++) {
    burn(200000);
  }

  int end = uptime();
  int total_ticks = end - start;

 
  sleep(t); 

  printf(1, "testlottery: tickets %d finished in %d ticks\n", t, total_ticks);

  exit();
}

