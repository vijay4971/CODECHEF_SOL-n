#include <bits/stdc++.h>
using namespace std;

int main() {
int t; 
cin>>t; 
while(t--)
{
    long long int n, m; 
    int i,j,k; 
    cin>>n>>m;
    long long int arr[n];
    for(i = 0;i<n;i++){
        cin>>arr[i];
     }
     long long int d=0;
    for(i = 0;i<n;i++){
                d += max(abs(arr[i]-1),abs(arr[i]-m));
       
}
     cout<<d<<endl; 
    }
	return 0;
}
