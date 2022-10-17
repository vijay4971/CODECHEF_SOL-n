#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	    int n,max=0,solution=0;
	    cin>>n;
	    int arr[n],count[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        count[i]=0;
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(arr[i]==arr[j])
	            {
	                count[i]++;
	            }
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        max = max>count[i]?max:count[i]; 
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        if(max == count[i])
	        {
	            solution++;
	        }
	    }
	    if(max > 1)
	    {
	        if((solution >= 2) || (solution == (n*n)))
	        {
	            if(max < solution)
	            {
	                cout<<"NO"<<endl;
	            }
	            else if(max >= solution)
	            {
	            cout<<"YES"<<endl;
	            }
	        }
	        else
	        {
	            cout<<"NO"<<endl;
	        }
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
