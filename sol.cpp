#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	string s="abcdefghijklmnopqrstuvwxyz";
	reverse(s.begin(), s.end());
	while(t--) {
		int n;
		cin >> n;
		char a[n];
		for(int i=0; i<n; ++i)
			cin >> a[i];
		if(n%2==1) {
			for(int i=0; i<n-1; ++i) {
				if(i==n-2)
					break;
				swap(a[i], a[i+1]);
				i++;
			}
		} else {
			for(int i=0; i<n-1; ++i) {
				swap(a[i], a[i+1]);
				i++;
			}
		}
		for(int i=0; i<n; ++i) {
			for(int j=0; j<(int)s.size(); ++j) {
				if('a'-a[i]==s[j]-'z') {
					a[i]=s[j];
					break;
				}
			}
		}
		for(int i=0; i<n; ++i)
			cout << a[i];
		cout << "\n";
	}
}
