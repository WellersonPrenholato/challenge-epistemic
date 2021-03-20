#include<bits/stdc++.h>

using namespace std;

int main (){

    // https://www.hexadecimaldictionary.com/hexadecimal/0xF0FA/

    unsigned int A = 0xF0FA;
    unsigned int B = 0xAFAF;
    unsigned long C = 0x0505, E;

    E = A & B;

    E = A | B;

    E = C << 8;

    E = B & 0x5A5AU;

    E = C << 16? B:A;

    printf("%ul", E);

    return 0;
}