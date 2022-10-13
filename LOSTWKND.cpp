#include <iostream>
using namespace std;

int main() {
	int i;
	cin>>i;
	while(i--)
	{
	    int arr[5],sum=0;
	    for(int t=0;t<5;t++)
	    {
	        cin>>arr[t];
	        sum+=arr[t];
	    }
	    int p;
	    cin>>p;
	    sum*=p;
	    
	    if(sum > 120)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	    
	}
	return 0;
}
