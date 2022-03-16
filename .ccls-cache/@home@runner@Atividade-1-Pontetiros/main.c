#include <stdio.h>

int main(void) {

int a =10;
  int *b= &a;
  int c= 20;
  int *d= &a;

  printf("%d %d %d %d\n" , a, *b, c, *d);
  a= 15;
  printf("%d %d %d %d\n" , a, *b, c, *d);
  *d= c;
  printf("%d %d %d %d\n" , a, *b, c, *d);
  *b= 25;
  printf("%d %d %d %d\n" , a, *b, c, *d);
  d= &c;
  printf("%d %d %d %d\n" , a, *b, c, *d);
  c= 7;
  a= 5;
  b= d;
  printf("%d %d %d %d\n" , a, *b, c, *d);
  










  
  return 0;
}