#include <bits/stdc++.h> 
//You can name variable properly. Dont need to include all libraries.
using namespace std;
#define ll long long 
set<string>uniquely_decodable_string;
ll total_strings(string s)
{
	ll ans=0;
	int l=s.size();
	if(s=="")
	{
		return 1;
	}
	else
	{
		for(int i=0;i<l;i++)
		{
			if(uniquely_decodable_string.find(s.substr(0,i+1))!=uniquely_decodable_string.end())
			{

				ans+=total_strings(s.substr(i+1,l-i));
			}
		}
	}
	return ans;
}
int main()
{
	int n;
	cin >>n;
	for(int i=0;i<n;i++)
	{
		string s;
		cin >>s;
		uniquely_decodable_string.insert(s);
	}
	string s;
	cin >>s;
	cout<<total_strings(s);
}
