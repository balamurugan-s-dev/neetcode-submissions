class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() !=  t.size()){
            return false;
        }

        map<char, int> myMap1, myMap2;
        
        for(int i = 0; i < s.size(); i++){
            myMap1[s[i]]++;
            myMap2[t[i]]++;
        }
        
        return myMap1 == myMap2;
    }
};
