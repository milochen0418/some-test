#include <unistd.h>
main ()
{
  printf("111\n");
  write(STDOUT_FILENO, "222\n", 4);
  printf("333\n");
}
