#include <iostream>
#include <string>

using namespace std;

string letter = "0123456789ABCDEF";
string solution="0";



string jinsu(int i, int jin) {
	string str;
	int div = jin;
	while (i > 0) {
		str += letter[i % div];
		i /= div;
		//div *= jin; 
	}
	reverse(str.begin(), str.end());
	return str;
}

int main() {
	int n, t, m, p;
	cin >> n >> t >> m >> p;
	int limit = t * m;
	for (int i = 0; i < 100000; i++) {
		solution += jinsu(i, n);
		if (solution.length() > limit) break;
	}
	//cout << solution;
	int count=0;
	p--;
	for (int i = p;;i=i+m) {
		cout << solution[i];
		count++;
		if (count == t) break;
	}


	return 0;
}