#ifndef SHELL_H                                                                                                  
#define SHELL_H                                                                                                  
                                                                                                                 
/* header files */                                                                                               
#include <stdio.h>                                                                                               
#include <stdlib.h>                                                                                              
#include <string.h>                                                                                              
#include <stdarg.h>
#include <unistd.h>                                                                                              
#include <sys/stat.h>                                                                                            
#include <sys/types.h>                                                                                           
#include "printf/0-_printf.c"
#include "printf/1-C.c"
#include "printf/2-Put_string.c"
#include "printf/3-I_and_D.c"
#include "printf/_putchar.c"

int main(void);
int _putchar (char c, int *k);
int _printf(const char *format, ...);
int _numbers(va_list arg, int *k);
int _string(va_list p, int *k);
int _char(va_list p, int *k);

#endif /* SHELL_H */
