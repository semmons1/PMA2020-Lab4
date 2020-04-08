#include <stdio.h>
#include <stdbool.h>

int main () {
    int a = 1;
    int b = 2;
    bool isTrue = true;
    bool isFalse = false;

    if(a==1) {
        if(b==2) {
            if(isTrue) {
                if(!isFalse) {
                    printf("I made it!\n");
                }
            }
        }
    }
    return 0;

}
