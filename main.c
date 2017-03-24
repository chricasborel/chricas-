#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define clear system("cls")
#define TAILLE_MAX 100


int main(int argv, char* argc)
{
    FILE* niveau = NULL;
    niveau = fopen ("ne touche pas.txt", "r");
    char level[3];
    void rewind (niveau);
    fgets (level, 3, niveau);
    int *pointeurSurLevel = &level;

    if (*level == 48)//si 0 dans le fichier
    {
        remove ("registre.i");
        remove ("attaquant1.j");
        remove ("attaquant2.j");
        remove ("chiffres.l");
    niveau = fopen ("ne touche pas.txt", "w+");
    if (niveau != NULL)
    {

    FILE* fichier = NULL;
    fichier = fopen ("salut.a", "w");

    int j = 0;

    if (fichier != NULL)
    {
        do
        {
        int i = 0;
        for (i = 0 ; i < 11 ; i++)
        {
            printf ("telechargement des donnees.\n");
            clear;
        }
        for (i = 11 ; i < 21 ; i++)
        {
            printf ("telechargement des donnees..\n");
            clear;
        }
                for (i = 21 ; i < 31 ; i++)
        {
            printf ("telechargement des donnees...\n");
            clear;
        }
        j++;
        }while (j != 4);
        fprintf (fichier, "Salut ! (c'est mon nom), tu as fait le premier pas vers un monde que peu de gens connaissent\nmaintenant que tu es la, tu ne peux plus reculer, tu dois nous aider a retablir ce monde que les virus informatiques ne cessent d'attaquer\nJe serai ici pour t'aider et te conseiller tout au long de ton periple\nPour le moment, laisse moi finir ce que je faisais\nje t'expliquerai ce que je sais au fur et a mesure\n\n");
        fprintf (fichier, "en attendant, ouvre 'main'");
        fclose (fichier);
        fprintf (niveau, "1");
        fclose (niveau);
        char continuer[TAILLE_MAX] = "continuer";

        do
        {
                printf ("fin du telechargement des donnees\ntu peux fermer la fenetre\nmerci\ntu peux ouvrir le dossier 'salut'\npour fermer une fenetre, ecris n'importe quoi ou utilise la croix\n");
                scanf ("%s", &continuer);
                clear;

        }while (continuer == "continuer");
    }
    }
    }

    else if (*level == 49)//si 1 dans le fichier
    {
        niveau = fopen ("ne touche pas.txt", "w+");
        fprintf (niveau, "2");
        fclose (niveau);
        remove ("salut.a");
        int i = 0;
        FILE* ennemiPremier = NULL;
        ennemiPremier = fopen ("chiffres.l", "w");
        fprintf (ennemiPremier, "ahahah \nj'ai pris le controle du programme qui te servait d'aide\nrouvre-le pour voir\n");
        fclose (ennemiPremier);
        char continuer[TAILLE_MAX] = "";
        do
        {
        i++;
        printf ("ca y est, j'ai reussi a entrer la dedans\ndesormais, je te parlerai des que tu entreras dans ce programme\n");
        printf ("\n\n");
        clear;
        }while (i < 85);
        i = 0;
        do
        {
        i++;
        printf ("aaaah ! ferme cette fenetre !\nVITE !!!\n");
        clear;
        }while (i < 51);


    }
    else if (*level == 50)//si 2 dans le fichier
    {
        int i = 0;
        char continuer[100] = "";
        do
        {
            i++;
            printf ("hahaha !\ntu vois\n");
            clear;
        }while (i < 30);

        int k = 0;
        for (k = 0; k <= 55555; k++)
    {
    int a = 1999999;
    int resultat = a + k;
    printf ("%d", resultat);
    }
    clear;
        niveau = fopen ("ne touche pas.txt", "w+");
        fprintf (niveau, "3");
        fclose (niveau);
        remove ("chiffres.l");
        i = 0;
        do
        {
        printf ("encore la ?\nmais comment est-ce possible ?!\nautant de patience...ce n'est pas humain.......\n.\n..\n...\n....\nje suis vaincu.....\n\n");
        clear;
        }while (i < 201);

    }

    else if (*level == 51)//si 3 dans le fichier
    {
        FILE* niveau = NULL;
        niveau = fopen ("ne touche pas.txt", "w+");
        fprintf (niveau, "4");
        fclose (niveau);
        char continuer[5] = "";
        do
        {
        FILE* registre = NULL;
        registre = fopen ("registre.i", "w+");
        fprintf (registre, ".c = cool\n.txt = texte\n.a = aide\n.l = long\n.i = information\n");
        fclose (registre);
        printf ("MERCI !\ntu merites bien quelques explications pour m'avoir sauve\n");
        printf ("ce monde est tres instable et des virus comme chiffres.p, il y en a des petits, qui sont ecrits en minuscule et des plus puissants, en majuscule\n");
        printf ("pour les vaincre, il faut regarder leur extension (ce qu'il y a apres le .)\npar exemple, les .a comme moi signifient aide, les .p comme chiffes, signifient patience\nils essaieront toujours de te ralentir\n");
        printf ("essaie de toujours ouvrir les nouveaux fichiers avant celui-ci pour en decouvrir plus\n");
        printf ("a partir de maintenant, tu pourras consulter ton 'registre' pour savoir ce que signifie chaque extension que tu croises\n");
        scanf ("%s", &continuer);
        clear;
        }while (continuer == "");

    }
    else if (*level == 52)//si 4 dans le fichier
    {
        FILE* niveau = NULL;
        niveau = fopen ("ne touche pas.txt", "w+");
        fprintf (niveau, "5");
        fclose (niveau);
        FILE* registre = NULL;
        registre = fopen ("registre.i", "a");
        fprintf (registre, ".m = maitre\n");
        fclose (registre);
        FILE* attaquant1 = NULL;
        attaquant1 = fopen ("attaquant1.j", "w");
        FILE* attaquant2 = NULL;
        attaquant2 = fopen ("attaquant2.j", "w");
        fprintf (attaquant1, "avec mon jumeau, nous allons te bloquer dans un programme pour que tu arretes de nous embeter\n");
        fprintf (attaquant2, "avec mon jumeau, nous allons te bloquer dans un programme pour que tu arretes de nous embeter\n");
        fclose (attaquant1);
        fclose (attaquant2);
        char continuer[5] = "";
        do
        {
            printf ("bonjour,\nun de mes sbires m'a revele ton existence, j'ai donc decide d'intervenir\nje suis l'entite supreme qui dirige tous ces virus\nje suis un .m et tu ne m'atteindras jamais !\nJAMAIS !\n");
            scanf ("%s", &continuer);
            clear;
        }while (continuer == "");
    }

    else if (*level == 53)//si 5 dans le fichier
    {
        FILE* registre = NULL;
        registre = fopen ("registre.i","a");
        fprintf (registre, ".j = jumeaux\n");
        fclose (registre);
        int i = 0;
        do
        {
            i++;
            printf ("H1 : pour passer, tu dois savoir a quoi pense mon jumeau\n");
            clear;
        }while (i < 100);
        i = 0;
        do
        {
            i++;
            printf ("H2 : exactement ! mais tu ne trouveras pas parce que seuls des jumeaux peuvent savoir\n");
            clear;
        }while (i < 110);
        i = 0;
        do
        {
            i++;
            printf ("H1 : alors ? a quoi pense-t-il ?\n");
            clear;
        }while (i < 50);
        remove ("attaquant1.j");
        remove ("attaquant2.j");
        char mot[10] = "virus";
        char reponseMot[100] = "";
        int y = 0;
        do
        {
            printf ("quelle est ta reponse ?\n");
            scanf ("%s", &reponseMot);
            clear;
            y++;
            if (y >= 3)
            {
                FILE* aide = NULL;
                aide = fopen("perdu.b", "w+");
                FILE* registre = NULL;
                registre = fopen ("registre.i", "a");
                fprintf (aide, "hey !\nt'aurais pas vu des jumeaux ?\nils m'ont dit qu'ils allaient faire deviner un mot a je sais pas qui\nc'est un truc comme virus je crois\n");
                fprintf (registre, ".b = benêt\n");
                fclose (aide);
                fclose (registre);
            }

        }while (*mot != *reponseMot);
        FILE* niveau = NULL;
        niveau = fopen ("ne touche pas.txt", "w+");
        fprintf (niveau, "6");
        fclose (niveau);
        int p = 0;
        do
        {
            p++;
            printf ("tu.. ne... peux pas savoir !\n");
            clear;
        }while (p < 70);
    int k = 0;
    for (k = 0; k <= 999; k++)
    {
    int a = 119;
    int resultat = a + k;
    printf ("%d", resultat);
    }
    clear;
    }

    else if (*level == 54)//si 6 dans le fichier
    {

        FILE* aide = NULL;
        FILE* calcul = fopen ("calcul.ca", "w+");
        fprintf (calcul, "gnark gnark gnark ! \nj'ai infeste ton programme avec un des miens, bien plus sympathique :D\nbon courage\n");
        fclose (calcul);
        aide = fopen("perdu.b", "r");
        if (aide != NULL)
        {
            char reponse[100] = "";
            int pointeurSurReponse = NULL;
            pointeurSurReponse = &reponse;
                clear;
                printf ("hey !\nencore toi ?\nalors t'as une idee pour les jumeaux ? je les cherche encore\n\n");
                printf ("1.OUI, ils sont partis par la\n2.NON, desole :/\n(tape 1 ou 2 en fonction de ton choix)\n");
                scanf ("%s", &reponse);
                char continuer[5] = "";
        FILE* niveau = NULL;
        niveau = fopen("ne touche pas.txt", "w+");
        fprintf (niveau, "7");
        fclose (niveau);
            if (*reponse == 49)
            {
                do
                {
                printf ("SUPER ! merci !!\n");
                scanf ("%s", &continuer);
                }while (continuer == "");

            }
            else if (*reponse == 50)
            {
                do
                {
                printf ("DOMMAGE, merci quand meme !\n");
                scanf ("%s", &continuer);
                }while (continuer == "");

            }
            else
            {
                do
                {
                 printf ("relance 'ouvre'\n");
                 scanf ("%s", &continuer);
                }while (continuer == "");

            }

        }
        else
        {
        char continuer[5] = "";
        do
        {
        printf ("tu as loupe quelque chose...\n");
        FILE* niveau = NULL;
        niveau = fopen ("ne touche pas.txt", "w+");
        fprintf (niveau, "7");
        fclose (niveau);
            scanf ("%s", & continuer);

        }while (continuer == "");
        }
    }

    else if (*level == 55)//si 7 dans le fichier
    {
        remove ("calcul.ca");
        FILE* registre = fopen ("registre.i", "a");
        fprintf (registre, ".ca = calcul\n");
        remove ("perdu.b");
        FILE* niveau = NULL;
        niveau = fopen ("ne touche pas.txt", "w+");
        fprintf (niveau, "8");
        fclose (niveau);
        int resultatTrouve = 0;
        const int MAX = 100, MIN = 1;
        srand(time(NULL));
        int nombreUn = 0, nombreDeux = 0;
        nombreUn = (rand() % (MAX - MIN + 1)) + MIN;
        nombreDeux = (rand() % (MAX - MIN + 1)) + MIN;
        int resultat = nombreUn*nombreDeux;
        do
        {
            printf ("%d * %d\n", nombreUn, nombreDeux);
            scanf ("%d", &resultatTrouve);
            clear;
        }while (resultatTrouve != resultat);
        char continuer[5] = "";
        niveau = fopen("ne touche pas.txt", "w+");
        fprintf (niveau, "0");
        fclose (niveau);
        do
        {
            printf ("comment peux-tu oser ?");
            scanf ("%s", &continuer);
        }while (continuer == "");
    }

    fclose (niveau);

    return 0;
}
