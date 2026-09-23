char findTheDifference(char* s, char* t) {
    int a = 0, b = 0;
    for(int i = 0; s[i]; i++) a += s[i];
    for(int i = 0; t[i]; i++) b += t[i];
    return b - a;
   
}