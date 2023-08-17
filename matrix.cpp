#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cout<<"ENTER THE NUMBER OF ROWS OF FIRST MATRIX : ";
    cin>>m;
    cout<<"ENTER THE NUMBER OF COLUMNS OF THE FIRST MATRIX : ";
    cin>>n;
    int p,q;
    cout<<"ENTER THE NUMBER OF ROWS OF SECOND MATRIX : ";
    cin>>p;
    cout<<"ENTER THE NUMBER OF COLUMNS OF THE SECOND MATRIX : ";
    cin>>q;
    if(n == p)
    {
        cout<<endl<<"MULTIPLICATION POSSIBLE"<<endl;
        int A[m][n];
        int B[p][q];
        int C[m][q];
        for(int i = 0; i < m ; ++i)
        {
            for(int j = 0 ; j < q ; ++j)
            {
                C[i][j] = 0;
            }
        }
        for(int i = 0 ; i < m ; ++i)
        {
            for(int j = 0 ; j < n ; ++j)
            {
                cout<<"ENTER ELEMENT AT "<<i<<" X "<<j<<" INDEX : ";
                cin>>A[i][j];
            }
        }
        for(int i = 0 ; i < p ; ++i)
        {
            for(int j = 0 ; j < q ; ++j)
            {
                cout<<"ENTER ELEMENT AT "<<i<<" X "<<j<<" INDEX : ";
                cin>>B[i][j];
            }
        }
        for(int i = 0 ; i < m ; ++i)
        {
            for(int j = 0 ; j < q ; ++j)
            {
                for(int k = 0 ; k < n ; ++k)
                {
                    C[i][j] += A[i][k]*B[k][j];
                }
            }
        }
        cout<<"PRODUCT MATRIX"<<endl;
        for(int i = 0 ; i < m ; ++i)
        {
            for(int j = 0 ; j < q ; ++j)
            {
                cout<<C[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"MULTIPLICATION NOT POSSIBLE : "<<endl;
    }
    return 0;
}