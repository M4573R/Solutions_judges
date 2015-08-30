#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int main()
{
    vector<int> cookies;
    int test,a;
    cin >> test;
    for(int i = 0; i <test; i++)
    {
        cin >> a;
        cookies.push_back(a);
    }

    int sum = accumulate(cookies.begin(),cookies.end(),0);
    int count = 0;
    for(int i=0;i<cookies.size();i++)
    {
        if((sum -cookies[i])%2==0)
            count++;
    }
    cout << count << endl;
}
