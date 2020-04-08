#include <stdio.h>
void intFunction(int x);
void floatFunction(float y);
void stringFunction(char* str);

int main()
{
    int x = 33;
    float y = 79.3;
    char str[] = "Hi!";

    intFunction(x);
    floatFunction(y);
    stringFunction(str);
    return 0;
}

void intFunction(int x)
{
    int thisVarInt = x;
    if(thisVarInt == 33)
    {
        printf("I passed an If Statement!\n");
    }
}

void floatFunction(float y)
{
    int switchVar = 3;
    switch(switchVar)
    {
        case 1: printf("Choice is 1");
                break;
        case 2: printf("Choice is 2");
                break;
        case 3: printf("This float is %.2f", y);
                break;
    }
}

void stringFunction(char* str)
{
    for(int i = 0; i < 5; i++) {
        printf("\n%s\n", str);
    }
}
