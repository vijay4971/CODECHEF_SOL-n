#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int w1,w2,x1,x2,m;
	    cin>>w1>>w2>>x1>>x2>>m;
	    
	    int mx1=m*x1;
	    int mx2=m*x2;
	    
	    if((w2-w1)>mx2 || (w2-w1)<mx1)
	    cout<<0<<endl;
	    else
	    cout<<1<<endl;
	}
	return 0;
}
