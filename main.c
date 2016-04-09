#include <stdio.h>
#include <stdlib.h>
#include <funciones.h>
float sumar (float a , float b);
float restarfloat(float a , float b);
float divicion(float a , float b);
float multiplicacion(float a , float b);
float factoriar(float a);

int main()
{
    char seguir='s';
    int opcion=0;
    float x , y , z

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        if(opcion==0)
        {
            printf("Error \n");
            scanf("%c",&opcion);
            system("cls");

        }

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese Primer numero del Operador:")
                scanf("%f",& x);
                system("pause");
                break;

            case 2:
                prinf("Ingrese el Segundo numero del Operador:")
                scanf("&f",&y);
                system("pause");
                break;

            case 3:

                printf("ingreso la operacion de sumar\n ");
                z=suma(x,y);
                printf("La suma es %d",z);
                break;
            case 4:
                printf("ingreso la operacion de restar\n ");
                z=restar(x,y);
                printf("La restar es %d",z);
                break;
            case 5:
                if(x==0)
                {
                    printf("Error\n");
                    printf("Reingrese Otro numero");
                }
                printf("ingreso la operacion de divicion\n ");
                z=divicion(x,y);
                printf("La divicion es %d",z);
                break;
            case 6:
                printf("ingreso la operacion de multiplicacion\n ");
                z=multiplicacion(x,y);
                printf("La multiplicacion es %d",z);
                break;
            case 7:
                printf("ingreso la operacion de factoriar\n ");
                z=factoriar(x,y);
                printf("El Factorio del numero es %d",z);
                break;
            case 8:
                printf("ingreso la operacion de sumar\n ");
                z=suma(x,y);
                printf("La suma es %d",z);
                break;

                printf("ingreso la operacion de restar\n ");
                z=restar(x,y);
                printf("La restar es %d",z);
                break;

                printf("ingreso la operacion de divicion\n ");
                z=divicion(x,y);
                printf("La divicion es %d",z);
                break;

                printf("ingreso la operacion de multiplicacion\n ");
                z=multiplicacion(x,y);
                printf("La multiplicacion es %d",z);
                break;

                printf("ingreso la operacion de factoriar\n ");
                z=factoriar(x,y);
                printf("El Factorio del numero es %d",z);
                break;

            case 9:

                printf("¿Quieres segir operado?")
                seguir = 'n';
                break;
        }



        return 0;
}
float suma(float a , float b)//Operacion de la suma
{
    float calcular;
    calcular=a+b;
    return calcular;
}
float restar(float a , float b )//operacion de la resta
{
    float calcular;
    calcular=a-b;
    return  calcular;
}
float divicion(float a , float b)//operacion de la divicion
{
    float calcular;
    calcular=a/b;
    return calcular;
}
float multiplicacion(float a , float b)//operacion de multiplicacion
{
    float calcular;
    calcular=a*b;
    return calcular;
}
float factoriar(float a)//operacion del factoreo
    float i;
    float fact=1;
        for(i=1,i<=a,i++)
        {
            fact=fact*i;
        }
}

