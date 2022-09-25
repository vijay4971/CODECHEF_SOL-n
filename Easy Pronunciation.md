
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count=0,count1=0;
	    cin>>n;
	    
	    char str[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>str[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' )
	        {
	            count = 0;
	        }
	        else
	        {
	            count++;
	            if(count==4)
	            {
	            cout<<"NO"<<endl;
	            break;
	            }
	            
	        }
	    }if(count < 4)
	    cout<<"YES"<<endl;
	}
	return 0;
}
