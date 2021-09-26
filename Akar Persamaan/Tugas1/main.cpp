#include <stdio.h>
#include <math.h>

float persamaan(float x){
    return (2*(x*x)) - (5*x) +2;
}

void biseksi(float xb, float xa, float epsilon)
{
    float xr,bawah,atas,hasil;
    int i=0;
    bawah = xb;
    atas = xa;
    while(fabs(xb-xa)>=epsilon){
        i++;
        xr = (xa+xb)/2;
        hasil = persamaan(xr)*persamaan(xa);
        printf("\niterasi ke %d\nxb = %f\nxa = %f\nxr = %f\n",i,xb,xa,xr);
        if(hasil< 0){
            xb = xr;
        }
        else if(hasil > 0){
            xa = xr;
        }
        else{
            break;
        }
    }
    printf("\nAkar antara %f dan %f adalah %f\n",bawah,atas,xr);
    printf("Ditemukan setelah iterasi ke %d",i);
}

int main(){
    float xa,xb,eps;
    printf("Masukkan Batas Bawah : ");
    scanf("%f",&xb);
    printf("Masukkan Batas Atas : ");
    scanf("%f",&xa);
    printf("Masukkan Tingkat Error: ");
    scanf("%f",&eps);
    biseksi(xb,xa,eps);
}
