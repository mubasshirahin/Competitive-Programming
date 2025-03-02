#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int x = 0;
    

    for (int i = 0; i < n; i++) {
        char ch[4];
        scanf("%s", ch);
        
        if (strcmp(ch, "X++") == 0) {
            x++;
        } 
        else if (strcmp(ch, "++X") == 0) {
            x++;
        }
                else if (strcmp(ch, "X--") == 0) {
            x--;
        }
                else if (strcmp(ch, "--X") == 0) {
            x--;
        }
    }
    
    printf("%d\n", x);
    
    return 0;
}
