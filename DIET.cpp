#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,i,r=0;
	    cin>>n>>k;
	    int dose[n];
	    
	    for(i=0;i<n;i++)
	    {
	       cin>>dose[i]; 
	    }
	    
	    int count = 0;
	    for(i=0;i<n;i++)
	    {
	        r += dose[i] - k;
	            
	       if(r<0)
	        {
	            cout<<"NO "<<i+1<<endl;
	            break;
	        }
	        else
	        {
	            count++;
	        }
	    }
	    if(count == n)
	    {
	      cout<<"YES"<<endl;  
	    }
	}
	return 0;
}
