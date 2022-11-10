vector<int> kMaxSumCombination(vector<int> &A, vector<int> &B, int n, int k){
	vector<int> ans;
    sort(A.begin(), A.end(), greater<int>());
    sort(B.begin(), B.end(), greater<int>());
     priority_queue<pair<int, pair<int, int>>> pq;
    set<pair<int, int>> vis; 
    
    pq.push({A[0]+B[0], {0 ,0}});
    vis.insert({0, 0});
    
    for(int i=0; i<k; ++i) {
        auto p = pq.top();
        pq.pop();
        ans.push_back(p.first);
        
        if(p.second.first+1 < n && vis.find({p.second.first+1, p.second.second}) == vis.end()) {
            vis.insert({p.second.first+1, p.second.second});
            int x = A[p.second.first+1] + B[p.second.second];
            pq.push({x, {p.second.first+1, p.second.second}});
        }
        if(p.second.second+1 < n && vis.find({p.second.first, p.second.second+1}) == vis.end()) {
            vis.insert({p.second.first, p.second.second+1});
            int x = A[p.second.first] + B[p.second.second+1];
            pq.push({x, {p.second.first, p.second.second+1}});
        }
    }
    
    return ans;
}
