#include <iostream>
#include "../../helpers/helpers.hpp"

struct Node {
  // This holds the data of the node.
  int data;
  // This will act as link pointer of the next node.
  Node *next;
};

class LinkedList {
  // Declare the attributes.
  private:
    Node *head;
    Node *tail;

  public:
    // Initial the LinkedList to NULL.
    LinkedList() {
      head = NULL;
      tail = NULL;
    }

    // Create a LinkedList node.
    void create_node(int value) {
      Node *temp = new Node;
      temp -> data = value;
      temp -> next = NULL;

      if (head == NULL) {
        head = temp;
        tail = temp;
        temp = NULL;
      } else {
        tail -> next = temp;
        tail = temp;
      }
    }

    // Traverse the linked list.
    void traverse() {
      Node *temp = new Node;
      temp = head;

      while(temp != NULL) {
        std::cout << temp -> data << '\t';
        temp = temp -> next;
      }
    }

    // Delete the first node.
    void delete_first() {
      Node *temp = new Node;
      temp = head;
      head = head -> next;
      delete temp;
    }

    // Delete the last node.
    void delete_last() {
      Node *current = new Node;
      Node *previous = new Node;
      current = head;

      while (current -> next != NULL) {
        previous = current;
        current = current -> next;
      }

      previous -> next = NULL;
      delete current;
    }

    // Delete node at an arbitrary position.
    void delete_position(int position) {
      Node *current = new Node;
      Node *previous = new Node;
      current = head;

      for (int i = 1; i < position; i++) {
        previous = current;
        current = current -> next;
      }

      previous -> next = current -> next;
    }
};

void linked_list_singly_02(void) {
  LinkedList list;

  // Insert the values and create node.
  list.create_node(1);
  list.create_node(3);
  list.create_node(5);
  list.create_node(7);
  list.create_node(9);
  list.create_node(11);
  list.create_node(13);

  // View all the node value.
  add_new_line();
  add_new_line();
  std::cout << "EXAMPLE: linked_list_singly_02.cpp" << std::endl;
  add_new_line();
  list.traverse();

  // View the remaining nodes after deleting the first node.
  add_new_line();
  add_new_line();
  std::cout << "EXAMPLE: linked_list_singly_02.cpp (after first node deletion)" << std::endl;
  add_new_line();
  list.delete_first();
  list.traverse();

  // View the remaining nodes after deleting the last node.
  add_new_line();
  add_new_line();
  std::cout << "EXAMPLE: linked_list_singly_02 (after last node deletion)" << std::endl;
  add_new_line();
  list.delete_last();
  list.traverse();

  // View the remaining nodes after deleting an arbitrary position.
  add_new_line();
  add_new_line();
  std::cout << "EXAMPLE: linked_list_singly_02 (after arbitrary position deletion)" << std::endl;
  add_new_line();
  list.delete_position(3);
  list.traverse();
  add_new_line();
  add_new_line();
}
