#include <iostream>
using namespace std;
int main() {
	int r1 = 3, c1 = 3, r2 = 3, c2 = 3, r3 = 3, c3 = 3, res[3][3];
	int a[3][3] = { {2,4,1},{2,3,9},{3,1,8} };
	int b[3][3] = { {1,2,3},{3,6,1},{2,4,7} };
	if (r2 != c1)
		cout << "Can't multiply!";
	else {
		cout << "first matrix: " << endl;
		for (int i = 0; i < r1; i++) {
			for (int j = 0; j < c1; j++)
				cout << a[i][j] << " ";
			cout << endl;
		}
		cout << "second matrix" << endl;
		for (int i = 0; i < r2; i++) {
			for (int j = 0; j < c2; j++)
				cout << b[i][j] << " ";
			cout << endl;
		}
		for (int i = 0; i < r3; i++)
			for (int j = 0; j < c3; j++)
				res[i][j] = 0;
		for (int i = 0; i < r1; i++)
			for (int j = 0; j < c2; j++)
				for (int k = 0; k < c1; k++)
					res[i][j] += a[i][k] * b[k][j];
		cout << "Result Matrix: " << endl;
		for (int i = 0; i < r3; i++) {
			for (int j = 0; j < c3; j++)
				cout << res[i][j] << " ";
			cout << endl;
		}
	}
	system("pause");
}