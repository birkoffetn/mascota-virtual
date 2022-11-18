#include<fstream>
#include<string>
#include<vector>
#include<iostream>
#include<cctype>

using namespace std;

int main(){
    ifstream entrada("images2.txt");
    ofstream salida("salita.txt");
    string apertura, cierre, linea;
    while(getline(entrada, linea)){
        vector<string> animal;
        apertura= linea;
        cierre= apertura;
        cierre= cierre.substr(1);
        cierre= "</"+ cierre;
        getline(entrada, linea);
        while(linea!= cierre){
            animal.push_back(linea);
            getline(entrada, linea);
        }
        int min= 1024;//puede ser mas
        for(const auto& linea: animal){
            int i= 0;
            while(isspace(linea[i])){
                ++i;
            }
            if(i< min) min= i;
        }
        for(auto& linea: animal){
            linea= linea.substr(min);
        }
        salida<<apertura<<"\n";
        for(const auto& linea: animal){
            salida<<linea<<"\n";
        }
        salida<<cierre<<endl;
    }
    return 0;
}