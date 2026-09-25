#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int prev;
    
    int ans = 0;
    int is_down = 0; 
    
    for (int i = 1; i < n; ++i) {
        int curr;
        scanf("%d", &curr);
        
        if (prev > curr) {
            is_down = 1;
        } 
        else if (prev < curr) {
            if (is_down) {
                ans++;
                is_down = 0; 
            }
        }
        prev = curr;
    }
    
    printf("%d\n", ans);
    
    return 0;
}