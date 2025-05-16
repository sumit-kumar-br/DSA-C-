
#include<bits/stdc++.h>
using namespace std;

class Node {
    public: 
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }

    ~Node() {
        int value = this->data;
        if(this->next != nullptr) {
            delete next;
            this->next = nullptr;
        }
        cout << " Node with the value " << value << " is deleted. " << endl;
    }
};

void insertAtHead(Node* &head, int data) {
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

Node* floydCycleDetection(Node* head) {
    if(head == nullptr) {
        return nullptr;
    }
    Node* slow = head;
    Node* fast = head;
    while(fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if( slow == fast ) {
            slow = head;
            while(slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
    return nullptr;
}

void print(Node* head) {
    Node* temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    print(head);

    insertAtHead(head, 20);
    print(head);

    insertAtHead(head, 30);
    print(head);

    insertAtHead(head, 40);
    print(head);

    insertAtHead(head, 50);
    print(head);

    Node* temp = head;
    while(temp->next) {
        temp = temp->next;
    }
    temp->next = head->next;

    Node* startOfLoop = floydCycleDetection(head);
    if(startOfLoop != nullptr) {
        cout << "Cycle is present" << endl;
    }
    else {
        cout << "Cycle is not present" << endl;
    }

}