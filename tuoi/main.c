#include <stdio.h>
int main (){
    int tuoi;
    printf("hay nhap tuoi vao:");
    scanf ("%d", &tuoi);
    printf(" tuoi la: %d", tuoi);
    if (tuoi < 18 )
    {
        printf(" ban chua du tuoi");
    }
    else if (tuoi >= 18)
    {
        printf ("ban da du tuoi");
    }
    return 0;
}