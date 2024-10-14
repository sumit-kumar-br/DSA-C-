// Direct acccess of an element not possible
#include <iostream>
#include <list>
using namespace std;

int main() {
  list <int> l;

  l.push_back(1);
  l.push_front(2);
  
  for(int i:l) {
    cout << i << " ";
  }
  cout << endl;

  cout << "after erase: " << endl;
  l.erase(l.begin());
  for(int i:l) {
    cout << i << " ";
  }
  cout << endl;

  cout << "size : " << l.size() << endl;

  // list <int> n(l) // copy l into n
  list <int> n(5, 100);
}