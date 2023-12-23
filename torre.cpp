#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	int len, tmp = 0;
	cin >> len;
	int vls[len][len];
	int cls[len];
	int lns[len];

	for (int i = 0; i < len; ++i) {
		for (int j = 0; j < len; ++j) {
			cin >> vls[i][j];
		}
		cls[i] = 0;
		lns[i] = 0;
	}

	for (int l = 0; l < len; ++l) {
		for (int c = 0; c < len; ++c) {
			lns[l] += vls[l][c];
		}
	}
    
    for (int c = 0; c < len; ++c) {
        for (int l = 0; l < len; ++l) {
            cls[c] += vls[l][c];
        }
    }
    
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len; ++j) {
            if((lns[i] + cls[j]) - 2*vls[i][j] > tmp)
                tmp = (lns[i] + cls[j]) - 2*vls[i][j];
        }
    }
    
    cout << tmp << endl;
	return 0;
}
