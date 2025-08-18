/*
#include<stdio.h>
typedef struct person{
    int age;
    float weight;
}person;

int main()
{
    person mirza;
    //mirza.age = 23;
    //mirza.weight = 62;

    person kamal;
    //kamal.age = 24;
    //kamal.weight = 64;

    person* one = &mirza;
    one->age = 30;
    one->weight = 65;
    
    person* two = &kamal;
    two->age = 40;
    two->weight = 70;

    printf("%d\n", one->age);
    printf("%.2f\n", one->weight);
    printf("%d\n", two->age);
    printf("%.2f\n", two->weight);
    return 0;
}
*/

#include<stdio.h>
typedef struct person{
    int age;
    float weight;
}person;

void change_value(person* Q){
    Q->age  = 40;
    Q->weight = 66;
    printf("%d\n", Q->age);
    printf("%.2f\n", Q->weight);
}

int main()
{
    person mirza;
    mirza.age = 23;
    mirza.weight = 62;

    person kamal;
    kamal.age = 24;
    kamal.weight = 64;

    printf("%d\n", mirza.age); //change age value using pointers.
    printf("%.2f\n", mirza.weight);
    printf("%d\n", kamal.age);
    printf("%.2f\n", kamal.weight);

/*

    person* one = &mirza;
    one->age = 30; // (*one).age = 30; that is also valid..
    one->weight = 65;
    
    person* two = &kamal;
    two->age = 40;
    two->weight = 70;

    printf("%d\n", mirza.age); //change age value using pointers.
    printf("%.2f\n", mirza.weight);
    printf("%d\n", kamal.age);
    printf("%.2f\n", kamal.weight);

*/
    change_value(&mirza);
    change_value(&kamal);
    return 0;
}