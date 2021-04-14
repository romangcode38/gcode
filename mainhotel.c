#include "hotelstruct.c"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    nod *t=NULL;
    char fname[100];
    int optiune=0;
    do
    {
        system("CLS");
        printf("Coada                           Stiva\n");
        printf("1. Crearea arborelui            7. Crearea arborelui\n");
        printf("2. Afisarea arborelui           8. Afisarea arborelui\n");
        printf("3. Cautarea unui nod            9. Cautarea unui nod\n");
        printf("4. Marimea arborelui            10. Marimea arberelui\n");
        printf("5. Inaltimea arborelui          11. Inaltimea arberelui\n");
        printf("6. Eliberarea memoriei          12. Eliberarea memoriei\n");
        printf("0. Iesire");
        printf("\n Alegeti optiunea: ");
        scanf("%d",&optiune);
        switch (optiune)
        {
        case 1:
        {
            creat_q();
            system("PAUSE");
            break;
        }
        case 2:
        {
            show_q();
            system("PAUSE");
            break;
        }
        case 3:
        {
            printf(" Introduceti numele de cautat: ");
            fflush(stdin);
            scanf("%s",&fname);
            t=search_q(fname);
            if(t)
            {
                printf(" ---Nodul %s---\n",t->denumire);
                printf(" Denumirea: %s\n",t->denumire);
                printf(" Adresa: %s\n",t->adresa);
                printf(" Categoria: %s\n",t->categoria);
                printf(" Numarul de telefon: %d\n",t->num_telefon);
                printf(" Numarul de locuri: %d\n\n",t->num_locuri);
            }
            else
            {
                printf(" Nu exista asa nume!\n");
            }
            system("PAUSE");
            break;
        }
        case 4:
        {
            printf(" Nodurile arborelui = %d\n",size_q());
            system("PAUSE");
            break;
        }
        case 5:
        {
            printf(" Inaltimea arborelui este %d \n", height_q(root));
            system("PAUSE");
            break;
        }
        case 6:
        {
            freemem_q(root);
            root=NULL;
            printf(" Eliberarea memoriei a avut loc cu succes!\n");
            system("PAUSE");
            break;
        }
        case 7:
        {
            creat_s();
            system("PAUSE");
            break;
        }
        case 8:
        {
            show_s();
            system("PAUSE");
            break;
        }
        case 9:
        {
            printf(" Introduceti numele de cautat: ");
            fflush(stdin);
            scanf("%s",&fname);
            t=search_s(fname);
            if(t)
            {
                printf(" ---Nodul %s---\n",t->denumire);
                printf(" Denumirea: %s\n",t->denumire);
                printf(" Adresa: %s\n",t->adresa);
                printf(" Categoria: %s\n",t->categoria);
                printf(" Numarul de telefon: %d\n",t->num_telefon);
                printf(" Numarul de locuri: %d\n\n",t->num_locuri);
            }
            else
            {
                printf(" Nu exista asa nume!\n");
            }
            system("PAUSE");
            break;
        }
        case 10:
        {
            printf(" Nodurile arborelui = %d\n",size_s());
            system("PAUSE");
            break;
        }
        case 11:
        {
            printf(" Inaltimea arborelui este %d \n", height_s(root));
            system("PAUSE");
            break;
        }
        case 12:
        {
            freemem_s(root);
            root=NULL;
            printf(" Eliberarea memoriei a avut loc cu succes!\n");
            system("PAUSE");
            break;
        }
        case 0:
        {
            return 0;
        }
        default:
        {
            printf(" Optiunea nu exista!\n");
            break;
        }
        }
    }
    while(optiune!=0);
    getch();
    return 0;
}

