#include <bits/stdc++.h>

using namespace std;

int main() {                            
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;   
  vector<int> t(n);
  for (int i = 0; i < n; i++) {
  	cin >> t[i];
  }
  // check if the first number of minutes is greater than 15
  if (t[0] > 15) {
  	cout << 15 << '\n';
  	return 0;
  }
 	for (int i = 0; i < n - 1; i++) {
 		// check if every duration between t[i] and t[i + 1] is > 15
 		// if there is, then the answer is t[i] + 15 because we won't proceed to t[i + 1] anymore
 		if (t[i + 1] - t[i] > 15) {
 			cout << t[i] + 15 << '\n';
 			return 0;
 		}
 	}
 	// check the last element if it's within 15 minutes by the time it ends in 90 minutes
 	// if it's greater, then add 5 to t[n - 1] to get the maximum minutes that Bear Limak can watch
 	cout << (90 - t[n - 1] > 15 ? t[n - 1] + 15 : 90) << '\n';
 	return 0;
}      