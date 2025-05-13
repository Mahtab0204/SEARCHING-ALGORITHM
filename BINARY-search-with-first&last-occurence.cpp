#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,temp;
    cin>>n;
    int A[n];
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int num;
    cin>>num;
    int left=0;
    int right=n-1;
    int mid;
    bool flag=false;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(num==A[mid])
        {
            temp=mid;
            while(A[mid]==num)
            {
                mid--;
            }
            while(A[temp]==num)
            {
                temp++;
            }
            flag=true;
            break;
        }
        else if(num>A[mid])
        {
            left=mid+1;
        }
        else if(num<A[mid])
        {
            right=mid-1;
        }
    }
    if(flag==false)
        cout<<"Data not found";
    else
        cout<<"First occurrence of Data found at index : "<<mid+1<<endl;
        cout<<"Last occurrence of Data found at index : "<<temp-1<<endl;
    return 0;
}
