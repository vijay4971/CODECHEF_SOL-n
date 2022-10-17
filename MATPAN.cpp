#include <bits/stdc++.h>
#include<iostream>
#include<cstdio>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   int arr[26],sum=0,count[26];
	   char alpha[26];
	   
	   for(int i=0;i<26;i++)
	   {
	       cin>>arr[i];
	       count[i]=0;
	       alpha[i] = char('a' + i);
	   }
	   
	   char str[50000];
	   scanf("%s",str);
	   
	   int l = strlen(str);
	   
	   for(int j=0;j<26;j++)
	   {
	       for(int i=0;i<l;i++)
	       {
	           if(alpha[j]==str[i])
	           {
	               count[j]++;
	               break;
	           }
	       }
	   }
	   for(int j=0;j<26;j++)
	   {
	       if(count[j] == 0)
	       {
	           sum += arr[j];
	       }
	       else
	       {
	           continue;
	       }
	   }
	   cout<<sum<<endl;
	}
	return 0;
}
