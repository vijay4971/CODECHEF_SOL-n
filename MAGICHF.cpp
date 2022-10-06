#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,s;
	    cin>>n>>x>>s;
	    
	    int temp=x;
	    
	    int arr[s][2];
	    
	    for(int i =0 ;i<s;i++)
	    {
	        for(int j=0;j<2;j++)
	        {
	           cin>>arr[i][j];
	        }
	    }
	    
	    for(int i =0 ;i<s;i++)
	    {
	        if(temp==arr[i][0])
	        {
	           temp = arr[i][1];
	        }
	        else if(temp==arr[i][1])
	        {
	            temp =arr[i][0] ;
	        }
	    }
	    cout<<temp<<endl;
	    
	}
	return 0;
}
