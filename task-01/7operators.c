#include<stdio.h>

int main(){
    int a=10 , b=3;
    printf("return : %f \n",a/b); //returns 0 as int / int returns a int and %f is searching for a variable of type float
    printf("return : %d \n",a/b); //returns 3 in integer as expected
    float c=float(a/b); 
    printf("return : %f \n",c); //returns 3.0000 in float form as a/b gives an int which is type casted to float
    //if any one of the operands in / are float the return is float
    float d = (float)a/b;
    printf("return : %f \n",d); //returns 3.3333 in float (ofc) as d recived a float value from / operqators as a was alone type casted to float
}