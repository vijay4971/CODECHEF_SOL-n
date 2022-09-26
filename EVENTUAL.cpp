#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k=0;
	    cin>>n;
	    
	    int count[n];
	    
	    char s[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>s[i];
	        count[i]=0;
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(s[i]==s[j])
	            {
	                count[i]++;
	            }
	        }
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        
	        if((count[i]%2)==1)
	        {
	        cout<<"NO"<<endl;
	        k=0;
	        break;
	        }
	        else if(count[i]%2==0){
	        k++;}
	    }
	    if(k>0)
	    cout<<"YES"<<endl;
}
	return 0;
}
