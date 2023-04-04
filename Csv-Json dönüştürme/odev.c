// argc -> girilen  argüman sayısı (arg counter)
// argv -> girilen argümanlar (arg vector)
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int main( int argc, char**argv){

   FILE *pOkunan;
	
	if((pOkunan = fopen(argv[1], "r")) == NULL){
		
		printf("Csv dosyasi acilamadi!");
		exit(1);
	}

    kolonKarakterSayac = sizeof(kolonIsimleri);

    FILE *pYazilan;
	
	if((pYazilan = fopen(argv[2], "w")) == NULL){
		
		printf("Json dosyasi acilamadi!");
		exit(1);
	}

    if( argc == 2 ) {

printf(“Verilen argüman %s\n”, argv[1]);

}

else if( argc > 2 ) {

printf(“Cok fazla arguman verildi.\n”);

}

else {

printf(“Bir arguman beklenmisti.\n”);

}

	int i;
	int a = 1;
    int kolonIndex = 0;
	char Virgul = ',';	
	int comma = 1;

    while(true) {
				
		if(!strcmp(argv[3], "header=ON")){
		
			fprintf(pYazilan, "\n    %c", '"');
			
			for(i = kolonIndex; i < sizeof(kolonIsimleri); i++) {
				
				if(kolonIndex[i] != Virgul) {
					
					fprintf(pYazilan, "%c", kolonIsimleri[i]);
							
				} else {
					
					fprintf(pYazilan, "%c%c %c", '"',':','"');
					kolonIndex = i + 1;
					break;
				}	

                else if(!strcmp(argv[3], "header=OFF")){
			
			kolonKarakterSayac = 0;
			
			fprintf(pYazilan, "\n    %c%s%d%c%c %c", '"',"Column",a,'"',':','"');
			
			a++;
			
			if(a == (comma+1)) {
				
				a = 1;
			}
return 0;
}
