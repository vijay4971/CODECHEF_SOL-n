#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	    int t,n,sn;
	    cin>>t>>n>>sn;
	    
	    int rem = sn % n;
	    int d = sn / n;
	    
	    if(d<t)
	    {
	        cout<<((d*(n*n))+(rem*rem))<<endl;
	    }
	    else if((d >= t) || (rem !=0))
	    {
	        cout<<(t*(n*n))<<endl;
	    }
	}
	return 0;
}
