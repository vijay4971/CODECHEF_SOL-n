#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int N,K,i;
	    cin>>N>>K;
	    int A[N];
	    for(i = 0;i<N;i++)
	    {
	        cin>>A[i];
	    }
	    for(i = 0;i<N;i++)
	    {
	        if(K>=A[i])
	        {
	           cout<<"1";
	           K -= A[i];
	        }
	        else{
	            cout<<"0";
	        }
	    }cout<<endl;
	}
	return 0;
}
