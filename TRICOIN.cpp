#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    
	    float a = (((-1)+sqrt(1 + (8*n) ))/2);
	    float b = (((-1)-sqrt(1 + (8*n) ))/2);
	    
	    float max = a > b ? a : b;
	    
	    cout<<floor(max)<<endl;
	}
	return 0;
}
