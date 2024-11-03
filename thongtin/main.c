#include <stdio.h>
int main () {

    char ten[100];
    int tuoi;
    char lop[100];
    
    //ten
    printf(" Hay nhap ten vao: ");
    scanf("%s", ten);

    
    //tuoi
    printf(" Hay nhap tuoi vao: ");
    scanf("%d", &tuoi);

    //lop
    printf(" Hay nhap lop vao: ");
    scanf("%s", lop);

    printf("ten la: %s \n", ten);
    printf("tuoi la: %d \n", tuoi);
    printf("lop la: %s", lop);
    return 0;
}