//COde to sort the unordered map
int cmp1(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}
int cmp2(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}
int main()
{
    unordered_map<int, int> mp;
    mp[1] = 2;
    mp[5] = 4;
    mp[7] = 0;
    mp[0] = 1;

    vector<pair<int, int>> v(mp.begin(), mp.end());

    sort(v.begin(), v.end(), cmp2);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;
}
