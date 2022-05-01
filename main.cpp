#include <iostream>
#include <fstream>
#include <cstdio>
#include<regex>
#include<string>

using namespace std;
void zadanie1();
int main(){

    zadanie1();
    return 0;
}

void zadanie1(){
    int counter = 0;
    string input;
    regex record("^.*Adam.*Nowak.*680510.*$");
    std::fstream kartoteka_data;
    kartoteka_data.open("kartoteka.txt");
    if(kartoteka_data.is_open()==false) cout<<"error";
    else{
        while(!kartoteka_data.eof()){
            getline(kartoteka_data,input);
           // cout<<input << endl;
            if(regex_match(input,record)){
                cout<<"I found Nowak\n";
                counter++;
            }
            else{
                cout<<"I dont see Nowak :c\n";
            }
        }
    }
    cout <<"counter: "<<counter <<endl;


    kartoteka_data.close();
}