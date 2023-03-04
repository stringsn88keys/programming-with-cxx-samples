#include <iostream.h>
#include <string.h>
// This program test the strlen function
int main () {
  cout << strlen("Hello, World.\n") << '\n';
  cout << strlen("Hello, World.") << '\n';
  cout << strlen("Hello, ") << '\n';
  cout << strlen("H") << '\n';
  cout << strlen("") << '\n';
  return 0;
}
