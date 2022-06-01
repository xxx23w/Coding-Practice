#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long int nthFibonacci(long long int n){
        // code here
        
        // Base Case
        if (n == 0) {
            return 0;
        }
        
        if (n == 1){
            return 1;
        }
      
      #recursion call
      long long int reCall1 = nthFibonacci(n-1);
      long long int reCall2 = nthFibonacci(n-2);
      
      
      #small calculation
      long long int result = reCall1 + reCall2;
      
      return result;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
