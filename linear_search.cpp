#include<bits/stdc++.h>
using namespace std;
int linear_search(int A[] , int n , int element);
void add_elements(int A[] , int n);
void display_elements(int A[] , int n);
int main()
{
    int n;
    cout<<"WHAT IS THE ARRAY SIZE : ";
    cin>>n;
    int A[n];
    add_elements(A,n);
    display_elements(A,n);
    int e;
    cout<<endl<<"ENTER THE ELEMENT YOU WANT TO SEARCH : ";
    cin>>e;
    int index = linear_search(A,n,e);
    if(index != -1)
    {
        cout<<"INDEX = "<<index;
    }
    else
    {
        cout<<"NOT FOUND";
    }
    return 0;
}
int linear_search(int A[] , int n , int element)
{
    for(int i = 0 ; i < n ; ++i)
    {
        if(A[i] == element)
        {
            return i;
        }
    }
    return -1;
}
void add_elements(int A[] , int n)
{
    for(int i = 0 ; i < n ; ++i)
    {
        cout<<"ENTER ELEMENT AT "<<i<<" INDEX : ";
        cin>>A[i];
    }
}
void display_elements(int A[] , int n)
{
   for(int i = 0 ; i < n ; ++i)
    {
        cout<<A[i]<<"  ";
    } 
}