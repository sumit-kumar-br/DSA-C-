
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
    
        Node* reverseKGroup(Node* head, int k) {
            if(head == NULL) {
                return NULL;
            }
    
            int count = 0;
            Node* temp = head;
            while(temp != NULL && count<k) {
                temp = temp->next;
                count++;
            }
    
            if(count < k) {
                return head;
            }
    
            Node* next = NULL;
            Node* curr = head;
            Node* prev = NULL;
            count = 0;
    
            while(curr != NULL && count < k) {
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
                count++;
            }
    
            if(next != NULL) {
                head->next = reverseKGroup(next, k);
            }
         
            return prev;
        }
    