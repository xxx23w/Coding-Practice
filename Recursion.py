#include<bits/stdc++.h> 
using namespace std;

class Solution{
public:
  long long int factorial(int n)
{
if(n==0 || n==1)
{return 1;}
  
  
#Recursive Call
long long int recResult = factorial(n-1);
  
#Small Calculation
long long result = n* recResult;
  
return result;

}
};

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    Solution ob;
    cout<<ob.factorial(n)<<endl;
  }
  return 0;
}
