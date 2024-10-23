/*
I: My name is Khan
O: My@40name@40is@40Khan
*/
#include <iostream>
using namespace std;

string replaceSpaces(string &str) {
  string temp = "";
  for(int i=0; i< str.length(); i++) {
    if(str[i] == ' ') {
      temp.push_back('@');
      temp.push_back('4');
      temp.push_back('0');
    }
    else {
      temp.push_back(str[i]);
    }
  }
  return temp;
}
int main() {
  cout << "Enter the line: " << endl;
  string s;
  getline(cin, s);
  string modifiedLine = replaceSpaces(s);
  cout << "Modified Line: " << modifiedLine << endl;
}