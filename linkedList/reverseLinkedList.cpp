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

Node* reverseLinkedList(Node* head) {
    Node* curr = head;
    Node* prev = NULL;
    reverse(head, curr, prev);
    return head;
  
    /*if(head == NULL || head->next == NULL) {
      return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    while(curr != NULL) {
      Node* forward = curr->next;
      curr->next = prev;
      prev = curr;
      curr = forward;
    }
    return prev; // returning the head of the reversed LL
    */
  }
  
  Node* reverse(Node* &head, Node* curr, Node* prev) {
  
    if(curr == NULL) {
      head = prev;
      return;
    }
    reverse(head, curr->next, curr);
    curr -> next = prev;
  
  }
  
  Node* reverse1(Node* head) {
    //base case
    if(head == NULL || head->next == NULL) {
      return head;
    }
    Node* newHead = reverse1(head->next);
    head->next->next = head;
    head->next = NULL;
  
    return newHead;
  
  }
  
  int getLength(Node* head) {
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL) {
        cnt++;
        temp = temp->next;
    }
    return cnt;
  }
