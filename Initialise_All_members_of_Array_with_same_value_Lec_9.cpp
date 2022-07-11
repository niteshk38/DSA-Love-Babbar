#include <iostream>
#include <array>
int main () {
  std::array<int,9> myarray;

  myarray.fill(8); //Whatever we will insert here, the same will get inserted in array

  std::cout << "myarray contains:";
  for ( int& x : myarray) { std::cout << ' ' << x; }

  std::cout << '\n';

  return 0;
}
