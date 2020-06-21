#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int n;
	cin>>n;
	int k;
	cin>>k;
	while (n % 2 == 0)  
    {  
    	k--; 
        n = n/2; 
        if (k == 0) 
         cout<< 2;
    }  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {
        while (n%i == 0) 
        { 
            if (k == 1) 
              cout<< i; 
  
            k--; 
            n = n/i; 
        }  
    }  
    if (n > 2 && k==1)  
        cout << n ;  
	return 0;
}
