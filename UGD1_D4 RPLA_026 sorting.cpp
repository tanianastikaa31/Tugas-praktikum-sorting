#include <stdio.h>
#include <string.h>
 
int main() {
    char nama [3][30];
    strcpy(nama[0],"Tania Nastika");
    strcpy(nama[1],"Putri");
    strcpy(nama[2],"Mosha");
     
    for(int i=0;i<3;i++){
 
            int j,bd;
            j=i;
            for(int k=i+1;k<3;k++)
            {
                    bd=strcmp(nama[j],nama[k]);
                    if(bd==1) j=k;
                    }
                                if(j!=i){
                             char temp[1][30];
                             strcpy(temp[0],nama[j]);
                             strcpy(nama[j],nama[i]);
                             strcpy(nama[i],temp[0]);}
                    }
     
    for (int i=0;i<3;i++){
        puts(nama[i]);
        }
    getchar();
    return 0;
}
