#include<bits/stdc++.h>
using namespace std;
int main()
 {
	      long long n;
	      cin>>n;
	      int count=0;
	     while(n%2==0)
	       {
	             count++;
	             n=n/2;
	       }
	       if(count>0)
	         cout<<2<<" "<<count<<" ";
	        count=0;
	        for(int i=3;i*i<=n;i=i+2)
	           {
	               count=0;
	               while(n%i==0)
	                  {
	                      count++;
	                      n=n/i;
	                  }
	                  if(count>0)
	                    cout<<i<<" "<<count<<" ";
	           }
	           if(n>2)
	              cout<<n<<" "<<1<<" ";
	              cout<<endl;
	      
		return 0;
}
