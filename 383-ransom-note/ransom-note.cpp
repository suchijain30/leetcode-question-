class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int hash[256] = {0}; 
        for(int i = 0; i < magazine.size(); i++) 
        {
        hash[magazine[i]]++;
        }
        for(int i = 0; i < ransomNote.size(); i++) 
        {
        if(hash[ransomNote[i]] == 0) 
        {
            return false; 
        }
        hash[ransomNote[i]]--; // Decrement the count of characters in the magazine
        }
    
    return true; // all characters are available
}
};