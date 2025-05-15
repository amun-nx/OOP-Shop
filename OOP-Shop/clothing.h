#include<stdio.h>
#include<iostream>
#include<math.h>
# include <string>
using namespace std;


int menu_size() {
    int a;
    do{
    cout<< "\t\t\t\t------------------------------"<<endl;
    cout<< "\t\t\t\t\t     Size"<<endl; 
    cout<< "\t\t\t\t------------------------------"<<endl;
    cout<<"\n\t\t\t\t 1-XS"<<endl;
    cout<<"\n\t\t\t\t 2-S"<<endl;
    cout<<"\n\t\t\t\t 3-M"<<endl;
    cout<<"\n\t\t\t\t 4-L"<<endl;
    cout<<"\n\t\t\t\t 5-XL"<<endl;
    cout<< "\t\t\t\t------------------------------"<<endl;
    cin >> a;
    cout<< "\t\t\t\t------------------------------"<<endl;
    cout<< "\t\t\t\t\t     Choice "<<a<<endl;
    cout<< "\t\t\t\t------------------------------"<<endl;
    }while(a<1 || a>5);

    return a;
}

int menu_color() {
    int a;
    do{
    cout<< "\t\t\t\t------------------------------"<<endl;
    cout<< "\t\t\t\t\t     Color"<<endl; 
    cout<< "\t\t\t\t------------------------------"<<endl;
    cout<<"\n\t\t\t\t 1-Blue"<<endl;
    cout<<"\n\t\t\t\t 2-White"<<endl;
    cout<<"\n\t\t\t\t 3-Red"<<endl;
    cout<<"\n\t\t\t\t 4-Black"<<endl;
    cout<< "\t\t\t\t------------------------------"<<endl;
    cin >> a;
        cout<< "\t\t\t\t------------------------------"<<endl;
    cout<< "\t\t\t\t\t     Choice "<<a<<endl;
    cout<< "\t\t\t\t------------------------------"<<endl;
    }while(a<1 || a>4);

    return a;
}

class clothing : public article{
    protected :
        string size;
        string color;
        int type;
    public :
        clothing(){
            price=0;
            size="XS";
            color="black";
                int choice=menu_size();
                if(choice==1){
                        size="XS";
                }
                if(choice==2){
                        size="S";
                }
                if(choice==3){
                        size="M";
                }
                if(choice==4){
                        size="L";
                }
                if(choice==5){
                        size="XL";
                }
                choice=menu_color();
                if(choice==1){
                        color="Blue";
                }
                if(choice==2){
                        color="White";
                }
                if(choice==3){
                        color="Red";
                }
                if(choice==4){
                        color="Black";
                }
            }
        virtual void display()=0;
        
        virtual double get_price()=0;
        int get_type(){
            return type;
        }
        virtual get_type_article()=0;
        ~clothing(){};

};

double clothing::get_price(){
    return price;
}
void clothing::display(){
            cout <<"\t\t\t\t------------------------------------"<<endl;
            cout <<"\t\t\t\t               Cloth"<<endl;
            cout <<"\t\t\t\t------------------------------------"<<endl;
            cout <<"\t\t\t\tSize    : "<< size<<endl;
            cout <<"\t\t\t\tColor   : "<< color<<endl;
            if (type==1){
                cout <<"\t\t\t\tType    : 1"<<endl;
            }
            if (type==2){
                cout <<"\t\t\t\tType    : 2"<<endl;
            }
            cout <<"\t\t\t\tPrice   : "<< price<<endl;
            cout <<"\t\t\t\t------------------------------------"<<endl;
}

int clothing::get_type_article(){
    return type_article;
}