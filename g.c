#include <stdio.h>
#include <unistd.h>
main ()
{
  stdout->_IO_file_flags |= _IO_LINE_BUF;
  printf("111\n");
  write(STDOUT_FILENO, "222\n", 4);
  printf("333\n");
}
