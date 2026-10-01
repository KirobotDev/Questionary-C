#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void keyboard(int *hight)
{
    if (_kbhit())
    {
        int touche = _getch();

        if (touche == 13)
        {
            printf("Vous avez choisi l'option %d", *hight);
        }

        if (touche == 224)
        {
            touche = _getch();

            if (touche == 72 && *hight > 0)
            {
                *hight -= 1;
            }

            if (touche == 80 && *hight < 2)
            {
                *hight += 1;
            }
        }
    }
}

int main(void)
{
    int hight = 0;
    int old_hight = -1;

    while (1)
    {
        keyboard(&hight);

        if (hight != old_hight)
        {
            system("cls");

            if (hight == 0)
            {
                printf("\033[34mLeetCode\033[0m\n");
                printf("EasyJson\n");
                printf("Github\n");
            }

            if (hight == 1)
            {
                printf("LeetCode\n");
                printf("\033[34mEasyJson\033[0m\n");
                printf("Github\n");
            }

            if (hight == 2)
            {
                printf("LeetCode\n");
                printf("EasyJson\n");
                printf("\033[34mGithub\033[0m\n");
            }

            old_hight = hight;
        }
    }

    return 0;
}