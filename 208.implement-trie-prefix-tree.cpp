/*
 * @lc app=leetcode id=208 lang=cpp
 *
 * [208] Implement Trie (Prefix Tree)
 */

// @lc code=start
class Trie {
public:
    Trie() {
        
    }
    vector<string> s;
    
    void insert(string word) {
        s.push_back(word);
    }
    
    bool search(string word) {
        for(string st : s){
            if(st == word)return 1;
        }
        return 0;
    }
    
    bool startsWith(string prefix) {
        for(string st : s){
            string r = st.substr(0,prefix.length());
            if(r==prefix)return 1;
        }
        return 0;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
// @lc code=end

