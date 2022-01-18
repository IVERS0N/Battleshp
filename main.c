
#include <stdio.h>
#define ROWS 10
#define COLS 10
void main(){
    int num , i=1,sport[ROWS][COLS],j,x,y;
    printf("************************************\n");
    printf("************************************\n");
    printf("*******THE BATTTLESHIP GAME*********\n");
    printf("************************************\n");
    printf("************************************\n");
    printf("Elige el Nivel\n");
    printf("1.Facil\n");
    printf("2.Dificil\n");
    printf("3.Muy Dificil\n");
    printf("0.Salir.\n");
    scanf("%d",&num);
   if( num > 3 ){
        while (i < 3){
            printf("1.Facl\n");
            printf("2.Dificil\n");
            printf("3.Muy Dificil\n");
            printf("0.Salir.\n");
            scanf("%d",&num);
            i += 1;
        }
    }
    
    switch(num){
        case 1 :
            for(i=1;i <= ROWS;i++){
		        for(j=1;j<=COLS;j++){
		               
		                sport[i][j]=0;
		                
		         }
            }
            // La tabla
            printf("\tA\tB\tC\tD\tE\tF\tG\tH\tI\tJ\n");
            for(i=1;i<=ROWS;i++){
                printf("%d",i);
		        for(j=1;j<=COLS;j++){
		            printf("\t[ ]");
		        }
		        printf("\n");
            }
            
            // Posicion barco
            for(i=1;i<=ROWS;i++){
		        for(j=1;j<=COLS;j++){
		            if (sport[i][j]== 0 ){
		                sport[3][3]=1;
		                sport[4][3]=1;
		                sport[5][3]=1;
		                sport[3][5]=1;
		                sport[3][6]=1;
		                sport[2][9]=1;
		                sport[3][9]=1;
		                sport[4][9]=1;
		                sport[6][5]=1;
		                sport[6][6]=1;
		                sport[6][7]=1;
		                sport[6][8]=1;
		                sport[9][3]=1;
		                sport[9][4]=1;
		                sport[9][5]=1;
		                sport[9][6]=1;
		                sport[9][7]=1;
		                
		                
		            }
		        }
            }
            
            // Preguntar al usuario un numero del 1 al 10 para hundir un barco
            do {
                printf("Entra una fila del 1 al 10 :");
                scanf("%d",&i);
            }while(i < 1 || i > 10);
            do {
                printf("Entra una fila del 1 al 10 :");
                scanf("%d",&j);
            }while(j < 1 || j > 10);
            
            // Si el usuario falla enseñar el tablero donde ha fallado
            if (sport[i][j]==0){
                printf("No has hundido ningun barco\n");
                
                printf("\tA\tB\tC\tD\tE\tF\tG\tH\tI\tJ\n");
                for(i=1;i<=ROWS;i++){
                    printf("%d",i);
		            for(j=1;j<=COLS;j++){
		                printf("\t[ ]");
		            }
		            printf("\n");
                }
            //Si el usuario ha hunddo un barco en señar el tablero 
            }else if (sport[i][j]==1) {
                printf("Has hundido un barco y has ganado! \n)");
                sport[i][j]=2;
                
                printf("\tA\tB\tC\tD\tE\tF\tG\tH\tI\tJ\n");
                for(x=1;x<=ROWS;x++){
                    printf("%d",x);
		            for(y=1;y<=COLS;y++){
		            
		                if (sport[x][y]== 2){
		                    printf("\t[*]");
		                }else {
		                    printf("\t[ ]");
		                }
		            
		            }
		            printf("\n");
                }
            }
            
            
            break ;
        case 2 :
            
            for(i=1;i <= ROWS;i++){
		        for(j=1;j<=COLS;j++){
		               
		                sport[i][j]=0;
		                
		         }
            }
            printf("\tA\tB\tC\tD\tE\tF\tG\tH\tI\tJ\n");
            for(i=1;i<=ROWS;i++){
                printf("%d",i);
		        for(j=1;j<=COLS;j++){
		            printf("\t[ ]");
		        }
		        printf("\n");
            }
            
            for(i=1;i<=ROWS;i++){
		        for(j=1;j<=COLS;j++){
		            if (sport[i][j]== 0 ){
		                sport[3][3]=1;
		                sport[4][3]=1;
		                sport[5][3]=1;
		                sport[3][5]=1;
		                sport[3][6]=1;
		                sport[2][9]=1;
		                sport[3][9]=1;
		                sport[4][9]=1;
		                sport[6][5]=1;
		                sport[6][6]=1;
		                sport[6][7]=1;
		                sport[6][8]=1;
		                sport[9][3]=1;
		                sport[9][4]=1;
		                sport[9][5]=1;
		                sport[9][6]=1;
		                sport[9][7]=1;
		                
		                
		            }
		        }
            }
            
            do {
                printf("Entra una fila del 1 al 10 :");
                scanf("%d",&i);
            }while(i < 1 || i > 10);
            do {
                printf("Entra una columna del 1 al 10 :");
                scanf("%d",&j);
            }while(j < 1 || j > 10);
            
            if (sport[i][j]==0){
                printf("No has hundido ningun barco\n");
                
                printf("\tA\tB\tC\tD\tE\tF\tG\tH\tI\tJ\n");
                for(i=1;i<=ROWS;i++){
                    printf("%d",i);
		            for(j=1;j<=COLS;j++){
		                printf("\t[ ]");
		            }
		            printf("\n");
                }
            }else if (sport[i][j]==1) {
                printf("Has hundido un barco y has ganado! \n)");
                sport[i][j]=2;
                
                printf("\tA\tB\tC\tD\tE\tF\tG\tH\tI\tJ\n");
                for(x=1;x<=ROWS;x++){
                    printf("%d",x);
		            for(y=1;y<=COLS;y++){
		            
		                if (sport[x][y]== 2){
		                    printf("\t[*]");
		                }else {
		                    printf("\t[ ]");
		                }
		            
		            }
		            printf("\n");
                }
            }
            
            break;
        case 3 :
            for(i=1;i <= ROWS;i++){
		        for(j=1;j<=COLS;j++){
		               
		                sport[i][j]=0;
		                
		         }
            }
            printf("\tA\tB\tC\tD\tE\tF\tG\tH\tI\tJ\n");
            for(i=1;i<=ROWS;i++){
                printf("%d",i);
		        for(j=1;j<=COLS;j++){
		            printf("\t[ ]");
		        }
		        printf("\n");
            }
            
            for(i=1;i<=ROWS;i++){
		        for(j=1;j<=COLS;j++){
		            if (sport[i][j]== 0 ){
		                sport[3][3]=1;
		                sport[4][3]=1;
		                sport[5][3]=1;
		                sport[3][5]=1;
		                sport[3][6]=1;
		                sport[2][9]=1;
		                sport[3][9]=1;
		                sport[4][9]=1;
		                sport[6][5]=1;
		                sport[6][6]=1;
		                sport[6][7]=1;
		                sport[6][8]=1;
		                sport[9][3]=1;
		                sport[9][4]=1;
		                sport[9][5]=1;
		                sport[9][6]=1;
		                sport[9][7]=1;
		                
		                
		            }
		        }
            }
            
            do {
                printf("Entra una fila del 1 al 10 :");
                scanf("%d",&i);
            }while(i < 1 || i > 10);
            do {
                printf("Entra una columna del 1 al 10 :");
                scanf("%d",&j);
            }while(j < 1 || j > 10);
            
            if (sport[i][j]==0){
                printf("No has hundido ningu barco\n");
                
                printf("\tA\tB\tC\tD\tE\tF\tG\tH\tI\tJ\n");
                for(i=1;i<=ROWS;i++){
                    printf("%d",i);
		            for(j=1;j<=COLS;j++){
		                printf("\t[ ]");
		            }
		            printf("\n");
                }
            }else if (sport[i][j]==1) {
                printf("Has hundido un barco y has ganado! \n)");
                sport[i][j]=2;
                
                printf("\tA\tB\tC\tD\tE\tF\tG\tH\tI\tJ\n");
                for(x=1;x<=ROWS;x++){
                    printf("%d",x);
		            for(y=1;y<=COLS;y++){
		            
		                if (sport[x][y]== 2){
		                    printf("\t[*]");
		                }else {
		                    printf("\t[ ]");
		                }
		            
		            }
		            printf("\n");
                }
            }
            
            break;
        case 0 :
            printf("Has salido del juego");
            
    }
    
}
