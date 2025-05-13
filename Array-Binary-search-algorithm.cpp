/*   >> Binary Search algorithm

    * Data must be sorted
    1. mid = (left + right)/2
    2. (data == Array[mid]) -> return mid
    3. (data > Array[mid])  -> left = mid+1
    4. (data < Array[mid])  -> right = mid-1
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,num,i,flag=0;
    int index,l,r,mid;
    cout<<"Enter array size : ";
    cin>>size;
    int A[size];
    cout<<"Enter array elements : ";
    for(i=0; i<size; i++)
    {
        cin>>A[i];
    }
    sort(A,A+size);
    cout<<"Enter the number you want to search : ";
    cin>>num;
    l=0;
    r=size-1;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(num==A[mid])
        {
           flag=1;
           break;
        }
        else if(num>A[mid])
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    if(flag==0)
    {
        cout<<"Data not found";
    }
    else
    {
        cout<<"Data found at index : "<<mid;
    }
    return 0;
}
