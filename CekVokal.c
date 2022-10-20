#include <stdio.h>
#include <string.h>

int main(){
    char kalimat [105];
    int Aa, Ii, Uu, Ee, Oo;
    Aa = 0, Ii = 0, Uu = 0, Ee = 0, Oo = 0;
    scanf("%[^\n]s", kalimat);

    for(int i = 0; i < strlen(kalimat); i++){
        if(kalimat[i] == 'a' || kalimat[i] == 'A'){
            Aa += 1;
        } else if(kalimat[i] == 'i' || kalimat[i] == 'I'){
            Ii++;
        } else if(kalimat[i] == 'u' || kalimat[i] == 'U'){
            Uu += 1;
        } else if(kalimat[i] == 'e' || kalimat[i] == 'E'){
            Ee += 1;
        } else if(kalimat[i] == 'o' || kalimat[i] == 'O'){
            Oo += 1;
        }
    }

    printf("A/a = %d\n", Aa);
    printf("I/i = %d\n", Ii);
    printf("U/u = %d\n", Uu);
    printf("E/e = %d\n", Ee);
    printf("O/o = %d\n", Oo);

    return 0;

}