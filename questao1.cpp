#include<bits/stdc++.h>

using namespace std;

int main (){

    unsigned int A = 0xF0FA;
    unsigned int B = 0xAFAF;
    unsigned long C = 0x0505;
    unsigned long E1, E2, E3, E4, E5;

    E1 = A & B;
    E2 = A | B;
    E3 = C << 8;
    E4 = B & 0x5A5AU;
    E5 = C << 16? B:A;
    
    printf("RESULTADO EM DECIMAL:\n");
    printf("A & B = %ld\n", E1);
    printf("A | B = %ld\n", E2);
    printf("C << 8 = %ld\n", E3);
    printf("B & 0d5A5AU = %ld\n", E4);
    printf("C << 16? B:A = %ld\n\n", E5);

    printf("RESULTADO EM HEXADECIMAL:\n");
    printf("A & B = 0x%lx\n", E1);
    printf("A | B = 0x%lx\n", E2);
    printf("C << 8 = 0x%lx\n", E3);
    printf("B & 0d5A5AU = 0x%lx\n", E4);
    printf("C << 16? B:A = 0x%lx\n", E5);

    return 0;
}


