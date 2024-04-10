#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char oracion[50];
	int x, longitud=0,cont=2;
	printf("Ingrese una oracion:\n");
	fgets(oracion,50,stdin);
	longitud=strlen(oracion);
	//en el codigo ASCII hay una diferencia de +32 o -32 entre un caracter
	//mayuscula o minuscula
	for(x=0;x<longitud;x++){//mayuscula
		if(oracion[x]>=97 && oracion[x]<=122){
			
		oracion[x]=oracion[x]-32;
			
		}
	}
	printf("\nOracion en mayuscula:%s\n",oracion);
	
	for(x=0;x<longitud;x++){//minuscula
		if(oracion[x]>=65 && oracion[x]<=90){
			
		oracion[x]=oracion[x]+32;
			
		}
	}
	printf("\nOracion es minuscula:%s\n",oracion);

for(x=0;x<longitud;x++){//intercalado
	if(oracion[x]!=' '){
	if(cont%2==0){
		if(oracion[x]>=97 && oracion[x]<=122 || oracion[x]>=65 && oracion[x]<=90){	
		oracion[x]=oracion[x]-32;	
	}
}
cont++;
}
}
	printf("\nOracion intercalada:%s\n",oracion);
	for (x = 0; x < longitud; x++) {
        if (oracion[x] >= 41 && oracion[x] <= 90) {
            oracion[x] = oracion[x] + 32; // Convertir a minúscula
        }
    }
    // Convertir la primera letra de cada palabra en mayúscula
    for (x = 0; x < longitud; x++) {
        // Si el carácter actual es una letra y es la primera letra o sigue a un espacio, convertir a mayúscula
        if ((x == 0 || oracion[x - 1] == ' ') && (oracion[x] >= 97 && oracion[x] <= 122)) {
            oracion[x] = oracion[x] - 32; // Convertir la letra a mayúscula
        }
    }
	printf("\nOracion con inicial mayuscula :%s\n",oracion);
}
