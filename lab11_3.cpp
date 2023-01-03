#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
    float count = 0;
    float sum = 0;
    float sum_2=0;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline)){
        sum += atof(textline.c_str());
        sum_2+= pow(atof(textline.c_str()),2);
        count++;
    }
    cout << "Number of data = "<< count << '\n';
    cout << setprecision(3);
    cout << "Mean = "<< sum/count << '\n';
    cout << "Standard deviation = " <<pow((sum_2/count)-pow((sum/count),2),0.5);
    return 0;
}