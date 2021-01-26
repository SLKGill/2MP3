#include <stdio.h>
int main(int argc, char** argv) {
    //use if-else nesting to find the smallest number among given five numbers

    float a, b, c, d, e;
    printf("Enter 5 numbers so I can find the smallest value\n");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

    if (a<=b && a<=c && a<=d && a<=e){
        printf("smallest=%f\n", a);
    }
    else {
        if(b<=a && b<=c && b<=d && b<=e) {
            printf("smallest=%f\n", b);
        }
        else {
            if(c<=a && c<=b && c<=d && c<=e) {
                printf("smallest=%f\n", c);
            }
            else {
                if(d<=a && d<=b && d<=c && d<=e) {
                    printf("smallest=%f\n", d);
                }
                else {
                    if(e<=a && e<=b && e<=c && e<=d) {
                        printf("smallest=%f\n", e);
                    }
                }
            }
        }
    }

    return 0;
}
