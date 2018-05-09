#include <iostream>
#include <string>
using namespace std;



void solution(int n, int *arr1, int *arr2) {
	string a, b;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j<n; j++) {
			a += arr1[i] % 2;
			b += arr2[i] % 2;
			arr1[i] /= 2;
			arr2[i] /= 2;
		}
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		string c;
		for (int i = 0; i < n; i++) {
			if (a[i] | b[i]) cout << '#';
			else cout << ' ';
		}
		cout << '\n';
	}

}

int main() {
	int n;
	cin >> n;

	int *arr1 = new int[n];
	int *arr2 = new int[n];
	for (int i = 0; i < n; i++) cin >> arr1[i];
	for (int i = 0; i < n; i++) cin >> arr2[i];

	solution(n, arr1, arr2);


	return 0;
}