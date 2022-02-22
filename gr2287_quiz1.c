#include <studio.h>

int fun(int a, int b, int c)
{   
    if(a == b && b == c && a == c) {
        printf("This is an equilateral triangle.");
    }
    else if(a == b || b ==c || a == c) {
        printf("This is an isosceles triangle.");
    }
    else if (a + b > c || b + c > a || a + c > b) {
        printf("This is a normal triangle.");
    }
    return 0;
}

int main()
{
    int a, b, c;
    printf("Enter the three side lengths of the triangle. Must be ints: ");
    scanf("a=%d b=%d c=%d", &a, &b, &c);
    fun(a, b, c);
    return 0;
}


