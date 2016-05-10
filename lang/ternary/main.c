// First encounter: https://github.com/git/git/blob/e83c5163316f89bfbde7d9ab23ca2e25604af290/commit-tree.c#L141
int main(int argc, char **argv) { 
  int x = 1 ? : 1; // Look ma! No positive ternary condition
  return x;
}

// From zsh:
// clang main.c && ./a.out; echo "$?"
// 1

