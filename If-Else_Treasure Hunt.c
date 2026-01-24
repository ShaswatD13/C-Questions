/*
Problem - If-Else_Treasure Hunt
Platform - HackerRank
Summary - The objective is to simulate the treasure hunt journey and generate responses based on the player's decisions.
*/

#include <stdio.h>

int main() {
    int path,cross,bridge,puzzle,chest,flag=1;
    scanf("%d",&path);
    if(path==1){
        printf("Player chooses the Left path.\n");
        scanf("%d",&cross);
            if(cross==1){
               printf("Poor choice, Game Over!\n");
                
            }
            else if(cross==2){
                printf("Player found a bridge.\n");
                scanf("%d",&bridge);
                 if(bridge==1){
                     printf("Player crosses the bridge safely.\n");
                     flag=0;
                 }
                 else if(bridge==2){
                     printf("Poor luck, Game Over!\n");
                     
                 }
            }
    }
    else if(path==2){
            printf("Player chooses the Middle path.\n");
            scanf("%d",&puzzle);
                 if(puzzle==582){
                     printf("Player solved the puzzle.\n");
                     flag=0;
                 }
                 else if(puzzle!=582){
                     printf("Foolish player, Game Over!\n");
                        
                 }
    }
    else if(path==3){
            printf("Player chooses the Right path.\n");
            scanf("%d",&puzzle);
                 if(puzzle==30){
                      printf("Player solved the puzzle.\n");
                     flag=0;
                 }
                 else{
                      printf("Foolish player, Game Over!\n");    
                 }
     }
    
    if(flag==0){
        scanf("%d",&chest);
        if(chest==1){
            printf("All that glitters is not gold, Game Over!\n");
        }
        else if(chest==2){
            printf("All your efforts were for nothing, Game Over!\n");
        }
        else if(chest==3){
            printf("Congratulations!! You won the treasure.\n");
        }
    }
    return 0;
}