#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   int n,sum=0;
	   cin>>n;
	   int q[n][2];
	   int tq[11];
	   
	   for(int i=0;i<n;i++)
	   {
	       for(int j=0;j<2;j++)
	       {
	           cin>>q[i][j];
	       }
	   }
	   
	   for(int i=0;i<11;i++)
	   {
	       tq[i]=0;
	       for(int j=0;j<n;j++)
	       {
	           if(i+1 < 9 && i+1 >0)
	            {
	             if(i+1 == q[j][0])
	                {
	                tq[i] = q[j][1]>tq[i]?q[j][1]:tq[i];
	                }
	             }
	       }
	       sum += tq[i];
	   }
	   cout<<sum<<endl;
	   
	}
	return 0;
}
