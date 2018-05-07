#include <stdio.h>
#include "board.h"
#include "board_print.h"

int main()
{
  char a[10][10];
  board(a);
  print(a);
  move(a);
  return 0;
}
