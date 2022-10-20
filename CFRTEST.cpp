#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k=0;
	    cin>>n;
	    int f[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>f[i];
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            if(f[i]==f[j])
	            {
	                f[j]=0;
                }	            
	        }
	        if(f[i]!=0)
	        k++;
	    }
	    cout<<k<<endl;
	}
	return 0;
}
