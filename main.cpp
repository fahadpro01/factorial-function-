#include <iostream>
using namespace std;

int fact(int n)

{ 
  int factiorail=1;
 
  for(int i=2;i<=n;i++){
  factiorail=factiorail*i;
  }
  return factiorail;
}

int main() {
  int n;
  cin>>n;
  int ans=fact(n);
  cout<<ans;
}