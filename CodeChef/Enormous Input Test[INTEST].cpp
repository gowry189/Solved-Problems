#include <iostream>
using namespace std;

int main() {
    int n,k,t,i,count=0;
  cin>>n>>k;
  for(i=0;i<n;i++)
  {
      cin>>t;
      if(t%k==0)
      count++;
  }
  cout<<count;
  return 0;
}
 
