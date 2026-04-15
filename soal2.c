// PRAKTIKUM PEMECAHAN MASALAH DENGAN PEMROGAMAN 
// MODUL    : 01
// PEMBUAT  : Isnaya Zalfa Kamila (13224028)
// DESKRIPSI: Menentukan jumlah langkah

#include <stdio.h> 
#include <math.h>

int banyak_langkah(int N){
    if (N == 1){
     return 0 ;
    } 
    else if (N%2 == 0) {
     return 1+banyak_langkah(N/2);
    }
    else{
        return 1+banyak_langkah(3*N+1);
    }
    
}


int main (){
    int N,n;
    scanf("%d",&N);
    for (int i=0;i<N;i++){
        scanf("%d",&n);
        int hasil = banyak_langkah(n);
        printf("LANGKAH %d\n", hasil);
    }
    return 0;
}
