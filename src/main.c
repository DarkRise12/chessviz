#include <stdio.h>
#include "board.h"
#include "board_print.h"

int main()
{
  char a[9][9];
  board(a);
  print(a);
  return 0;
}
