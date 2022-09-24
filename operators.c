// quiz question 0f classes.
/*#include <stdio.h>
int main()
{
    int a = -2, b = +2;
    printf("%d,%d,%d", a = a + b, b = a - b, a + b);
}*/

//(1).Example of Unary operator.   x++=Increment operators.
/*#include<stdio.h>

    int main(){
    int a=5,b;
    b=a++;
    printf("a=%d b=%d",a,b);
return 0;*
}*/

// Example of Unary operator.   x++=Increment operators.
/*#include <stdio.h>
int main()
{
    int x = 5;
    printf("x= %d.\n",x);
    x++;
    printf("x++=%d.\n",x);
    ++x;
    printf("++x=%d.\n",x);
    return 0;
}*/

//(2)Example of Arithmetic operators.
/*#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter a number= ");
    scanf("%d %d %d", &a, &b, &c);
    d = a * b / c;
    printf("The number is= %d\n", d);
    d = a + b * c;
    printf("The second number is= %d", d);
    return 0;
}*/

//(3)Example of Bitwise operators.
/*#include <stdio.h>

int main()
{
    int x, y, z, a;
    x = 47 & 29;
    printf(" x = %d\n", x);
    y = 122 & 160;
    printf(" y = %d\n", y);
    z = 106 >> 2;
    printf(" z = %d\n", z);
    a = 47 ^ 29;
    printf(" a = %d", a);
    return 0;
}*/

//(4).Example of Relatiolal operator.
/*#include <stdio.h>
int main()
{
    int x;
    x = 2 > 4;
    printf("%d", x);
    return 0;
}*/

// Relational operator
/*#include <stdio.h>
int main()
{
    int x;
    x = 10 > 6 > 4;
    printf("%d", x);
    return 0;
}*/

//(5)Example of Logical operators  !=not,&&=AND,||=OR.
/*#include <stdio.h>

int main()
{
    int x, y,z;
    // x=5>4;
    x = !(2 > 4);           //! F=T,!T=F    true=1,false=0;
    printf(" x = %d", x);
    y = 6 > 4 && 9 > 8;     // T&&T=T,and other one is false is false.
    printf(" y= %d", y);
    z=5<4||3>4;             //F||F=F,F||T=T,T||x=T
    printf(" z= %d", z);
    return 0;
}*/

//(6)Assignment operators. =,(+=,-=,*=,/=,%=)=>Compound assignment operators

/*#include <stdio.h>
int main()
{
    int x = 5;
    x += 2;             // x=x+2,x %=4 => x= x%4.
    printf("x=%d", x);
    return 0;
}*/
