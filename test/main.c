#define CTEST_MAIN

#include <ctest.h>
#include <stdbool.h>
char a[10][10];

CTEST(Syntax, Correct_Syntax_Check)
{
    bool result = moveboard(a, "e12-e4");
    ASSERT_FALSE(result);
}
