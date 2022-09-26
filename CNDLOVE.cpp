#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,ct=0;
	    cin>>n;
	    
	    int c[n];
	    
	    for(int i=0;i<n;i++)
	    {
	     cin>>c[i];
	     ct += c[i];
	    }
	    if(ct%2==1)
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
