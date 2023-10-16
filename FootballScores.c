#include <stdio.h>


int main(){
    int score;

    while(1){
        printf("Enter 0 or 1 to STOP \n");
        printf("Enter NFL Score: ");
        scanf("%d", &score);

        if (score <= 1){
            printf("Invalid Score.");
            break;
        }


        printf("Possible combinations of scoring plays:\n");

        for(int twoPoint = 0; twoPoint <= score / 8; twoPoint++){
            for(int extraPoint = 0; extraPoint <= score / 7; extraPoint++){
                for(int touchdown =0; touchdown <= score / 6; touchdown++){
                    for(int fieldGoal =0; fieldGoal <= score / 3; fieldGoal++){
                        for(int safety = 0; safety <= score/ 2; safety++){
                            if(twoPoint * 8 + extraPoint * 7 + touchdown * 6 + fieldGoal * 3 + safety * 2 == score){
                                printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety \n", twoPoint,extraPoint,touchdown,fieldGoal,safety);
                            }
                        }
                    }
                }
            }
        }
    }
}
