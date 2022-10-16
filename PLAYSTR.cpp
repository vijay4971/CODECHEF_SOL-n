#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,counts1=0,counts0=0,countr1=0,countr0=0;
	    cin>>n;
	    char s[n],r[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>s[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>r[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='1')
	        {
	            counts1++;
	        }
	        else
	        {
	            counts0++;
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(r[i]=='1')
	        {
	            countr1++;
	        }
	        else
	        {
	            countr0++;
	        }
	    }
	    if((countr0 == counts0)&&(countr1 == counts1))
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
