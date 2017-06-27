//Listas Linear
#define MTAMLISTA 10


/*** Declarando o tipo lista ***/
typedef struct{
	int chaves[MTAMLISTA];
	int nelens;
}ListaInt;

/*** Função Inicializa ***/
void inicializa(ListaInt *l){ //(Ponteiro para lista)
	l->nelens=0; //Faz o tamanho do vetor ser 0
}

/*** Função Consulta ***/
int consulta (ListaInt *l, int x){ //(Ponteiro para lista, chave)
	if((l->nelens) > 0){ //Se a lista nao for vazia
		int i;
		for(i=0; i < l->nelens; i++){ //For do tamanho da lista
			if (l->chaves[i]==x){ //Verfifca se a chave é igual ao valor na posição i
				return 1;
			}
		}
	}
	return 0;
}

/*** Função Insere ***/
int insere(ListaInt *l, int x){
	if(l->nelens<MTAMLISTA){ //Se a lista nao estiver cheia 
		l->chaves[(l->nelens)]=x; //Insere x no fim do vetor
		l->nelens++; //Aumenta o tamnho da lista
		return 1;
	}
	return 0;
}

void retira(ListaInt *l, int x){
	if(l->nelens>x){ //Se a lista nao for vazia
		l->chaves[x]=l->chaves[(l->nelens)--];
	}
}

int main(){
	ListaInt l;
	inicializa(&l);
	insere(&l,2);
	print(l);
	
}

