#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
    int len, cnt = 0;
    cin >> len;
    int vec[len], tmp[len];
    vector<int> res = {};
    
    for (int i = 0; i < len; ++i) {
        cin >> vec[i];
        tmp[i] = vec[i];
    }
    
    sort(tmp, tmp+len);
    
    for (int i = 0; i < len; ++i) {
        if (vec[i] != tmp[i]) {
            ++cnt;
            res.push_back(vec[i]);
        }
    }
    
    sort(res.begin(), res.end());
    
    cout << cnt << endl;
    
    for (int e : res) {
        cout << e << " ";
    }
    
    return 0;
}
