#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,w;
        cin>>n>>w;
        int weight[n],value[n];
        for(int i=0;i<n;i++){
            cin>>value[i]>>weight[i];
        }
        float arr[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=float(value[i])/weight[i];
        }
        for(int i=0;i<n;i++)
        for (int j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1]) { 
            swap(value[j], value[j+1]);  
            swap(arr[j],arr[j+1]); 
            swap(weight[j],weight[j+1]);}
        float sum=0,weih=0;
        for(int i=n-1;i>=0;i--)
        {
            if(weih<w){
            sum=sum+float(value[i]);weih=weih+float(weight[i]);}
            if(weih>w){
            sum=sum-float(value[i]);weih=weih-float(weight[i]);weih=float(w)-weih;sum=sum+(weih*arr[i]);break;}
        }
        printf("%.2f", sum);
		cout<<endl;   
}
