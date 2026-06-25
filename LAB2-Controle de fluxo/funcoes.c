// funcao (funcao com calculos dentro)

#include "funcoes.h"
#include <math.h>

//pow(x,y)= x**y

//exercicio 1
float media(float x, float y){
    return (x+y)/2;
}

//exercicio 2
double distancia (double x1, double y1, double x2, double y2 ){
    double dx = x2 - x1;
    double dy = y2 - y1;
    return sqrt(dx*dx + dy*dy);
// return sqrt(pow(x2 - x1,2)+ pow(y2 - y1,2))
}

//exercicio 3
double MediaAlgoritmo (double atv , double p1, double p2, double p3, int lab){
    double flab = 0.7 + 0.03 * (lab - 1) / 5.0;
    double p =0.2 * p1 + 0.6 * p2 + 0.2 * p3;
    return sqrt(flab * atv * p);
}

float MediaFisica1 (float t1, float t2, float t3, float t4, float np, float l1, float l2, float l3, float l4, float pf){
    float nt = (t1 + t2 + t3 + t4) / 4;
    float nl = (l1 + l2 + l3 + l4) / 4;
    return (0.2 * nt + 0.2 * np + 0.1 * nl + 0.5 * pf);
}

float MediaCalculo2 (float at1, float at2, float at3, float at4, float pf){
    float atp = (at1 + at2 + at3 + at4) / 4;
    return (0.4 * atp + 0.6 * pf);
}

float MediaGrafo (float a1, float a2, float pf){
    float a = (a1 + a2 ) / 2;
    return (0.3 * a + 0.7 * pf);
}

float MediaGeom (float a1, float a2, float a3, float pf){
    float a = (a1 + a2 + a3) / 4;
    return (0.3 * a + 0.7 * pf);

}

float MediaFilo (float e1, float e2, float e3, float e4, float te, float f){
    float E = (e1 + e2 + e3 + e4);
    return ((0.4 * E + 0.6 * te) * f);
}

float max_float(float xmax, float ymax){
    if (xmax > ymax){
        return xmax;
    }
    else if(ymax > xmax){
        return ymax;
    }
    else{
        return ymax;
    }
}

float min_float(float xmin, float ymin){
    if (xmin < ymin){
        return xmin;
    }
    else if(ymin < xmin){
        return ymin;
    }
    else{
        return ymin;
    }
}

int sinal(float x){
    if (x==0){
        return 0;
    }
    else if(x>0){
        return 1;
    }
    else{
        return -1;
    }
}

int acima_de(float valor, float limite){
    if (valor>limite){
        return 1;
    }
    else{
        return 0;
    }
}