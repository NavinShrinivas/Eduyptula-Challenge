#include<stdio.h>

/*data types required:
1.char and unsigned char
2.int and unsigned int
3.short and unsigned short
4.long and unsigned long
5.long long and unsigned long long
6.float
7.double

unsigned variables are those which cant not hold -ve values
*/
int main(){
    char c1 = 'H'; //1 byte format specifier : %c
    unsigned char c2 = 'O'; //1 byte format specifier : %c
    int i1 = -20; //4 byte format specifier : %i , %d
    unsigned int i2 = 20; //4 bytes format specfiers : %u
    short sh = -10; //2 bytres format specifiers : %hd
    unsigned sh2 = 10; //2 bytes format specifiers : %hu
    long l1 = -12334232; //atleast 4 usally 8 bytes format specifiers : %li , %ld
    unsigned long l2 = 12334232; //atleast 4 usually 8 bytes format specifiers : %lu
    long long ll1 = -12343424524321; //atleast 8 bytes format sepcifiers : %lli , %lld
    unsigned long long ll2= 123423434534; // atleast 8 bytes format speficifiers : %llu
    float f = 20.02; // 4 bytes decimal points allowed format specifiers : %f
    double d = 20.0534; //8 bytes decimal points format specifiers : %lf
}

