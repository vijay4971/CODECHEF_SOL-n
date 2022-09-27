#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--)
	{
	    int n,coutn=0;
	    cin>>n;
	    
	    char arr[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        if(arr[i] == '1')
	        {
	        coutn++;
	        }
	    }
	    
	    if(((coutn)+(120-n))>=90)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	        
	    }
	return 0;
}
