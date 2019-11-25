//ex2 

void f_calcula (float *preco, int tp, float *reaj);

main(){
	
	float preco = 1, reaj;
	int tipo;
	
	while (preco != 0){
		printf("informe o preco do produto");
		scanf("%f",&preco);
		
		if (preco == 0)
		exit;
		else{
			printf("informe o tipo do produto");
			scanf("%i",&tipo);
			f_calcula(&preco,tipo,&reaj);
			printf("\n valor do reajuste = %f",reaj);
			printf("\n novo preco do produto = %f",preco);
			
			
		}
		
		
	}
	
}

void f_calcula (float *preco, int tp, float *reaj){
	
	if (tp == ){
		reaj = *preco * 0.03;
		preco = *preco + (*reaj)
		
	}
	
	
	
}
