#include<iostream>
using namespace std;

int sqRoot(int n) {
  int s = 0, e = n;
  long long int ans = -1;
  while(s<=e) {
    long long int mid = s + (e-s)/2;
    long long int sq = mid*mid;

    if(sq == n) {
      return mid;
    }
    else if(sq > n) {
      e = mid - 1;
    }
    else {
      s = mid+1;
    }
  }
  return ans;
}

double morePrecision(int n, int precision, int tempSol) {
  double factor = 1;
  double ans = tempSol;

  for(int i=0; i<precision; i++) {
    factor = factor/10;

    for(double j=ans; j*j<n; j=j+factor) {
      ans = j;
    }
  }
  return ans;
}
int main() {
  int n;
  cout << "Enter the number: " << endl;
  cin >> n;

  int tempSol = sqRoot(n);
  cout << "Answer is " << morePrecision(n, 3, tempSol) << endl;
}