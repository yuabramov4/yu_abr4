#include <stdio.h>
  
int main(void)
{
    int n = 7;
    for(int i =0; i < n; i++){
        for(int j = 0; j< n; j++){
            if(i == 0 || i == n-1 || j==i || j == n-i-1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
