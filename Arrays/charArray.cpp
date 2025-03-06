#include <iostream>
using namespace std;

char toLowerCase(char c) {
  if(c >= 'a' && c <= 'z') {
    return c;
  } else {
    char temp = c - 'A' + 'a';  // c-32
    return temp;
  }
}

bool isPalindrome(char arr[], int n) {
  int s = 0, e = n-1;
  while(s<=e) {
    if(toLowerCase(arr[s]) != toLowerCase(arr[e])) { // for not case sensitive
      return 0;
    } else {
      s++;
      e--;
    }
  }
  return 1;
}

void reverse(char arr[], int n) {
  int s=0, e=n-1;
  while(s<e) {
    swap(arr[s++], arr[e--]);
  }
}

int getLength(char arr[]) {
  int count=0;
  for(int i=0; arr[i] != '\0'; i++) {
    count++;
  }
  return count;
}

int main() {
  // char n[20];
  // string n1;
  // cin >> n; // won't consider input after space, tab or enter
  // cin >> n1;  // same as above
  // cout << "Hello, " << n << "!" << endl;
  // cout << "Hello, " << n1 << "!" << endl;
  char name[20];
  cout << "Enter your name: " << endl;
  cin >> name;
  cout << "Your name : " << name << endl;
  int len = getLength(name);
  cout << "Length : " << len << endl;
  reverse(name, len);
  cout << "Reversed Name : " << name << endl;
  if(isPalindrome(name, len)) {
    cout << name << " is palindrome" << endl;
  } 
  else {
    cout << name << " is not palindrome" << endl;
  }

  cout << "A : " << toLowerCase('A') << endl;
  return 0;
}

/*
char ch[10];
in-built funcitons

length : int len = strlen(name);
compare(s1, s2): strcmp(s1, s2);
copy: strcpy(destination, source)
*/