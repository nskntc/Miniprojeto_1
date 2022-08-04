#include <stdio.h>
#include <math.h>

int main() {

    char o;
    double x, y, r, b;
    scanf("%lf%c%lf", &x, &o, &y);
    if (o=='+' || o=='-' || o=='*' || o=='/' || o=='%' || o=='~') {
        if (o=='+') r=(x+y);
        else if (o=='-') r=(x-y);
        else if (o=='*') r=(x*y);
        else if (o=='/') r=(x/y);
        else if (o=='%') r=fmod(x, y);
        else if (o=='~') r=pow(x, y);
        printf("%.1lf\n", r);
    }
    if (o=='=' && x==y) printf("true\n");
    else if (o=='=' && x!=y) printf("false\n");
    else if (o=='!' && x!=y) printf("true\n");
    else if (o=='!' && x==y) printf("false\n");
    else if (o=='<' && x<y) printf("true\n");
    else if (o=='<' && x>y) printf("false\n");
    else if (o=='>' && x>y) printf("true\n");
    else if (o=='>' && x<y) printf("false\n");
    if (o=='^') {
        if((x==1) && (y==1)) printf("true\n");
        else printf("false\n");
    }
    else if (o=='v') {
        if((x==0) && (y==0)) printf("false\n");
        else printf("true\n");
    }
    else if (o=='x') {
        if ((x==1 || x==0) && (y==1 || y==0))
        if (x!=y) printf("true\n");
        else printf("false\n");
    }
    return 0;
}