class Solution {
public:
    string removeOccurrences(string s, string part) {
    int found = s.find(part);
    if(found == -1) 
        return s;
    s.erase(found , part.size());
    return removeOccurrences(s, part); 
    return s;
    }
    
};
