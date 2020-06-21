#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int k;
	cin>>k;
	int r= 0; 
      
    for (int i = 0; i < n; ++i)
	 { 
      
        if (a[i] != 1 && a[i] > k) { 
            r= r + min(a[i] % k, k - a[i] % k); 
        } 
        else { 
            r = r + k - a[i]; 
        } 
    } 
  	cout<<r;  
	return 0;
}
