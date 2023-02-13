#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>

Base* generate(void) {

  int random = srand() % 3;

  switch (random) {
    
    case 0:
      return new A();
    case 1:
      return new B();
    case 2:
      return new C();
  }

  return NULL;
}

int main() {

    Base* base = generate();

    return 0;
}