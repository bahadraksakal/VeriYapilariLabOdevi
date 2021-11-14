#include <stdio.h>
#include <stdlib.h>

int RecCarpanlaraAyir(int sayi,int i)
{
    if(sayi%i==0)
    {
        while(1)
        {
            sayi=sayi/i;
            printf("%d ",i);
            if(sayi==1)
            {
                return 0;
            }
            if(sayi%i != 0)
            {
                break;
            }

        }
    }
    return RecCarpanlaraAyir(sayi,i+1);

}
int main()
{
    int sayilar[7]= {16,6,29,111,360,10,99};
    for(int i=0; i<7; i++)
    {
        printf("%d. ci eleman:  ",i+1);
        RecCarpanlaraAyir(sayilar[i],2);
        printf("\n\n");
    }

    return 0;
}
