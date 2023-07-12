class Solution{   
public:
    int minimumMagic(int N, int M, vector<int>& price, vector<int>& magical_price) {
    int tc = 0;
    int min_toys = 0;

    for (int i = 0; i < N; i++) {
        tc += price[i];
    }
    if (tc <= M) {
        return 0;
    }
    vector<pair<int, int>> toys;
    for (int i = 0; i < N; i++) {
        toys.push_back({price[i], magical_price[i]});
    }
    sort(toys.rbegin(), toys.rend());

    
    for (int i = 0; i < N; i++) {
        tc -= (toys[i].first - toys[i].second);
        min_toys++;
        if (tc <= M) {
            return min_toys;
        }
    }
    return -1;
}
};