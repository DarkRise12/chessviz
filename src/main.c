#include <stdio.h>
#include "board.h"
#include "board_print.h"

int main()
{
  char a[10][10];
  char str[7];
  board(a);
  print(a);
  while (true)
    {
        scanf ("%s", str);
        if (strcmp(str, "stop") == 0) break;
        if (!move(a, str)) printf ("Error!\n");
    }
    return 0;
}
