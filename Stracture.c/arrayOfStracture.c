#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct car {
        char name[30]; // store string...
        char class;
        float price;
        int speed;
    }car;
    
    car arr[3];
    
    strcpy(arr[0].name,"Tesla");
    arr[0].class = 'S';
    arr[0].price = 100000;
    arr[0].speed = 200;

    strcpy(arr[1].name,"Tyota");
    arr[1].class = 'A';
    arr[1].price = 10000;
    arr[1].speed = 150;

    strcpy(arr[2].name, "Mersedis Banze");
    arr[2].class = 'S';
    arr[2].price = 100000;
    arr[2].speed = 200;

    for (int i=0; i<3; i++)
    {
        printf("Car name: %s.\n", arr[i].name);
        printf("Car class: %c.\n", arr[i].class);
        printf("Car speed: %d km/h.\n", arr[i].speed);
        printf("Car price: %.2f $.\n", arr[i].price);
        printf("\n");
    }
    return 0;
}