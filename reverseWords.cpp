/*
input - My name is Sumit
output - yM eman si timuS
*/

#include <iostream>
using namespace std;

string reverse(string st) {
  string rev = "";
  for(int i=st.length()-1; i>=0; i--) {
    rev += st[i];
  }
  return rev;
}

string getReverse(string st) {
  string rev = "";
  for(int i=0; i<st.length()-1; i++) {
    if(st[i+1] == ' ' ) {
      rev += reverse(st.substr(0, i+1));
      rev += " ";
    }
  }
  return rev;
}
int main() {
  string name;
  cout << " Enter the string: " << endl;
  getline(cin, name);
  cout << "Reverse : " << getReverse(name) << endl;
}