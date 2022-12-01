#include<stdio.h>

double areaOfCircle(double r){
    return 3.1416*(r)*(r);
}
int main(){
    double R;
    scanf("%lf",&R);
    printf("%lf",areaOfCircle(R));
    return 0;
}