#include<iostream>
using namespace std;
int main()
{
    int n=10;
    int A[n]={1,2,3,4,5,6,7,8,9,10};
    int i,num;
    cout<<"Enter the number you want to search : ";
    cin>>num;
    for(i=0;i<n ;i++)
    {
        if(A[i]==num)
        {
            break;
        }
    }
    if(i==n)
        cout<<"Number not found at any index";
    else
        cout<<num<<" found at index "<<i;
    return 0;
}
