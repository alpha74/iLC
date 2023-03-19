// Design words add and search data structure
// https://leetcode.com/problems/design-add-and-search-words-data-structure/description/
// Aman Kumar

// Runtime 2651 ms Beats 6.57%
// Memory 583.4 MB Beats 30.22%
class TNode 
{
    public: 
        unordered_map<char,TNode*> hash ;
        char ch;
        bool end ;

        TNode(char c)
        {
            ch = c ;
            end = false ;
        }
} ;

class WordDictionary {
public:
    TNode *root ;

    WordDictionary() 
    {
        root = new TNode('#');
    }
    
    void addWord(string word) 
    {
        TNode *temp = root ;
        int i = 0 ;
        
        // Traverse Trie for all existing chars
        for( ; i < word.length() ; i++ )
        {
            if( (temp -> hash).find( word[i] ) != (temp -> hash).end() )
                temp = (temp -> hash)[ word[i] ] ;
            else
                break ;    
        }

        // Create new nodes
        for( ; i < word.length() ; i++ )
        {
            TNode *newnode = new TNode(word[i]) ;
            (temp -> hash)[ word[i] ] = newnode ;
            temp = newnode ;
        }

        temp -> end = true ;
    }
    
    bool search(string word) 
    {
        return searchChar(root, word, 0) ;
    }

    bool searchChar(TNode *temp, string word, int index)
    {
        // Case1 : Stopping condition
        if(index == word.length())
        {
            return temp -> end ;
        }

        // Case 2 : char is '.' -> Search all children
        if(word[index] == '.')
        {
            auto it = (temp -> hash).begin() ;

            for( ; it != (temp -> hash).end() ; it++ )
            {
                if( searchChar(it -> second, word, index+1))
                    return true ;
            }
        }
        
        // Case 3 : Current char is not '.'
        if( (temp -> hash).find( word[index] ) != (temp -> hash).end())
            return searchChar( (temp -> hash)[ word[ index ]], word, index+1 ) ;

        return false ;
/*
["WordDictionary","addWord","search"]
[[],["bad"],[".ad"]]
*/
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
