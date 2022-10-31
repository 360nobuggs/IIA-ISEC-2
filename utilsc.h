//
// Created by VascoOliveira on 26-Dec-19.
//

#ifndef IAA_UTILSC_H
#define IAA_UTILSC_H


class utilsc {
public:


};
void escrevematriz( bool *jum[], int ver);
int* init_dados(char *nome, int *n, int *iter);
void gera_sol_inicial(int *sol, int v);
void escreve_sol(int *sol, int vert);
void substitui(int a[], int b[], int n);
void init_rand();
int random_l_h(int min, int max);
float rand_01();
#endif //IAA_UTILSC_H
