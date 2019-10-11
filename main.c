#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int calu(float x,int where){

    float price;
    if(where==0){

        if(x<=1){
            price = 35;
        }else if(x<=10){
            price = 35 + (x-1)*5.5;
        }else if(x<=20){
            price = 84.5 + (x-10)*6.5;
        }else if(x<=40){
            price = 149.5 + (x-20)*7.5;
        }else if(x<=60){
            price = 299.5 + (x-40)*8.0;
        }else if(x<=80){
            price = 459.5 + (x-60)*9.0;
        }else{
            price = 639.5 + (x-80)*10.5;
        }

    }else if(where==1){

        int rdnb = ceil(7+((rand()%5)/1.29));
        price = 50+(x*rdnb);

    }else if(where==2){
        
        if(x<=5){
            if(x<=2){
                price = 25;
            }else if(x<=5){
                price = 25+(x-2)*5;
            }
        }else if(x>5){
            if(x<=15){
                price = 50+(x-5)*10;
            }else if(x>15){
                price = 150+(x-15)*15;
            }
        }
        
    }

    return ceil(price);

}
int thebest(float x,float y,float z){
    if(x>y){
        if(x>z){
            return "GrabBike";
        }else{
            return "JustGrab";
        }
    }else if(x>z){
        return "GrabBike";
    }else{
        return "Taxi";
    }
}
void main() {
    float km,price[3];
    printf("Enter Kilometer from taxi : ");
    scanf("%f",&km);
    int i=0;
    while(i < 3) {
        price[i] = calu(km,i);
        i++;
    }
    printf("Taxi : %.0f\n",price[0]);
    printf("JustGrab : %.0f (%s%.0f)\n",price[1],(price[1]-price[0] > 0) ? ("+"):(""),price[1]-price[0]);
    printf("GrabBike : %.0f (%s%.0f)\n",price[2],(price[2]-price[0] > 0) ? ("+"):(""),price[2]-price[0]);
    printf("Recommend : %s",thebest(price[0],price[1],price[2]));
}