#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int gp;
    float pi;
    pi = 3.14;
    
    printf("Digite para escolha:\n\n >Area de figuras planas (1) \n\n >Volume de solidos (2)\n\n");
    scanf("%d", &gp);

    if(gp == 1){
        int areas;
        printf("Digite o numero para calculo da area:\n\n >Triangulo (1)\n\n >Trapezio (2)\n\n >Circulo (3)\n\n >Losango (4)\n\n >Quadrado (5)\n\n >Pentagono (6)\n\n >Hexagono (7)\n\n >Retangulo (8)\n");
        scanf("%d", &areas);

switch (areas){
    case 1:{
        float base, altura;
    
        printf("Base do triangulo:\n");
        scanf("%f", &base);
    
        printf("Altura do triangulo\n");
        scanf("%f", &altura);

        printf("Area do triangulo:\n %.1f m2", (base*altura)/2);
    break;
    }

    case 2:{
        float BASE, base, altura;
        
        printf("\nBase maior do trapezio:\n");
        scanf("%f", &BASE);
        
        printf("Base menor do trapezio:\n");
        scanf("%f", &base);

        printf("Altura do trapezio:\n");
        scanf("%f", &altura);

        printf("Area do trapezio:\n %1.f m2", ((BASE+base)*altura)/2);
    break;
    }
    
    case 3:{
        float raio;

        printf("Raio do circulo:\n"); 
        scanf("%f", &raio);

        printf("Area do circulo:\n %1.f m2", (pi*(raio*raio)));
    break;
    }
    
    case 4:{
        float Dmaior, Dmenor;

        printf("Diagonal maior:\n");
        scanf("%f", &Dmaior);

        printf("Diagonal menor:\n");
        scanf("%f", &Dmenor);

        printf("Area do losango:\n %1.f m2", ((Dmaior*Dmenor)/2));
    break;    
    }

    case 5:{
        float base, altura;

        printf("Base do quadrado:\n");
        scanf("%f", &base);

        printf("Altura do quadrado:\n");
        scanf("%f", &altura);

        printf("Area do quadrado:\n %1.f m2", (base*altura));
    break;
    }

    case 6:{
        float lado, apotema;
        
        printf("Lado do pentagono:\n");
        scanf("%f", &lado);

        printf("Apotema do pentagono:\n");
        scanf("%f", &apotema);

        printf("Area do pentagono:\n %1.f m2", (5*lado*apotema));
    break;
    }

    case 7:{
        float lado;

        printf("Lado do hexagono:\n");
        scanf("%f", &lado);

        printf("Area do hexagono:\n %1.f m2", ((3*(lado*lado)*sqrt(3))/2));
    break;
    }

    case 8:{
        float base, altura;

        printf("Base do retangulo:\n");
        scanf("%f", &base);

        printf("Altura do retangulo:\n");
        scanf("%f", &altura);

        printf("Area do retangulo:\n %1.f m2", (base*altura));
    break;
    }
}
    }

    if(gp == 2){
        int volumes;
        
        printf("Digite o numero para calculo do volume:\n\n >Cubo (1)\n\n >Paralelepipedo (2)\n\n >Cilindro (3)\n\n >Esfera (4)\n\n >Cone (5)\n\n >Piramide (6)\n");
        scanf("%d", &volumes);

switch (volumes){
    case 1:{
        float lado;

        printf("Lado do cubo:\n");
        scanf("%f", &lado);
        
        printf("Volume do cubo:\n %1.f m3", (lado*lado*lado));
    break;
    }
    
    case 2:{
        float base, largura, altura;

        printf("Base do paralelepipedo:\n");
        scanf("%f", &base);

        printf("Largura do paralelepipedo:\n");
        scanf("%f", &largura);

        printf("Altura do paralelepipedo:\n");
        scanf("%f", &altura);

        printf("Volume do paralelepipedo:\n %1.f m3", (base*largura*altura));
    break;
    }
    
    case 3:{
        float raio, altura;

        printf("Raio do cilindro\n");
        scanf("%f", &raio);

        printf("Altura do cilindro\n");
        scanf("%f", &altura);

        printf("Volume do cilindro:\n %1.f m3", (pi*(raio*raio)*altura));
        break;
    }
    
    case 4:{
        float raio;

        printf("Raio da esfera:\n");
        scanf("%f", &raio);

        printf("Volume da esfera\n %1.f m3", ((4*pi*(raio*raio))/2));
    break;
    }

    case 5:{
        float raio, altura;

        printf("Raio do cone:\n");
        scanf("%f", &raio);

        printf("Altura do cone:\n");
        scanf("%f", &altura);

        printf("Volume do cone:\n %1.f m3", ((pi*(raio*raio)*altura)/2));
    break;
    }

    case 6:{
        float base, altura;

        printf("Area da base da piramide:\n");
        scanf("%f", &base);

        printf("Altura da piramide:\n");
        scanf("%f", &altura);

        printf("Volume da piramide\n %1.f m3", ((base*altura)/3));
    break;
    }
    }
    }
    return (0);
}
