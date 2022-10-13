#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int e,k,count=0;
	    cin>>e>>k;
	    
	    do
	    {
	        e = e/k;
	        count++;
	    }while(e!=0);
	    
	    cout<<count<<endl;
	    
	}
	return 0;
}
