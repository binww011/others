#include <bits/stdc++.h>
using namespace std;

typedef struct {
    int id, gold = 0, silver = 0, bronze = 0;
} country;


int main(int argc, char *argv[])
{
    int coun_n, moda_n;
    cin >> coun_n >> moda_n;
    country comps[coun_n];
    
    for (int i = 1; i <= coun_n; ++i) comps[i-1].id = i;
    
    int gold, silver, bronze;
    
    for (int i = 0; i < moda_n; ++i) {
        cin >> gold >> silver >> bronze;
        ++comps[gold-1].gold;
        ++comps[silver-1].silver;
        ++comps[bronze-1].bronze;
    }
    
    sort(comps, comps+coun_n, [](country a, country b) {
        if (a.gold > b.gold) {
            return true;
        } else if (a.gold == b.gold) {
            if (a.silver > b.silver) {
                return true;
            } else if (a.silver == b.silver) {
                if (a.bronze > b.bronze) {
                    return true;
                } else if (a.bronze == b.bronze) {
                    return a.id < b.id;
                } else {
                    return false;
                }
            } else {
                return false;
            }
        } else {
            return false;
        }
    });
    
    for (country c : comps) cout << c.id << " ";
    
    return 0;
}
