#include <iostream>
using namespace std;

string removeSubstrings(string s, string part) {
  while(s.length()!=0 && s.find(part) < s.length()) {
    s.erase(s.find(part), part.length());
  }
  return s;
}

int main() {
  string s, sub;
  cout << "Enter string : " << endl;
  getline(cin, s);
  cout << "Enter substring : " << endl;
  getline(cin, sub);
  cout << "Modified string : " << removeSubstrings(s, sub) << endl;
}