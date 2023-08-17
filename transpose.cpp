#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m , n;
    cout<<"ENTER THE NUMBER OF ROWS : ";
    cin>>m;
    cout<<"ENTER THE NUMBER OF COLUMNS : ";
    cin>>n;
    int A[m][n];
    int B[n][m];
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
    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < m ; ++j)
        {
            B[i][j] = A[j][i];
        }
    }
    cout<<"TRANSPOSE : "<<endl;
    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < m ; ++j)
        {
            cout<<B[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}