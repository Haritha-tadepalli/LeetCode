/*
Question: https://leetcode.com/problems/implement-trie-prefix-tree/
Solution: https://leetcode.com/problems/implement-trie-prefix-tree/submissions/916764523/
*/

class Node{
    public:
        Node *links[26];
        bool flag = false;

        Node *containsKey(char ch){
            return links[ch - 'a'];
        }
        
        void put(char ch, Node *temp){
            links[ch - 'a'] = temp;
        }
        
        Node *next(char ch){
            return links[ch - 'a'];
        }

        void setEnd(){
            flag = true;
        }

        bool isEnd(){
            return flag;
        }
};

class Trie {
private: Node *root;
public:
    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        Node *node = root;
        for(int i = 0; i < word.size(); i++){
            if(!node->containsKey(word[i]))
                node->put(word[i], new Node());
            node = node->next(word[i]);
        }
        node->setEnd();
    }
    
    bool search(string word) {
        Node * node = root;
        for(int i = 0; i < word.size(); i++){
            if(!node->containsKey(word[i]))
                return false;
            node = node->next(word[i]);
        }
        return node->isEnd();
    }
    
    bool startsWith(string prefix) {
        Node *node = root;
        for(int i = 0; i < prefix.size(); i++){
            if(!node->containsKey(prefix[i]))
                return false;
            node = node->next(prefix[i]);
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */