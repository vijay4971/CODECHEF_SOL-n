#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    int count[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        count[i]=0;
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(arr[i]==arr[j])
	            {
	                count[i]++;
	            }
	        }
	    }
	    int max=count[0];
	    for(int i=1;i<n;i++)
	    {
	        max = count[i]>max?count[i]:max;
	    }
	    cout<<n-max<<endl;
	}
	return 0;
}
