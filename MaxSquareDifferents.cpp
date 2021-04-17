#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    double a, b;
    long long n;
    long long i, j;
    long long chislo, resheniq;
    int max = 0;
    vector <long long> d;
    vector <long long> maxes;
    cin>>n;

    for(j = 1;j <= n;j++){

        for(i = 1;i <= j/2;i++){
            if(j % i == 0){
                d.push_back(i);
            }
        }

        resheniq = 0;
        for(i = 0;i < d.size();i++){
            b = (j / d[i] - d[i]) / 2;
            a = d[i] + b;
            if(a*a - b*b == j && a >= 0 && b >= 0){
                resheniq++;
            }
        }

        if(resheniq > max){
            max = resheniq;
            chislo = j;
            maxes.clear();
        }

        if(resheniq == max){
            maxes.push_back(j);
        }
        d.clear();
    }

    for(i = 0;i < maxes.size();i++){
        cout<<"Chislo: "<<maxes[i]<<" s "<<max<<endl;
    }
    return 0;
}
