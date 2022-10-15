class Solution {
public:
    bool isp(string s,int l,int r){
        while(l<r){
            if(s[l++]!=s[r--])return false;
        }
        return true;
    }
    void help(int ind,string s,vector<string>&path,vector<vector<string>>&res){
        if(ind==s.length()){
            res.push_back(path);
            return;
        }
        for(int i=ind;i<s.length();i++){
            if(isp(s,ind,i)){
                path.push_back(s.substr(ind,i-ind+1));
                help(i+1,s,path,res);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string>path;
        help(0,s,path,res);
        return res;
    }
};
