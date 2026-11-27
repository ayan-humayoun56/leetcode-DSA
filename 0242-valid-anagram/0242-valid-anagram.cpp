class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp_s;
        unordered_map<char,int>mp;
        for(int i = 0 ; i<s.length() ; i++){
            mp_s[s[i]]++;
        }

        for(int j = 0 ; j<t.length() ; j++){
            mp[t[j]]++;
        }
        if(s.length()!=t.length()){
             return false;
            }
        for(auto it:mp_s){
            
            if(mp[it.first]!= it.second){
            
                return false;
            }
        }
        return true;
    }

};