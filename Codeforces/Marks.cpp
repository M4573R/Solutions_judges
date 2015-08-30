#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string subjects[120];
int main()
{
    int n,m;
    while(cin >> n >> m)
    {   //input the gradebook
        for(int i = 0;i<n;i++)
        {
            cin >> subjects[i];
        }
        int count = 0;
        //for each student
        for(int i=0;i<n;i++){
            bool successful = false;
            //for each subject
            for(int j = 0; j < m;j++)
            {   bool isbest = true; // assume he's best in jth subject
                // check if he's really best in the subject by iterating over all the rows of that subject in the gradebook
                for(int k=0;k<n;k++)
                {
                    if(subjects[i][j] < subjects[k][j])
                        isbest = false;
                }
                if(isbest)
                    successful = true ; // there's some subject he's best at
            }
            if(successful)
                count++;
        }
    cout << count << endl;
    }

}

