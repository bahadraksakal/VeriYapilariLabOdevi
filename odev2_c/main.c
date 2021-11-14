#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool recAsalmi(int sayi,int i)
{
    if(sayi==i){
        return true;
    }else if(sayi%i==0 ||sayi==0|| sayi==1){
        return false;
    }else{
        return recAsalmi(sayi,i+1);
    }
}
int main()
{
    int sayilar[21]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    for(int i=0;i<21;i++){
        recAsalmi(sayilar[i],2)? printf("++ %d. eleman asaldir.\n",i+1):printf("-- %d. eleman asal deðildir.\n",i+1);
    }
    return 0;
}
