#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  // You can fetch environment variables using getenv (stdlib.h)
  char *boop = getenv("BOOP");
  fprintf(stdout, "%s", boop);
  return 0;
}

/**** // example
 * ~ ⌚ 1:29:02 $ ./a.out
 * (null)%
 * ~ ⌚ 1:29:03 $ BOOP=hello ./a.out
 * hello%
 */


