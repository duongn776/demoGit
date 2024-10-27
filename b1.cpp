#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<char> conver_number(long long n) {
	vector<char> hex_digits;
	if (n == 0) {
		hex_digits.push_back('0');
	}else {
		while (n > 0) {
			int remainder = n % 16;
			if (remainder < 10) {
				hex_digits.push_back(remainder + '0');
			}else {
				hex_digits.push_back(remainder - 10 + 'a');
			}
			n /= 16;
		}
		reverse(hex_digits.begin(), hex_digits.end());
	}
	return hex_digits;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		vector<char> res = conver_number(n);
		for (char x : res) {
			cout << x;
		}
		cout << endl;
	}
}