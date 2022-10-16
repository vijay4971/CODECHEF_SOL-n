#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,N=0,Y=0,I=0;
	    cin>>n;
	    char g[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>g[i];
	        
	        if(g[i]=='N')
	        {
	        N++;
	        }
	        else if(g[i]=='Y')
	        {
	        Y++;
	        }
	        else if(g[i] == 'I')
	        {
	        I++;
	        }
	    }
	    if(N == n)
	    {
	        cout<<"NOT SURE"<<endl;
	    }
	    else if(N <= n && I <= n && Y == 0)
	    {
	        cout<<"INDIAN"<<endl;
	    }
	    else if(N <= n && Y <= n && I == 0)
	    {
	        cout<<"NOT INDIAN"<<endl;
	    }
	}
	return 0;
}
