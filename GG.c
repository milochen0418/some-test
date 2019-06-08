#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>
//https://github.com/lattera/glibc/blob/master/stdio-common/printf.c
//https://github.com/lattera/glibc/blob/master/stdio-common/vfprintf.c
//https://github.com/lattera/glibc/blob/master/libio/libio.h
main ()
{
  //stdout->_IO_file_flags |= _IO_LINE_BUF;
  stdout->_IO_file_flags |= _IO_UNBUFFERED;
  fprintf(stdout, "_IO_file_flags = %0x\n", stdout->_IO_file_flags);
  fprintf(stdout, "_IO_LINE_BUF = %0x\n", _IO_LINE_BUF);
  fprintf(stdout, "_IO_UNBUFFERED_BUF = %0x\n", _IO_UNBUFFERED);
  fprintf(stdout,"111");
  write(STDOUT_FILENO, "222\n", 4);
  fprintf(stdout, "333\n");
}
