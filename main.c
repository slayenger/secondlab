#include <stdio.h>
#include <stdlib.h>

float summ(float a, float b){
printf("Сумма чисел %f и %f равна %f\n", a, b , a+b);

return a+b ;
}

float difference(float a, float b) {
    printf("Разность чисел %f и %f равна %f\n", a, b, a-b);
return a-b;
}

float multiplication(float a, float b) {
    printf("Произведение чисел %f и %f равно %f\n", a, b , a*b);
return a*b;
}

int main()
{
    printf("Hello world!\n");
    summ(3, 1);
    difference(3, 1);
    multiplication(3, 3);
    return 0;
}
