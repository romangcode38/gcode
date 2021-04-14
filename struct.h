#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct nod
{
    char denumire[100];
    char adresa[100];
    char categoria[100];
    int num_telefon;
    int num_locuri;
    struct nod *left,*right;
} nod;
nod *root=NULL;
// coada
typedef struct elq
{
    nod *adrnod;
    struct elq *next;
} elq;
elq *first=NULL;
elq *last=NULL;
// stiva
typedef struct els
{
    nod *adrnod;
    struct els* prev;
} els;
els *top=NULL;
int inq(nod *inf);
nod* delq();
int push(nod *inf);
nod* pop();
int creat_q();
int creat_s();
//nod* creat_rsd(nod *parent);
int show_q();
int show_s();
//void show_rsd(nod *c);
//void show_rds(nod *c);
void show_srd(nod *c);
void show_drs(nod *c);
void show_sdr(nod *c);
void show_dsr(nod *c);
nod* search_q(char *fname);
nod* search_s(char *fname);
//nod* search_rsd(nod* c, char *fname);
int size_q();
int size_s();
//int size_rsd(nod *c);
//void freemem_rsd(nod *c);
int freemem_q();
int freemem_s();
//int height_rsd(nod *c);
