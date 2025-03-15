#include <iostream>
#include "../../helpers/helpers.hpp"
using namespace std;

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
    void createNode(int value) {
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
        cout << temp->data << '\t';
        temp = temp -> next;
      }
    }
};

void linked_list_singly_02(void) {
  LinkedList list;

  // Insert the values and create node.
  list.createNode(1);
  list.createNode(3);
  list.createNode(5);
  list.createNode(7);
  list.createNode(9);

  add_new_line();
  add_new_line();
  cout << "EXAMPLE: linked_list_singly_02.cpp" << endl;
  add_new_line();
  list.traverse();
  add_new_line();
  add_new_line();
}
