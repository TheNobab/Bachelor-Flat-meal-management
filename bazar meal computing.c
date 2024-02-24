#include <stdio.h>

int main() {
    int m, d, year;
    int M, n, i;
    double Member[10], bill[10], MP = 0,TMM = 0, TMB = 0, bazar[10], meal[10],balance;
    char name[100][50];
    printf(" \t\t\t\tWelcome To\n");
    printf(" \t\t\t\tBachelor Meal and Bazar management Application.\n");
    printf("\n\t\t\t\tEnter the date: ");
    scanf("%d/%d/%d", &m, &d, &year);

    printf("\t\t\t\tHow Many Members: ");
    scanf("%d", &M);

    // Storing member name, meal, bazar
    for (i = 0; i < M; i++) {
        printf("\t\t\t\tWrite %d member name: ", i + 1);
        scanf("%s", name[i]);
        printf("\t\t\t\t%s meal: ", name[i]);
        scanf("%lf", &meal[i]);
        printf("\t\t\t\t%s bazar: ", name[i]);
        scanf("%lf", &bazar[i]);
        printf("\n");
    }

    // Calculating total meal
    for (i = 0; i < M; i++) {
        TMM += meal[i];
    }

    // Calculating total bazar
    for (i = 0; i < M; i++) {
        TMB += bazar[i];
    }

    printf("\t\t\t\t ----------------------------------------- \n");
    // Calculating avg meal price
    MP = TMB / TMM;
    printf("\t\t\t\tTotal %d Member Meal: %.0lf\n", M, TMM);
    printf("\t\t\t\tTotal %d Member Bazar: %.2lf\n", M, TMB);
    printf("\t\t\t\tMeal Rate: %.2lf\n\n", MP);
    printf("\t\t\t\t ---------------------------------------- \n\n");

    // Calculating who has to pay and who will get money back
    for (i = 0; i < M; i++) {
        Member[i] = MP * meal[i];
        printf("\t\t\t\t%s Total Meal price: %.2lf\n", name[i], Member[i]);

        if (Member[i] < bazar[i]) {
            bill[i] = bazar[i] - Member[i];
            printf("\t\t\t\t%s will get: %.2lf\n\n", name[i], bill[i]);
        } else {
            bill[i] = Member[i] - bazar[i];
            printf("\t\t\t\t%s will return: %.2lf\n\n", name[i], bill[i]);
        }
    }

    //calculating bazar and total meal price equal or not
       for (i = 0; i < M; i++) {
        balance += Member[i];
        }

      if(balance == TMB ){
            printf(" \t\t\t %.2lf Total Bazar and %.2lf Total Meal Price are equal.\n",TMB,balance);
            printf(" \t\t\t Thank You.");

        }else{
            printf("\t\t\t\t Total Bazar and Total Meal price are not equal.\n");
        }

    return 0;
}
