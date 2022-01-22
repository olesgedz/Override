#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int a;

  puts("***********************************");
  puts("* \t     -Level00 -\t\t  *");
  puts("***********************************");
  printf("Password:");
    scanf("%d",&a);
  if (a != 0x149c) {
    puts("\nInvalid Password!");
    return (1);
  }
  else {
    puts("\nAuthenticated!");
    system("/bin/sh");
  }
  return (0);
}