#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	vector<int> fita = {};
	
	int len, tmp, doa = 0, dop = 0;
	bool doae = false, dope = false;

	cin >> len;
	
	while (len) {
		cin >> tmp;
		fita.push_back(tmp);
		--len;
	}

	for (int i = 0; i < fita.size(); ++i)
	{
		if (!fita[i]) continue;

		for (auto r = i; r >= 0; --r)
		{
			if (fita[r] == 0)
            {
                doae = true;
                break;
            }

			if (r == 0)
			{
				doae = false;
				break;
			}

			++doa;
		}

		for (auto p = i; p < fita.size(); ++p)
		{
			if (fita[p] == 0)
            {
                dope = true;
                break;
            }

			if (p == fita.size()-1)
			{
				dope = false;
				break;
			}

			++dop;
		}

		if (doae && dope) {
			fita[i] = (doa < dop) ? doa : dop;
            if (fita[i] > 9) fita[i] = 9;
		} else {
			if (doae) {
				fita[i] = doa;
                if (fita[i] > 9) fita[i] = 9;
			} else {
				fita[i] = dop;
                if (fita[i] > 9) fita[i] = 9;
			}
		}

		doa = 0;
		dop = 0;
	}

	for (int q : fita)
		cout << q << " ";

	return 0;
}
