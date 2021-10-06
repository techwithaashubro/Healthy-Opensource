#include <iostream>
#include <string>
#include <unordered_set>

typedef std::unordered_multiset<std::string> stringset;

int main ()
{
  stringset myums;

  stringset::hasher fn = myums.hash_function();

  std::cout << "that: " << fn ("that") << std::endl;
  std::cout << "than: " << fn ("than") << std::endl;

  return 0;
}
