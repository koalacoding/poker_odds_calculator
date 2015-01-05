#include <stdio.h>
#include <stdlib.h>

int main()
{
    int program_continues = 1;
    double pot_size = 0, to_add = 0, simple_odd = 0, percent_odd = 0;

    printf("Bienvenue sur le calculateur de cote de poker.\n\n");
    printf("Vous pouvez utiliser les nombres decimaux mais en utilisant le point et non la virgule.\n\n");
    printf("Tapez 1 pour calculer la cote selon la taille du pot et l'argent a rajouter. (exemple : 120e dans 300e)\n");
    printf("Tapez 2 pour calculer une cote simple. (exemple : 5 contre 1)\n\n");
    printf("Tapez n'importe quel autre nombre pour quitter le programme.\n\n");

    while (program_continues == 1)
    {
        printf("[1] Cote selon taille du pot [2] Cote simple [autre] Quitter\n\n");

        int answer = 0; // The variable where we'll stock the user's answer to the previous propositions.
        scanf("%d", &answer);
        printf("\n");

        if (answer == 1)
        {
                printf("Veuillez entrer la taille du pot (exemple : entrez 120 pour 120e, 50 pour 50e) :\n\n");
                scanf("%lf", &pot_size);
                printf("\n");

                printf("La taille du pot est de %lf euros.\n\n", pot_size);

                printf("Veuillez entrer l'argent a rajouter au pot. (exemple : j'ai 120e a rajouter pour gagner 300e, donc je tape 120) :\n\n");
                scanf("%lf", &to_add);
                printf("\n");

                simple_odd = pot_size / to_add;
                percent_odd = 100 / (simple_odd + 1);

                printf("%lfe a rajouter dans %lfe equivaut a du %lf contre 1 soit %lf%%.\n\n", to_add, pot_size, simple_odd, percent_odd);
        }

        else if (answer == 2)
        {
            printf("Entrez un nombre pour connaitre sa cote contre 1 en pourcentage. (exemple : pour afficher l'equivalent en %% de 3 contre 1 (soit 25%%), tapez 3) :\n\n");
            scanf("%lf", &simple_odd);
            printf("\n");

            percent_odd = 100 / (simple_odd + 1); // To transform a simple odd (like 2 against 1) to a percent odd, we use the formula : 100 divided by (the simple odd + 1). Therefore, 3 against 1 will give 25%.

            printf("%lf contre 1 equivaut a du %lf%%.\n\n", simple_odd, percent_odd);
        }

        else
        {
        program_continues = 0;
        }

    }

    return 0;
}

