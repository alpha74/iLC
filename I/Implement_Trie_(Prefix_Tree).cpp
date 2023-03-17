// Implement Prefix tree
// https://leetcode.com/problems/implement-trie-prefix-tree/description/
// Aman Kumar

// Runtime 78 ms Beats 43.84%
// Memory 44.4 MB Beats 82.31%
class TNode 
{
    public: 
        char c ;
        unordered_map<char,TNode*> child ;
        bool end ;

        TNode(char ch)
        {
            c = ch ;
            end = false ;
        }
} ;

class Trie {
public:
    TNode *root ;

    Trie() 
    {
        root = new TNode('#');
    }
    
    void insert(string word) 
    {
        TNode *temp = root ;
        int i = 0 ;

        for( ; i < word.length() ; i++)
        {
            // If curr char exists in hashmap
            if((temp -> child).find( word[i] ) != (temp -> child).end())
                temp = (temp -> child)[ word[i] ] ;
            
            else
                break ;
        }   

        // If word already exists
        if( i == word.length() )
        {
            // Mark end so that this substring signifies a complete keyword
            temp -> end = true ;
            return ;
        }

        // Add remaining words in Trie 
        for( ; i < word.length() ; i++ )
        {
            TNode *newnode = new TNode(word[i]) ;
            (temp -> child)[ word[i] ] = newnode ;

            temp = (temp -> child)[ word[i] ] ;
        }

        // Mark end so that it signifies a complete keyword
        temp -> end = true ;
    }
    
    bool search(string word) 
    {
        TNode *temp = root ;
        int i = 0 ;

        for( ; i < word.length() ; i++)
        {
            // If curr char exists in hashmap
            if((temp -> child).find( word[i] ) != (temp -> child).end())
                temp = (temp -> child)[ word[i] ] ;
            
            else
                break ;
        } 

        // Check if end is marked
        if( i == word.length() && temp -> end == true)
            return true ;
        return false ;
    }
    
    bool startsWith(string prefix) 
    {
        TNode *temp = root ;
        int i = 0 ;

        for( ; i < prefix.length() ; i++)
        {
            // If curr char exists in hashmap
            if((temp -> child).find( prefix[i] ) != (temp -> child).end())
                temp = (temp -> child)[ prefix[i] ] ;
            
            else
                break ;
        } 

        if( i == prefix.length() )
            return true ;
        return false ;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
