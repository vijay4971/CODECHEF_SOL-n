#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int l,b;
	    cin>>l>>b;
	    
	    int limit_l=0,limit_b=0;
	    for(int i=0;;i++)
	    {
	        int k = (i+1)%2;
	        if(k == 1)
	        {
	            
	            limit_l+= i+1;
	            if(limit_l>l)
	            {
	                cout<<"Bob"<<endl;
	                break;
	            }
	        }
	        else
	        {
	            limit_b+=i+1;
	            if(limit_b>b)
	            {
	                cout<<"Limak"<<endl;
	                break;
	            }
	            
	        }
	    }
	}
	return 0;
}
