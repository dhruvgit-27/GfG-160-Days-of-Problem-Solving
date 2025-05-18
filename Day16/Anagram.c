


// User function Template for C

bool areAnagrams(char s1[], char s2[]) {
    if (strlen(s1) != strlen(s2))
    return false;
    
    int freq[26] = {0};
    for (int i = 0; s1[i] != '\0'; i++) {
        freq[s1[i] - 'a']++;
    }
    for (int i = 0; s2[i] != '\0'; i++) {
        freq[s2[i] - 'a']--;
    }
    
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0)
        return false;
    }
    return true;
}