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

int main()
{
    printf("Hello world!\n");
    summ(3, 1);
    return 0;
}
