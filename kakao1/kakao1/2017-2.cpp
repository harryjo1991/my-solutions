#include <iostream>
#include <string>

using namespace std;

int main() {
	string in;
	int num[3],pos,sum;
	cin >> in;
	sum = pos = 0;
	for (int i = 0; i < in.length(); i++) {
		if (in[i] >= '0' && in[i] <= '9') {
			num[pos] = in[i]-'0';
			pos++;
		}
		else if(in[i] == 'D') num[pos-1] = num[pos - 1] * num[pos - 1];
		else if(in[i] == 'T') num[pos - 1] = num[pos - 1] * num[pos - 1] * num[pos - 1];
		
		else if (in[i] == '#') num[pos - 1] *= -1;
		else if (in[i] == '*') {
			num[pos - 1] *= 2;
			if (pos >= 1) num[pos - 2] *= 2;
		}

	}
	cout << num[0] + num[1]+ num[2];

	return 0;
}