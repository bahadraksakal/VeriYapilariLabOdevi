#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ozyinelemePalidrom(char* string,int max,int* min){
    if(*min==max-1 || max==0){
        printf("it is palidrom\n");
        return 0;
    }
    if(string[(*min)]==string[max-1]){
        (*min)++;
        return ozyinelemePalidrom(string,max-1,min);
    }else{
        printf("Not Palidrom\n");
        return -1;
    }

}
int main()
{
    char pladirom[9][20]={"nicin", "neden","utu","musluk","ot","madam", "kulluk", "idadi","mmhxtAEtxhmm"};
    int min=0;
    int* p_min=&min;
    for(int i=0;i<9;i++){
        ozyinelemePalidrom(pladirom[i],strlen(pladirom[i]),p_min);
        *p_min=0;
    }

    return 0;
}
