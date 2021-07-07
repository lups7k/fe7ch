#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/utsname.h>

int main()
{
  struct utsname sysinfo;
  if (uname(&sysinfo) == -1)
  /* you may be wondering what this if does,
  this is responsible for making the var.info function, ex. sysinfo.machine, function. 
  So it uses the sys/utsname.h library function "uname" to 
  point to the area of the memory in which the OS infos are. */
  {
    perror("uname");
    printf("an error was found.");
    return 0;
  }
  printf("\033[0;34mFe7ch - a simple system fetch written in C\n\n\033[0m");
  printf("OS -> %s\n", sysinfo.nodename);
  printf("Kernel -> %s\n", sysinfo.release);
  printf("architecture -> %s\n", sysinfo.machine);
  printf("version -> %s\n", sysinfo.sysname);
  return 0;
}
