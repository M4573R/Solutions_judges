#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int main()
{
    int inches,m;
    int sum = 0;
    int count = 0;
    cin >> inches;
    vector<int> month;
    for(int i=0; i<12;i++)
    {
        cin >> m;
        month.push_back(m);
    }
    if(inches == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    sort(month.begin(),month.end());
    int check = accumulate(month.begin(),month.end(),0);
    if( check < inches)
    {
        cout << -1 << endl;
        return 0;
    }
    for(int i = 11; i>=0;i--)
    {
        sum += month[i];
        count++;
        if(sum>=inches)
            break;
    }
    cout << count << endl;
}
