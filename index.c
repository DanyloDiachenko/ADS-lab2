/*
Задане ціле число d з відрізка [1; 7] задає день тижня починаючи з понеділка (1 - «понеділок», 2 - «вівторок» і т. д.).
Скласти програму, яка за введеним числом d виведе відповідну назву дня
тижня.
*/

#include <stdio.h>

int main() {
    int d = 1;
    const char* days[] = {"Понеділок", "Вівторок", "Середа", "Четвер", "Пʼятниця", "Субота", "Неділя"};

    printf(days[d - 1]);

    return 0;
}