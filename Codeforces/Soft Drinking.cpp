#include<iostream>
#include<algorithm>
using namespace std;
int main()
{ int n, k, L, c, d, p, nl, np;
  while(cin >> n >> k >> L >> c >> d >> p >> nl >> np)
  {
      cout <<  min(min(k*L/nl, c*d), p/np)/n << endl;

  }


  return 0;


}
