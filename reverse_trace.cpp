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
        int c = 0 ;
        int c1 = n - 1;
        for(int i = 0 ; i < m ; ++i)
        {
            for(int j = 0 ; j < n ; ++j)
            {
                if(i == c && j == c1)
                {
                    count += A[i][j];
                    ++c;
                    --c1;
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