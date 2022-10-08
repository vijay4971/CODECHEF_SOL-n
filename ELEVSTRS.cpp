#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    float n,v1,v2;
	    cin>>n>>v1>>v2;
	    
	    if((((n)*sqrt(2))/v1)>((2*n)/v2))
	    {
	        cout<<"Elevator"<<endl;
	    }
	    else if((((n)*sqrt(2))/v1)<((2*n)/v2))
	    {
	        cout<<"Stairs"<<endl;
	    }
	}
	return 0;
}
