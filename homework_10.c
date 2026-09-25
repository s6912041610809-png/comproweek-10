#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[3][50];
    char student[60];
    float score[3][3];
    float avg[3] = {0};

    for (int i = 0; i < 3; i++)
    {
        printf("Enter name of student %d: " , i + 1);
        scanf("%s", name[i]);

        printf("Math: ");
        fflush(stdout);
        scanf("%f", &score[i][0]);
    
        printf("Phy: ");
        fflush(stdout);
        scanf("%f", &score[i][1]);

        printf("Chem: ");
        fflush(stdout);
        scanf("%f", &score[i][2]);

    }

    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            avg[j] += score[i][j];
        }
        avg[j] /= 3;
    }

    printf("\n-------------------------------------------------------------------\n");
    printf("%-22s %-10s %-10s %-10s \n",
           "Student (length)", "Math", "Phy", "Chem");
    printf("------------------------------------------------------------------\n");

    for (int i = 0; i < 3; i++)
    {
        sprintf(student, "%s (%zu)", name[i], strlen(name[i]));

        printf("%-22s %-10.2f %-10.2f %-10.2f\n",
        student,
        score[i][0],
        score[i][1],
        score[i][2]);
    }

    printf("------------------------------------------------------------------\n");
    printf("%-22s %-10.2f %-10.2f %-10.2f\n",
    "Subject average",
     avg[0], avg[1], avg[2]);
    printf("------------------------------------------------------------------\n");

    return 0;
         
}