#include <stdio.h>

int main() {
    int horasTrabajadas;
    int salarioPorHora;
    int salarioTotal;
    int horasExtra;
    float extra = 1.5;
    int limiteh = 40;
    printf("¿Cuántas horas trabajaste en la semana?\n");
    scanf("%d", &horasTrabajadas);

    printf("¿Cuál es tu salario por hora?\n");
    scanf("%d", &salarioPorHora);
    
    if (horasTrabajadas > limiteh) {
        horasExtra = horasTrabajadas - limiteh;
        salarioTotal = (limiteh * salarioPorHora) + (horasExtra * salarioPorHora * extra);
    } else {
        salarioTotal = horasTrabajadas * salarioPorHora;
    }

    printf("Tu salario semanal es: $%d\n", salarioTotal);

    return 0;
}