    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>

    struct Dado{
        char nome[50];
        char tel[15];
        char email[30];
    };

    struct No{
        struct Dado info;
        struct No* esq;
        struct No* dir;
    };

    struct No* criarNo(struct Dado info){
        struct No* novo = (struct No*)malloc(sizeof(struct No));
        novo->info = info;
        novo->esq = 0;
        novo->dir = 0; 
        return novo;
    }

    struct No* inserir(struct No* raiz, struct Dado info){
        if(raiz == 0){
            return criarNo(info);
        }

        int cmp = strcmp(info.nome, raiz->info.nome);

        if(cmp > 0){
            raiz->dir = inserir(raiz->dir, info);
        }else if(cmp < 0){
            raiz->esq = inserir(raiz->esq, info);
        }
        return raiz;
    }


    int maior(int a, int b){
        return a>b ? a : b;
    }
    int h(struct No* raiz){
        if(raiz == 0){
            return -1;
        }else{
            return maior(h(raiz->esq), h(raiz->dir)) + 1;
        }
    }
    
    struct Dado criarDado(char* nome, char *tel, char* email){
        struct Dado novo;
        strcpy(novo.nome,nome);
        strcpy(novo.tel, tel);
        strcpy(novo.email, email);
        return novo;

    }

    struct No* menorInfo(struct No * raiz){
        struct No* temp;
        temp = raiz;
        while(temp->esq != 0)
            temp = temp->esq;
        return temp;
    }

    struct No* maiorInfo(struct No * raiz){
        struct No* temp;
        temp = raiz;
        while(temp->dir != 0)
            temp = temp->dir;
        return temp;
    }

    struct No* remover(struct No* raiz, struct Dado info){
        if(raiz == 0){
            return raiz;
        }

        int cmp = strcmp(info.nome, raiz->info.nome);

        if(cmp > 0){
            raiz->dir = remover(raiz->dir, info);
        }else if(cmp < 0){
            raiz->esq = remover(raiz->esq, info);
        }else{
            if(raiz->esq == 0){
                struct No *temp = raiz->dir;
                return temp;
            }else if(raiz->dir == 0){
                struct No *temp = raiz->esq;
                return temp;
            }
            struct No* temp = menorInfo(raiz->dir);
            raiz->info = temp->info;
            remover(temp->dir, temp->info);
        }
        return raiz;


    }


    int main(){
        struct No *raiz = 0;
        struct Dado p[8];
        p[0] = criarDado("Joao", "8428930132", "k.l@ufersa.edu.br");
        p[1] = criarDado("Diego", "8428930132", "k.l@ufersa.edu.br");
        p[2] = criarDado("Paula", "8428930132", "k.l@ufersa.edu.br");
        p[3] = criarDado("Andre", "8428930132", "k.l@ufersa.edu.br");
        p[4] = criarDado("Flavia", "8428930132", "k.l@ufersa.edu.br");
        p[5] = criarDado("Maria", "8428930132", "k.l@ufersa.edu.br");
        p[6] = criarDado("Renata", "8428930132", "k.l@ufersa.edu.br");
        p[7] = criarDado("Noemia", "8428930132", "k.l@ufersa.edu.br");

        for (int i = 0; i < 8; i++){
            raiz = inserir(raiz, p[i]);
        }
        struct No* menor = menorInfo(raiz);
        struct No* maior = maiorInfo(raiz);

        remover(raiz, p[7]);
        
    }




