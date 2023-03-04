#include <iostream>

// cout, strlen, and endl
using namespace std;

// This program test the strlen function

int main () {
  cout << strlen("Hello, World.\n") << endl;
  cout << strlen("Hello, World.") << endl;
  cout << strlen("Hello, ") << endl;
  cout << strlen("H") << endl;
  cout << strlen("") << endl;
  return 0;
}
