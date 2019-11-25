#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Filme {
	char nome[50];
	int ano;
	int duracao;
	
	
};

struct Diretor {
	char nome[20];
	int qtde_filmes;
	Filme filmes[3];
	
};



main(){
	
	struct Diretor dir[5];
	
	strcpy(dir[0].nome, "Hideo Kojima");
	strcpy(dir[1].nome, "Yuji Naka");
	strcpy(dir[2].nome, "Naoto Ohshima");
	strcpy(dir[3].nome, "Hirokazu Yashuhara");
	strcpy(dir[4].nome, "Takashii Izuka");	
	
	strcpy(dir[0].filmes[0].nome, "Metaru Gia Sorrido Faibu za Fantom Pain");
	strcpy(dir[0].filmes[1].nome, "Metaru Gia Sorrido Sans of Riberrti");
	strcpy(dir[0].filmes[2].nome, "Metaru Gia Sorrido");
	
	dir[0].filmes[0].ano = 2015;
	dir[0].filmes[1].ano = 2001;
	dir[0].filmes[2].ano = 1998;
	
	dir[0].filmes[0].duracao = 100;
	dir[0].filmes[1].duracao = 20;
	dir[0].filmes[2].duracao = 15;
	
	
	
	for(int i = 0; i <5; i++){
		//printf("%i \n",i);
		dir[i].qtde_filmes = 3;
		//printf("Quantidade de filmes %i \n", dir[i].qtde_filmes);
		
	}
	
	for (int u = 0; u < 5; u++)
	{
		printf("%s \n",dir[u].nome);
	for (int i = 0;i <3;i++){
		printf("O nome do Filme eh: %s, foi lancado no ano de %i e tem a duracao de %i horas \n",
		dir[u].filmes[i].nome,dir[u].filmes[i].ano, dir[u].filmes[i].duracao);
		printf("");
	}
	
		
	}
	
	
	
}
