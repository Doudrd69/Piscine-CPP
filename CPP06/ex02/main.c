#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>
#include <new>

Base* generate(void) {

  srand(time(nullptr));
  int r = rand() % 3;

  switch (r) {
    
    case 0:
      std::cout << r << " --> generate type A" << std::endl;
      return new(std::nothrow) A();
    case 1:
      std::cout << r << " --> generate type B" << std::endl;
      return new(std::nothrow) B();
    case 2:
      std::cout << r << " --> generate type C" << std::endl;
      return new(std::nothrow) C();
  }

  return NULL;
}

void  identify_ptr(Base* p) {

  A* classA = dynamic_cast<A*>(p);
  B* classB = dynamic_cast<B*>(p);
  C* classC = dynamic_cast<C*>(p);

  std::cout << "\n== Identify pointer ==" << std::endl;

  if (classA)
    std::cout << "Pointer is of type A (Class A)" << std::endl;
  else if (classB)
    std::cout << "Pointer is of type B (Class B)" << std::endl;
  else if (classC)
    std::cout << "Pointer is of type C (Class C)" << std::endl;
  else
    std::cout << "Pointer has no defined type" << std::endl;
  return ;
}

void  identify_ref(Base& p) {

  std::cout << "\n== Identify reference ==" << std::endl;

  try
  {
    A& classA = dynamic_cast<A&>(p);
    std::cout << "Reference is of type A" << std::endl;
  }
  catch (std::bad_cast &e)
  {
    try
    {
      B& classB = dynamic_cast<B&>(p);
      std::cout << "Reference is of type B" << std::endl;
    }
    catch (std::bad_cast &e)
    {
      try
      {
        C& classC = dynamic_cast<C&>(p);
        std::cout << "Reference is of type C" << std::endl;
      }
      catch (std::bad_cast &e)
      {
        std::cout << "Reference has no defined type" << std::endl;
      }
    }
  }

  return ;
}

int main() {

    Base* base = generate();

    if (!base)
    {
        std::cout << "Error : new failed" << std::endl;
        return 1;
    }

    identify_ptr(base);
    identify_ref(*base);

    return 0;
}