#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string a,b,c;
    cin >> a;
    cin >> b;
    a = a + b;
    cin >> c;
    sort(a.begin(),a.end());
    sort(c.begin(),c.end());
    if(a==c)
        cout << "YES\n";
    else
        cout <<"NO\n";
    return 0;
}
