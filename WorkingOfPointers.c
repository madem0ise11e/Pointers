#include <stdio.h>
int main()
{
  int* pc, c;

  c = 22;
  printf("Adress of c: %p\n", &c);
  printf("Value of c: %d\n\n", c); //22

  pc = &c;
  printf("Adress of pointer pc: %p\n", pc);
  printf("Content of pointer pc: %d\n\n", *pc); //22

  c = 11;
  printf("Adress of pointer pc: %p\n", pc);
  printf("Content of pointer pc: %d\n\n", *pc); //11

  *pc = 2;
  printf("Adress of c: %p\n", &c);
  printf("Value of c: %d\n\n", c); //2
  return 0;
}
