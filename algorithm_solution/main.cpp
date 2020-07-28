#include <iostream>
#include <string>

using namespace std;
int a[21];
int main() {
	int n = 0;
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int M;
	cin >> M;
	for (int i = 0; i < M; i++) {

		string oper;
		cin >> oper;
		if (oper == "all") {
			n = (1 >> 21)-1;
			continue;
		}
		else if(oper=="empty") {
			n = 0;
			continue;
		}
		int insert;
		cin >> insert;
		if (oper == "add") {
			n |= (1 <<insert);
		}
		else if (oper == "toggle") {
			n ^= (1 << insert);
		}
		else if (oper=="remove") {
			n = n & (~(1 << insert));
		}
		else if (oper == "check") {
			if ((n&(1 << insert)) == 0) {
				cout << "0" << "\n";
			}
			else {
				cout << "1" << "\n";
			}
		}

	}
	system("pause");
	
}