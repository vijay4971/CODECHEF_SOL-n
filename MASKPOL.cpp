#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a;
	    cin>>n>>a;
	    
	    int min = (a<(n-a))?a:(n-a);
	    
	    cout<<min<<endl;
	}
	return 0;
}
