#include <stdio.h>
#include <math.h>
int main()
{
    // int my_num = 700;
    // printf("My name is %lu \n", my_num); 
    // if (my_num > 800){
    //     printf("my_num is greater than 800 \n");
    // } 
    // else if (my_num == 700){
    //     printf("Just right");
    // }
    // else{
    //     printf("Value is just right \n");
    // }
    //
    //
    // switch (my_num)
    // {
    // case 79:
    //     printf("Hello");
    //     break;
    // case 700:
    //     printf("Nice");
    //     break;
    // default:
    //     break;
    // }
    //
    //
    // int var[] = {1, 2, 3, 4, 5};
    // int i;
    // var[5] = 6;
    // for (i = 0; i < 6; i++)
    // {
    //    printf("%d\n", var[i]);
    // }
    // printf("%d", sizeof(var));
    //
    //
    // char newstring[] = {"My Name is Ayodeji Oni\n"};
    // printf("%s\n",newstring);
    // newstring[22] = 'M';
    // printf("%s\n",newstring);
    // char var[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    // printf("%s\n", var);
    //
    //
    int age;
    int * age_ptr = &age;
    char name[50];
    char * name_ptr = name;
    int i;
    printf("Enter Your Age: ");
    scanf("%lu", &age);
    printf("Enter Your Name: ");
    scanf("%s", name);
    printf("Hello %s, you are %lu years old.\n", name, age);
    printf("%p\n", age_ptr);
    printf("%d\n", * age_ptr);
    printf("%p\n", name_ptr);
    printf("%d", sizeof(name));
    // for (i = 0; i < sizeof(name); i += 1){
    //     printf("%c", * name_ptr);   
    //     name_ptr += i;
    // }
    
    
    //

    return 0;
}