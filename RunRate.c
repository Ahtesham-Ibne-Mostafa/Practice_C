#include<stdio.h>
int main()
{
    int run1,run2,ball1,ball2;
    float overs1,overs2,runrate1,runrate2,run;
    printf("Input the run of team A : ");
    scanf("%d",&run1);
    printf("Input the run of team B : ");
    scanf("%d",&run2);
    printf("Input the total overs team A played : ");
    scanf("%f",&overs1);
    printf("Input the total balls team A played after %.01f overs : ",overs1);
    scanf("%d",&ball1);
    printf("Input the total overs team B played : ");
    scanf("%f",&overs2);
    printf("Input the total balls team B played after %.01f overs : ",overs2);
    scanf("%d",&ball2);
    runrate1 = run1/(overs1+(ball1/6));
    runrate2 = run2/(overs2+(ball2/6));
    if(runrate1>runrate2)
        run= runrate1-runrate2;
    else
        run=runrate2-runrate1;
    printf("The run rate of Team A is : %f\n",runrate1);
    printf("The run rate of Team B is : %f",runrate2);
    if(run1>run2)
        printf("The overall runrate of team A is : %f \nThe overall runrate of team B is : -%f ",run,run);
    else
        printf("The overall runrate of team A is : -%f \nThe overall runrate of team B is : %f ",run,run);

    return 0;
}
