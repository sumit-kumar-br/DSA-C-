/*
insert, erase, find, count - O(log N)
unordered map - search - O(1)
*/
#include <iostream>
#include <map>
using namespace std;

int main() {
  map<int, string> m;
  m[1] = "babbar";
  m[2] = "love";
  m[13] = "kumar";
  m.insert({5, "bheem"});
  cout << "before erase : " << endl;
  for(auto i: m) {
    cout << i.first << " " << i.second << endl;
  }
  cout << endl;
  cout << "finding -13: " <<m.count(-13) <<endl;

  m.erase(13);
  cout << "aftre erase : " << endl;
  for(auto i: m) {
    cout << i.first << " " << i.second << endl;
  }
  cout << endl;

  auto it = m.find(5);
  for(auto i=it; i!=m.end();i++) {
    cout<<(*i).first << " " << (*i).second << endl;
  }

}