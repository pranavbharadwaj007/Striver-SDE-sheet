
// Link : https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1

    static bool cmp(pair<int,int> &a, pair<int,int> &b) {
        return a.second < b.second;
    }
    public:
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>> v;
        for (int i = 0; i < n; i++) {
            v.push_back(make_pair(start[i], end[i]));
        } sort(v.begin(), v.end(), cmp);
        int count = 1, prevEnd = v[0].second;
        for (int i = 1; i < n; i++) {
            if (v[i].first > prevEnd) {
                count++;
                prevEnd = v[i].second;
            }
        } 
        return count;
        
    }
