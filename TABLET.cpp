#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int N,B,r=0;
	    cin>>N>>B;
	    
	    int W[N],H[N],P[N],A,max = 0,l = N;
	    
	    for(int i=0;i<N;i++)
	    {
	        cin>>W[i]>>H[i]>>P[i];
	    }
	    for(int i=0;i<N;i++)  
	    {
	        if(P[i] <= B)
	        {
	            A = W[i] * H[i];
	            
	            max = max<A?A:max;
	        }
	        else
	        {
	            r++;
	        }
	           
	    } if(r == l)
	            {
	                cout<<"no tablet"<<endl;
	            }
	       else
	       {
	          	    cout<<max<<endl;
 }
	}
	return 0;
}
