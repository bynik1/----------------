#include <stdio.h>
#include <math.h>

int main(){
    float x, z, y, s, p;
    printf("Введите значение сторон\n");
    scanf("%f %f %f", &x, &z, &y);
    if ((x + y > z) && (x + z > y) && (z + y > x)){
        p = (x + y + z) /2;
        s = p * (p - x) * (p - z) * (p - y);
        s = sqrtf(s);
        printf("%s %f\n", "Ваша площадь треугольника: ", s);
    }
    else{
        printf("Такого треугольника не существует\n");
    }
    return 0;
}