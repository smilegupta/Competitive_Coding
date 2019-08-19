#include<bits/stdc++.h>
using namespace std;
int main() {
	
	int t;
	cin >>t;
	while(t--)
	{int n;
	 cin >>n;
	 int a[n],b[n];
	 int score,max=0;
	 for (int i=0;i<n;i++)
	    cin >>a[i];
	 for (int i=0;i<n;i++)
	    cin >>b[i];
	 
	  for (int i=0;i<n;i++)
	  {
	      score= a[i]*20-b[i]*10;
	      if (score<0)
	        score=0;
	      if (max<score)
	        max=score;
	  }
	  
	  cout <<max<<endl;
	}
	return 0;
}
