#include<bits/stdc++.h>
using namespace std;

bool check(string a,string b){
		if(a==b)
			return 1;
		for(int i=0,j=0;i<a.size()&&j<b.size();i++,j++){
		 if(a[i]!=b[j]) return 0;
		}
	return 1;
}


int main(){
	int n;
	cout <<"No. of Codes : ";
	cin >>n;
	string a[n];
	for(int i=0;i<n;i++) cin >>a[i];
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(check(a[i],a[j])){
				cout <<"NO";
				return 0;
			}
		}
	}
	cout <<"YES";
	return 0;
}
