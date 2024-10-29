#include <stdio.h> 
#include <string.h>

int main() {

    char t[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
    int n = strlen(t);
    int start = 0;
    int end = n - 1;
    
    while (start < end){
        char simvl = t[start];
        t[start] = t[end];
        t[end] = simvl;
        start ++;
        end --;
    }
    start = 0;
    for (end = 0; end < n; end++) {
        if (t[end] == ' ') {
            int wordEnd = end - 1;
            while (start < wordEnd) {
                char simvl = t[start];
                t[start] = t[wordEnd];
                t[wordEnd] = simvl;
                start++;
                wordEnd--;
            }
            start = end + 1;
        }
    }
    end = n;
    int wordEnd = end - 1;
    while (start < wordEnd) {
        char simvl = t[start];
        t[start] = t[wordEnd];
        t[wordEnd] = simvl;
        start++;
        wordEnd--;
    }
    
    puts(t);
}