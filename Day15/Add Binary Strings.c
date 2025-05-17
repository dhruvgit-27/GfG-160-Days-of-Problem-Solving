


// User function Template for C

char* addBinary(char s1[], char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int maxLen = len1 > len2 ? len1 : len2;
    
    char* result = (char*)malloc(maxLen + 2);
    result[maxLen + 1] = '\0';
    
    int i = len1 - 1, j = len2 - 1, k = maxLen, carry = 0;
    
    while (i >= 0 || j >= 0 || carry) {
        int bit1 = i >= 0 ? s1[i--] - '0' : 0;
        int bit2 = j >= 0 ? s2[j--] - '0' : 0;
        
        int sum = bit1 + bit2 + carry;
        result[k--] = (sum % 2) + '0';
        carry = sum / 2;
    }
    
    char* finalResult = result + k + 1;
    
    while (*finalResult == '0' && *(finalResult + 1) != '\0' ) {
        finalResult++;
    }
    
    char* output = strdup(finalResult);
    free(result);
    return output;
}