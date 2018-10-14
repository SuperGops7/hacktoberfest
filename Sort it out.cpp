#include<bits/stdc++.h>

void main()
{
    long long a[1000],n;
    cout<<"Enter the number of elements:\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<"The sorted array is:\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
