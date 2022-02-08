// #include "TrieNode.h"
#include <string>
#include <bits/stdc++.h>
using namespace std;
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
    	bool search(TrieNode *root, string word){
			if(word.size()==0){
            return true;
		}
	        int index=word[0]-'a';
	        TrieNode *child;
	        if(root->children[index]!=NULL){
	            child=root->children[index];
	        }else{
	            return false;
	        }
	        return search(child, word.substr(1));
		}
		bool search(string word){
			return search(root, word);
		}
	bool patternMatching(vector<string> vect, string pattern) {
        for(int i=0;i<vect.size();i++){
            string s=vect[i];
            for(int j=0;j<vect[i].size();j++){
                insertWord(vect[i].substr(j));
            }            
        }
        return search(pattern);
	}
};
int main(){
	string pattern;
	int n;
	cin>>n;
	vector<string>v;
	cin>>pattern;
	for(int i=0;i<n; i++){
		string s;
		cin>>s;
		v.push_back(s);
	}
	Trie t;
	bool d = t.patternMatching(v,pattern);
	if(d==true){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
}
// 2
// hat
// this
// that
// true


// 3
// hat
// this
// there
// them
// false



// if(pattern.size()==0){
//             return true;
//         }
        
//         int index=pattern[0]-'a';
//         TrieNode *child;
//         if(vect->children[index]!=NULL){
//             child=vect->children[index];
//         }else{
//             return false;
//         }
        
//         return patternMatching(vect, pattern+1);




// // Palindrome Pair
// #include <string>
// #include <vector> 
// class TrieNode {
// 	public :
// 	char data;
// 	TrieNode **children;
// 	bool isTerminal;
// 	int childCount;

// 	TrieNode(char data) {
// 		this -> data = data;
// 		children = new TrieNode*[26];
// 		for(int i = 0; i < 26; i++) {
// 			children[i] = NULL;
// 		}
// 		isTerminal = false;
// 		childCount = 0;
// 	}
// };

// class Trie {
// 	TrieNode *root;

// 	public :
// 	int count;

// 	Trie() {
// 		this->count = 0;
// 		root = new TrieNode('\0');
// 	}

// 	bool insertWord(TrieNode *root, string word) {
// 		// Base case
// 		if(word.size() == 0) {
// 			if (!root->isTerminal) {
// 				root -> isTerminal = true;
// 				return true;	
// 			} else {
// 				return false;
// 			}
// 		}

// 		// Small Calculation
// 		int index = word[0] - 'a';
// 		TrieNode *child;
// 		if(root -> children[index] != NULL) {
// 			child = root -> children[index];
// 		}
// 		else {
// 			child = new TrieNode(word[0]);
// 			root -> children[index] = child;
// 			root->childCount++;
// 		}

// 		// Recursive call
// 		return insertWord(child, word.substr(1));
// 	}

// 	// For user
// 	void insertWord(string word) {
// 		if (insertWord(root, word)) {
// 			this->count++;
// 		}
// 	}

	

// 	// bool findIfPalindromePair(vector<string> arr) {
// 	// 	// Complete this function
// 	// 	// Return true or false.
        
//  // }
    
    
    
    
// bool check(string word)
// {
//     int k=word.size()-1;
//     for(int i=0,j=k;i<j;i++,j--)
//     {
//         if(word[i]!=word[j])
//             return false;
//     }
//     return true;
// }bool search(TrieNode * root,string word)
// {
//     if(word.length()==0)
//     {
//         if(root->isTerminal)
//             return true;
//         else
//             return false;
//     }int index=word[0]-'a';
//     if(root->children[index]!=NULL)
//         return search(root->children[index],word.substr(1));
//     else
//         return false;
// }
        
// 	bool check(TrieNode * root,string word)
//     {
//         int j=0;
//         string a;
//        for(int i=word.length()-1;i>=0;i--)
//        {
//            a.push_back(word[i]);
//            j++;
//        }
//         if(search(root,a)||search(root,a.substr(1)) )
//              return true;
//              else
//              return false;        
//     }

// 	bool findIfPalindromePair(vector<string> arr) {
// 		for(int i=0;i<arr.size();i++)
//         {
//            if( check(arr[i]))
//                return true;   
//             insertWord(arr[i]);
//         }
//         for(int i=0;i<arr.size();i++)
//         {
//             if(check(root,arr[i]))
//                 return true;
//         }   
//         return false;    
//     }


// };
