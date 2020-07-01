#include<stdio.h>
#include<math.h>
int main(void) {
    float km,price[3];
    printf("Enter Kilometer from taxi : ");
    scanf("%f",&km);

        if(km<=1){
            price[0] = 35;
        }else if(km<=10){
            price[0] = 35 + (km-1)*5.5;
        }else if(km<=20){
            price[0] = 84.5 + (km-10)*6.5;
        }else if(km<=40){
            price[0] = 149.5 + (km-20)*7.5;
        }else if(km<=60){
            price[0] = 299.5 + (km-40)*8.0;
        }else if(km<=80){
            price[0] = 459.5 + (km-60)*9.0;
        }else{
            price[0] = 639.5 + (km-80)*10.5;
        }

        price[1] = 40+(km*7.64);
        
        price[2] = 30+(km*6.3);

    printf("Taxi : %.0f\n",price[0]);
    printf("JustGrab : %.0f (%s%.0f)\n",price[1],(price[1]-price[0] > 0) ? ("+"):(""),price[1]-price[0]);
    printf("GrabBike : %.0f (%s%.0f)\n",price[2],(price[2]-price[0] > 0) ? ("+"):(""),price[2]-price[0]);

    if(price[0]>price[1]){
        if(price[0]>price[2]){
            printf("Recommend Service : GrabBike\n");
        }else{
            printf("Recommend Service : JustGrab\n");
        }
    }else if(price[0]>price[2]){
        printf("Recommend Service : GrabBike\n");
    }else{
        printf("Recommend Service : Taxi\n");
    }

    return 0;
}
