#include <iostream>
#include "../../helpers/helpers.hpp"

// A class that represent a node of the linked list.
class SinglyLinkedListNode {
  public:
    int data;
    SinglyLinkedListNode *next;

    // Default constructor.
    SinglyLinkedListNode() {
      data = 0;
      next = NULL;
    }

    // Initialize values to the attributes.
    SinglyLinkedListNode(int data) {
      this -> data = data;
      this -> next = NULL;
    }
};

// Class implementation of singly linked list.
class SinglyLinkedList {
  SinglyLinkedListNode *head;

  public:
    // Implement a default constructor.
    SinglyLinkedList() {
      head = NULL;
    }

    // Implement a method to insert a node at the start.
    void insertNode(int data) {
      // Initialize a node.
      SinglyLinkedListNode *newNode = new SinglyLinkedListNode(data);

      // Assign to head if the list is empty.
      if (head == NULL) {
        head = newNode;
        return;
      }

      // If head already have value, assign the new node at the head.
      newNode -> next = this -> head;
      this -> head = newNode;
    }

    // Implement a method to print the linked list.
    void print(void) {
      SinglyLinkedListNode *temp = head;

      // Check for empty list.
      if (head == NULL) {
        std::cout << "List is empty." << std::endl;
        return;
      }

      // Travers the list.
      // Print the node value.
      while (temp != NULL) {
        std::cout << "[ NODE ]";
        add_new_line();
        std::cout << "Node Data: " << temp -> data;
        add_new_line();
        std::cout << "Node Current Pointer: " << static_cast<void*>(temp);
        add_new_line();
        std::cout << "Node Next Pointer: " << static_cast<void*>(temp -> next);
        add_new_line();
        add_new_line();

        // Set the temporary node to the next pointer.
        temp = temp -> next;
      }
    }
};


void linked_list_singly_01(void) {
  // Initialize the singly linked list class.
  SinglyLinkedList list;

  // Display the information of the function.
  std::cout << "SINGLY LINKED LIST EXAMPLE: linked_list_singly_01.cpp";
  add_new_line();
  add_new_line();

  // Assign values.
  list.insertNode(1);
  list.insertNode(3);
  list.insertNode(7);

  // Print the values.
  list.print();
}
