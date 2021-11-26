#include <iostream>
#include <cmath>

using namespace std;
double deg2rad(int x){
    x = M_PI/(180/x);
    return x;
}
double findXComponent(float a, float b, float c, float d){
    int sumx;
     sumx =a*cos((180*c)/M_PI)+b*cos((180*d)/M_PI);
    return sumx;
}
double findYComponent(float a, float b, float c, float d){
    int sumy;
     sumy =a*sin((180*c)/M_PI)+b*sin((180*d)/M_PI);
    return sumy;
}
double pythagoras(float f, float g){
    int sump;
     sump =sqrt(pow(f,2)+pow(g,2));
    return sump;
}
double deg2rad(float x){
    int x;
     x = ((180*x)/M_PI);
    return x;
}
void  showResult(float a, float b){
    cout << "Length of the resultetant vector = " << a;
    cout << "Direction of the resultant vector (deg) = " << b;
}
int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = rad2deg(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
