#include <stack>
#include <cassert>
#include <iostream>
#include "../../helpers/helpers.hpp"

void stack_01(void) {
  // Print function information.
  std::cout << "STACK EXAMPLE: stack_01.cpp";
  add_new_line();

  // Initialize the stack and insert values.
  std::stack<int> stack_integers;
  stack_integers.push(5);
  stack_integers.push(13);
  stack_integers.push(1);
  stack_integers.push(3);
  stack_integers.push(7);

  // Testing first before popping the elements.
  assert(stack_integers.size() == 5);

  // Output the content of tsack.
  while (!stack_integers.empty()) {
    std::cout << stack_integers.top() << std::endl;
    stack_integers.pop();
  }
}
