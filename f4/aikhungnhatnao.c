#include <stdio.h>
int main (){
    char f [100];
    char g [100];
    char h [100];
    char k [100];

    printf("Hay nhap ten cua ban thu nhat vao nao:");
    fgets (f, sizeof(f), stdin);

    printf("Hay nhap ten cua ban thu hai vao nao:");
    fgets (g, sizeof(g), stdin);

    printf("Hay nhap ten cua ban thu ba vao nao:");
    fgets (h, sizeof(h), stdin);

    printf("Hay nhap ten cua ban thu tu vao nao:");
    fgets (k, sizeof(k), stdin);

    printf("Dua khung nhat la: %s", f );

    return 0;
}