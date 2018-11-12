#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
  	int n;
  	cout <<"No. of Codes : ";
  	cin >>n;
    char arr[n] ; 
    double freq[n] ;
	double tot =0; 
    for(int i=0;i<n;i++){
    	cout <<"Code String "<<i+1<<" : ";
		cin >>arr[i];
		cout <<"frequency : ";
		cin >>freq[i];
		tot += freq[i];
	}
    double ans=0;
    for(int i=0;i<n;i++){
    	double p = freq[i]/tot;
    	ans += p*(log2(1.0/p));
	}
	cout <<"entropy : "<<ans<<endl;
    return 0; 
} 
