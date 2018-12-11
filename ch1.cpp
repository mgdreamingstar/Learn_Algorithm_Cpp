#include <iostream>
#include <math.h>
#include <stdio.h>

int main()
{
    int a, b, c;
    double d;
    // scanf("%d%d", &a, &b);
    // printf("%d %d\n", a, b);

    // 1-1 ave
    // scanf("%d%d%d", &a, &b, &c);
    // printf("%0.3f\n", (a + b + c) / 3.0);

    // 1-2 temp
    // scanf("%d", &a);
    // printf("%0.3f\n", 5 * (a - 32) / 9.0);

    // 1-3 sum
    // printf("input a integer:\n");
    // scanf("%d", &a);
    // printf("sum is: %d\n", (a + 1) * a / 2);

    // 1-4 sin and cos
    // printf("input a degree:\n");
    // scanf("%d", &a);
    // printf("sin(a) is:%f , cos(a) is:%f . \n", sin(M_PI*a/180.0), cos(M_PI*a/180.0));

    // 1-5 discount
    // printf("How many clothes to buy?\n");
    // scanf("%d", &a);
    // if (95 * a >= 300)
    // {
    //     d = 0.85 * 95 * a;
    // }
    // else
    // {
    //     d = 95.0 * a;
    // }
    // printf("You need to pay: %0.2f. \n", d);

    // 1-6 triangle
    // printf("Input edges of a triangles:\n");
    // scanf("%d%d%d", &a,&b,&c);

    // // a < b < c  bubble sort
    // if(a > b){d = a; a = b; b = d;} // a = min(a,b)
    // if(a > c){d = a; a = c; c = d;} // a = min(a,c)
    // if(b > c){d = b; b = c; c = d;} // b = min(b,c)

    // if(a+b<=c)
    // {
    //     printf("not a triangle.\n");
    // }
    // else
    // {
    //     if(a*a + b*b == c*c)
    //     {
    //         printf("yes.\n");
    //     }
    //     else
    //     {
    //         printf("no. \n");
    //     }
    // }

    // 1-7 year
    printf("input the year: \n");
    scanf("%d", &a);
    if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
    {
        printf("yes.\n");
    }

    else
    {
        printf("no.\n");
    }

    system("pause");
    return 0;
}