class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int,int>map;
        int n=s.size();
        int m=t.size();
        if(n!=m) return false;
        for(int i=0;i<n;i++){
            map[s[i]]++;
        }
        for(int i=0;i<m;i++){
            if((map.find(t[i])==map.end() )|| map[t[i]]<=0) return false;
            map[t[i]]--;
        }
        return true;
    }
};