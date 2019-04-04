#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int a,t,b,g,l,n,k,i,r;
  cin>>t;
  for(i=1;i<=t;i++)
  {cin>>n>>a>>b>>k;
  g=__gcd(a,b);
  l=(a*b)/g;
  r=n/a+n/b-2*(n/l);
  if(r>=k)

    cout<<"\nwin\n";

  else
    cout<<"\nlose\n";
  }
    return 0;

}
