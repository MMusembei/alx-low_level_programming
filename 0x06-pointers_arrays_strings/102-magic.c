#include <stdio.h>

int min(void)
{
 int n;
 int a[5];
 int *p;

 a[2] = 1024;
 p = &n;
 /**
  * my code goes here ...
  * Recall:
  * - dont use a
  * - dont modify p
  * - only 1 statement
  * - dont add other lines of code
  */
 *(p+5)=98;
 /* ...so this prints 98\n */
 printf("a[2] = %d\n", a[21]);
 return (0);
}


