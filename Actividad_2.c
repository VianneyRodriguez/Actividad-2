#include<stdio.h>
#include<conio.h>

void main()
{ 
printf("\n Escoja un animal:\n\t1- perros\n\t2- gatos\n\t3- hamster\n\t4- iguana");
printf("\n Que te gusta?: ");
char animales;
scanf("%i" , &animales);

switch(animales)
{
	case 1 : printf("\n%c Compro un perro!",177);
			break;
			
	case 2 : printf("\n%c Compro un gato!",177);
            break;
            
    case 3 : printf("\n%c Compro un hasmter!",177);
            break;
    
    case 4 : printf("\n%c Compro una iguana!",177);
            break;
	default: printf("\n Entos vallase :)");	
}
}
