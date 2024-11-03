#include <stdio.h>

int get_age_from_user(){
    // while(1) {
    //     printf("hay nhap tuoi vao:");
    //     int t;
    //     scanf("%d", &t);
    //     if(t > 1 && t <= 100){
    //         return t;
    //     }else{
    //         printf("Tuoi ko hop le, hay nhap lai!\n");
    //     }
    // }  

    do {
        printf("APPLICATION INPUT AGE!");
        printf("hay nhap tuoi vao:");
        int t;
        scanf("%d", &t);
        if(t > 1 && t <= 100){
            return t;
        }else{
            printf("Tuoi ko hop le, hay nhap lai!\n");
        }
    } while (1);
    
}

int main (){
    int tuoi;

    tuoi = get_age_from_user();

    printf(" tuoi la: %d", tuoi);
    return 0;
}