// First encounter: https://github.com/git/git/blob/e83c5163316f89bfbde7d9ab23ca2e25604af290/init-db.c#L9
#include <stdio.h>

int main(int argc, char **argv) {
  // The perror() function shall map the error number accessed through the symbol errno to a language-dependent error message,
  // which shall be written to the standard error stream...
  perror("I am an error");
  return 0;
}

/**** // example
 * ~ ⌚ 1:52:54 $ c+
 * I am an error: Undefined error: 0
 */


