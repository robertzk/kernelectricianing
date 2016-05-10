// First encounter: https://github.com/git/git/blob/e83c5163316f89bfbde7d9ab23ca2e25604af290/init-db.c#L22

#include <stdio.h>
#include <sys/stat.h>

int main(int argc, char **argv) {
  // You can check whether something's a directory using S_ISDIR
  struct stat st;
  char *boop = "testdir";
  stat(boop, &st);
  fprintf(stdout, "%i", S_ISDIR(st.st_mode));
  return 0;
}

/**** // example
 * ~ ⌚ 1:29:02 $ ./a.out
 * 1%
 * // Hooray! It's a directory
 */


