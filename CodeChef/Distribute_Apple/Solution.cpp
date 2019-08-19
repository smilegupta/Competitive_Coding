#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int k,n,val;
		cin>>n>>k;

		val=n/k;
		if(val%k==0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
}
