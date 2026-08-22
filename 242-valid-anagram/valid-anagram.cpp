class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        bool anagram;
        if(s==t){
            anagram=true;
        }
        else{
            anagram=false;
        }
        return anagram;

    }
};