#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	    int  x,y,z;
	    cin>>x>>y>>z;
	    
	    if((x+y-z == 0)  || (x-y+z == 0) || (y+z-x == 0) || (x-y-z == 0) || (z-y-x == 0) || (y-x-z == 0))
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
