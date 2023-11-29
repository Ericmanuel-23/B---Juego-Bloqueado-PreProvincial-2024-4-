#include <bits/stdc++.h>
#define ll long long
#define PB push_back
#define S second
#define F first
#define PF push_front

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> res(26);

    for(int i = 0 ; i < n;i++){
        string a, b;
        cin >> a >> b;
        vector<pair<int,int> >ma(26), mb(26);
        for(int i  = 0 ; i < a.size() ; i++){
            ma[a[i] - 97].S++;
        }
        for(int i  = 0 ; i < b.size() ; i++){
            mb[b[i]- 97].S++;
        }
        for(int i = 0; i < 26; i++){
            res[i] = max(ma[i].S, mb[i].S);
        }
    }

    for(int i = 0; i < 26; i++){
        cout<<res[i]<<'\n';
    }
    return 0;
}
