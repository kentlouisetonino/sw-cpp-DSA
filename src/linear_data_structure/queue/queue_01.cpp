#include <queue>
#include <iostream>
#include "../../helpers/helpers.hpp"

// Print the queue values.
void show_queue(std::queue<int> current_queue) {
  std::queue<int> current = current_queue;

  while (!current.empty()) {
    // Print the values.
    int current_head = current.front();
    std::cout << "Current Head: " << current_head;
    add_new_line();

    // Remove the current head.
    current.pop();
  }

  add_new_line();
}

void queue_01(void) {
  // Function description.
  std::cout << "Queue Example: queue_01.cpp";
  add_new_line();

  // Initialize the queue.
  // Push values in it.
  std::queue<int> store_current_queue;
  store_current_queue.push(1);
  store_current_queue.push(3);
  store_current_queue.push(5);

  // Show the values.
  show_queue(store_current_queue);
  add_new_line();
}
