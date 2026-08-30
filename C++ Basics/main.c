
#include <stdio.h>

struct person{
    char name[20];
    int age;
}

int main() {
    struct person person1;
    printf("Enter name: ");
    scanf("%s", person1.name);
    printf("Enter age: ");
    scanf("%d", person1.age);
    
    return 0;
}