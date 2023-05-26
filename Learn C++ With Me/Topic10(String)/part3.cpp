#include <iostream>
#include <string>

int main() {
  std::string greeting = "Hello";
  std::cout << greeting << std::endl;
  return 0;
}

/*
You might see some C++ programs that runs without the standard namespace library. THe using namespace std line can be
omitted and replaced with the std keyword, followed by the :: operator for string (and cout) objects:

Output :
    Hello
*/