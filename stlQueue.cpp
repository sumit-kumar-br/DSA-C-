#include <iostream>
#include <queue>
using namespace std;

int main() {
  queue <string> q;
  q.push("love");
  q.push("babbar");
  q.push("Kumar");

  cout << "before pop : " << endl;
  cout << "size : " << q.size() << endl;
  cout << "first element : " << q.front() << endl;
  
  q.pop();

  cout << "after pop : " << endl;
  cout << "size : " << q.size() << endl;
  cout << "first element : " << q.front() << endl;

  
}