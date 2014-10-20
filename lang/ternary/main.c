int main(int argc, char **argv) { 
  int x = 1 ? : 1; // Look ma! No positive ternary condition
  return x;
}

// From zsh:
// clang main.c && ./a.out; echo "$?"
// 1

