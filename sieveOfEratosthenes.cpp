#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n) {
  int count = 0;
  vector<bool> prime(n+1, true);
  prime[0] = prime[1] =false;
  for(int i=2; i<n; i++) {
    
    if(prime[i]) {
      count++;
      for(int j=i*2; j<n; j+=i) {
        prime[j] = false;
      }
    }
  }
  return count;
}

int main() {
  cout << "Enter the limit: " << endl;
  int n;
  cin >> n;
  cout << "No. of prime numbers before " << n << " is: " << countPrimes(n) << endl;
}