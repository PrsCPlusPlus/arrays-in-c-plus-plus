#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m , n;
    cout<<"ENTER THE NUMBER OF ROWS : ";
    cin>>m;
    cout<<"ENTER THE NUMBER OF COLUMNS : ";
    cin>>n;
    int count = 0;
    int A[m][n];
    if(m == n)
    {
        cout<<"TRACE IS POSSIBLE"<<endl;
        for(int i = 0 ; i < m ; ++i)
        {
            for(int j = 0 ; j < n ; ++j)
            {
                cout<<"ENTER ELEMENT AT "<<i<<" X "<<j<<" INDEX : ";
                cin>>A[i][j];
            }
        }
        for(int i = 0 ; i < m ; ++i)
        {
            for(int j = 0 ; j < n ; ++j)
            {
                cout<<A[i][j]<<"  ";
            }
            cout<<endl;
        }
        for(int i = 0 ; i < m ; ++i)
        {
            for(int j = 0 ; j < n ; ++j)
            {
                if(i == j)
                {
                    count += A[i][j];
                }
            }
        }
        cout<<"TRACE = "<<count<<endl;
    }
    else
    {
        cout<<"TRACE NOT POSSIBLE"<<endl;
    }
    return 0;
}