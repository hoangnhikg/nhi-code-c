#include <stdio.h>
int main (){
    char ten[100];
    printf("Nhap ten: ");
    fgets (ten, sizeof(ten), stdin);
    printf(" Ten la: %s", ten);
    return 0;
}