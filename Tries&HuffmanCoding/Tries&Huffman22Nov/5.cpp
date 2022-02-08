// Auto complete
// #include "TrieNode.h"
#include <string>
#include <vector>
class TrieNode {
	public :
	char data;
	TrieNode **children;
	bool isTerminal;

	TrieNode(char data) {
		this -> data = data;
		children = new TrieNode*[26];
		for(int i = 0; i < 26; i++) {
			children[i] = NULL;
		}
		isTerminal = false;
	}
};

class Trie {
	TrieNode *root;

	public :
	int count;

	Trie() {
		this->count = 0;
		root = new TrieNode('\0');
	}

	bool insertWord(TrieNode *root, string word) {
		// Base case
		if(word.size() == 0) {
			if (!root->isTerminal) {
				root -> isTerminal = true;
				return true;	
			} else {
				return false;
			}
		}

		// Small Calculation
		int index = word[0] - 'a';
		TrieNode *child;
		if(root -> children[index] != NULL) {
			child = root -> children[index];
		}
		else {
			child = new TrieNode(word[0]);
			root -> children[index] = child;
		}

		// Recursive call
		return insertWord(child, word.substr(1));
	}

	// For user
	void insertWord(string word) {
		if (insertWord(root, word)) {
			this->count++;
		}
	}
    
    
    void allPossibleWords(TrieNode *new_root, string pattern){
        
        
        
        
    }

    TrieNode* findWord(TrieNode *root, string pattern){
        if(pattern.size()==0){
            return NULL;
        }
        
        int index=pattern[0]-'a';
        TrieNode *child;
        if(root->children[index]!=NULL){
            
            child=root->children[index];
            string s=pattern+1;
            if(child->children[s[0]-'a']!=NULL){
                return findWord(child, pattern+1);

            }else{
                return child;
            }
            
        }else{
            
            return NULL;
        }
        
                    
            
    }
    TrieNode* findWord(string pattern){
        return findWord(root, pattern);
        
    } 
    void autoComplete(vector<string> input, string pattern) {
        // Complete this function
        // Print the output as specified in question
    
        TrieNode *new_root=findWord(pattern);
        if(new_root==NULL){
            cout<<"There is no word which starts with "<<pattern;
        }else{
            allPossibleWords(new_root, pattern);
        }
        
    }
    
    
    

};
