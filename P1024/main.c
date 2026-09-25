#include "stdio.h"
#include "math.h"

double a,b,c,d;
    
double f(double x){
    return a * x * x * x + b * x * x + c * x + d ;
}

int main(){
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    for(double i = -100.0; i <= 100.0; i += 1.0)
    {
        if(fabs(f(i))< 1e-6){
            printf("%.2f ",i );
            continue;
        }
        if(f(i) * f(i + 1) < 0)
        {
            double left = i;
            double right = i + 1;
        while(right - left > 1e-4)
        {
           double mid = (right + left) / 2.0;
        if(f(left) * f(mid) <= 0)
        {
            right = mid;
        }else
        {
            left = mid;
        }
		}
            printf("%.2f ",left );
			
    }
}
    return 0;
}
