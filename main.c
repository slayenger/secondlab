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

float division(float a , float b) {
    printf("Деление чисел %f и %f равно %f\n", a, b, a/b);
return a/b ;
}

int main()
{
    printf("Hello world!\n");
    summ(3, 1); //тест суммы 
    difference(3, 1); // тест разности
    multiplication(3, 3); // тест умножения
    division(10, 2); // тест деления
    return 0;
}
