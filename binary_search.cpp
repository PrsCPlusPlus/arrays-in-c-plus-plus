#include<bits/stdc++.h>
using namespace std;
void add_elements(int A[] , int n);
void display_elements(int A[] , int n);
void insertion_sort(int A[] , int n);
int binary_search(int A[] , int n , int element);
int main()
{
    int n;
    cout<<"HOW MANY ELEMENTS ? ";
    cin>>n;
    int A[n];
    add_elements(A,n);
    display_elements(A,n);
    insertion_sort(A,n);
    display_elements(A,n);
    int e;
    cout<<endl<<"WHICH ELEMENT YOU WANT TO SEARCH ? ";
    cin>>e;
    int index = binary_search(A,n,e);
    if(index != -1)
    {
        cout<<index<<endl;
    }
    else
    {
        cout<<"NOT FOUND";
    }
    return 0;
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
void insertion_sort(int A[] , int n)
{
    int key , j;
    cout<<endl<<"RUNNING INSERTION SORT....."<<endl;
    for(int i = 1 ; i <= n-1 ; ++i)
    {
        key = A[i];
        j = i - 1;
        while(j >= 0 && key < A[j])
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}
int binary_search(int A[] , int n , int element)
{
    int high = n-1;
    int low = 0;
    int mid;
    while(low<=high)
    {
        mid = (high+low)/2;
        if(A[mid] == element)
        {
            return mid;
        }
        else if(element > A[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}