#include<stdio.h>
#include<math.h>
float turev (float x);
float turev (float x)
{
    double e= exp(1);

    return    -pow(e,-x/2)/2- 1;
}
float f(float x)
{

    return pow(exp(1),-x/2) -x-0.2;

}
float raphsonMetodu(float x){
    printf("------------------NEWTON RAPHSON METODU COZUMU--------------------\n");
    printf(" #(iterasyon)    kok             e");

    float h, x1;

    for (int k=1; k<=10; k++)
    {
        h=f(x)/turev(x);
        x1=x-h;
        printf("\n %d               %f        %f ",k, x1,h);
       /* if (fabs(h) < 0.02)
        {
            printf(" %d  %f\n", k, x1);
            return 0;
        }*/
        x=x1;
    }

}

int main()
{
    raphsonMetodu(2.0);
}