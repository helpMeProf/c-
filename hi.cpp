#include<iostream>
#include<string>

using namespace std;
int a[21];

int main() {
	int M;
	cin >>M;
	for (int i = 0; i <= 21; i++) {
		a[i] = 0;
	}
	for (int i = 0; i < M; i++) {
		string oper;
		int num;
		cin >> oper;
		if (oper == "all") {
			for (int j = 1; j <= 20; j++) {
				a[j] = 1;
				
			}
			continue;
		}
		else if (oper == "empty") {
			for (int j = 1; j <= 20; j++) {
				a[j] = 0;

			}
			continue;
		}
		cin >> num;
		if (oper == "add") {
			if (a[num]==0) {
				a[num]=1;
			}

		}
		else if (oper == "check") {
			if (a[num] != 0) {
				cout << "1" << endl;
			}
			else {
				cout << "0" << endl;
			}
		}
		else if (oper == "remove") {
			if (a[num] != 0) {
				a[num] = 0;
			}
		}
		else if (oper == "toggle") {
			if (a[num] == 0)
				a[num] = 1;
			else
				a[num] = 0;
		}
	}
}