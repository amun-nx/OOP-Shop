#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

class article{
    protected :
        double price;
        int type_article;
    public :
        article(){
            price=0;
        }
        virtual void display()=0;
        virtual double get_price()=0;
        virtual int get_type_article()=0;
        ~article(){};

};

double article::get_price(){
    return price;
}
void article::display(){
    cout <<"\t\t\t\t------------------------------------"<<endl;
    cout <<"\t\t\t\t               Article"<<endl;
    cout <<"\t\t\t\t------------------------------------"<<endl;
    cout <<"\t\t\t\tPrice   : "<< price<<endl;
    cout <<"\t\t\t\t------------------------------------"<<endl;
}

int article::get_type_article(){
    return type_article;
}