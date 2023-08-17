#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m , n;
    cout<<"ENTER THE NUMBER OF ROWS : ";
    cin>>m;
    cout<<"ENTER THE NUMBER OF COLUMNS : ";
    cin>>n;
    int p , q;
    cout<<"ENTER THE NUMBER OF ROWS OF SECOND MATRIX : ";
    cin>>p;
    cout<<"ENTER THE NUMBER OF COLUMNS OF SECOND MATRIX : ";
    cin>>q;
    if(m == p && n == q)
    {
        int A[m][n];
        int B[m][n];
        cout<<"ADDITION IS POSSIBLE"<<endl;
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
                cout<<"ENTER ELEMENT AT "<<i<<" X "<<j<<" INDEX : ";
                cin>>B[i][j];
            }
        }
        int C[m][n];
        for(int i = 0 ; i < m ; ++i)
        {
            for(int j = 0 ; j < n ; ++j)
            {
                C[i][j] = A[i][j] + B[i][j];
            }
        }
        cout<<"SUM MATRIX : "<<endl;
        for(int i = 0 ; i < m ; ++i)
        {
            for(int j = 0 ; j < n ; ++j)
            {
                cout<<C[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"ADDITION NOT POSSIBLE"<<endl;
    }
    return 0;
}