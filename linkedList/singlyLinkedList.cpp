#include <iostream>
using namespace std;

class Node {
  public:
  int data;
  Node* next;

  // constuctor
  Node(int data) {
    this -> data = data;
    this -> next = NULL;
  }

  //destructor
  ~Node() {
    int value = this->data;
    if(this->next != NULL) {
      delete next;
      this->next = NULL;
    }
    cout << "memory freed for the data with value" << value << endl;
  }
};

void insertAtHead(Node* &head, int d) {
  
  // create new node
  Node* temp = new Node(d);
  temp -> next = head;
  head = temp;
}

void insertAtTail(Node* &tail, int d) {
  Node* temp = new Node(d);
  tail -> next = temp;
  tail = temp;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d) {
  
  // inserting at first position
  if(position == 1) {
    insertAtHead(head, d);
    return;
  }

  Node* temp = head;
  int cnt = 1;
  while(cnt < position-1) {
    temp = temp->next;
    cnt++;
  }

  // inserting at last position
  if(temp->next == NULL) {
    insertAtTail(tail, d);
    return;
  }

  Node* nodeToInsert = new Node(d);
  nodeToInsert->next = temp->next;
  temp->next = nodeToInsert;
}

void deleteNode(Node* &head, int position) {
  if(position == 1) {
    Node* temp = head;
    head = temp->next;
    temp->next = NULL;
    delete temp;
  } else {
    Node* current = head;
    Node* prev = NULL;
    int cnt = 1;
    while(cnt<position) {
      prev = current;
      current = current->next;
      cnt++;
    }
    prev->next = current->next;
    current->next = NULL;
    delete current;
  }
}

void print(Node* &head) {
  Node* temp = head;

  while(temp != NULL) {
    cout << temp -> data << " ";
    temp = temp -> next;
  }
  cout << endl;
}


int main() {

  // create a new node
  Node* node1 = new Node(10);
  //cout << node1 -> data << endl;
  //cout << node1 -> next << endl;

  Node* head = node1;
  Node* tail = node1;
  print(head);

  insertAtTail(tail, 12);
  print(head);

  insertAtHead(head, 11);
  print(head);

  insertAtPosition(tail, head, 3, 121);
  print(head);
}