


// User function Template for C

int areRotations(char* s1, char* s2) {
    if (strlen(s1) != strlen(s2)) return 0;
    
    char temp[2 * 100005];
    strcpy(temp, s1);
    strcat(temp, s1);
    
    return strstr(temp, s2) != NULL;
    
}