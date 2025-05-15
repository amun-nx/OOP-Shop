#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

int menu_goodies() {
    int a;
    do{
    cout<< "\t\t\t\t------------------------------"<<endl;
    cout<< "\t\t\t\t\t     GOODIES"<<endl; 
    cout<< "\t\t\t\t------------------------------"<<endl;
    cout<<"\n\t\t\t\t 1-Backpack"<<endl;
    cout<<"\n\t\t\t\t 2-Cap"<<endl;
    cout<<"\n\t\t\t\t 3-Gourd"<< endl;
    cout<<"\n\t\t\t\t 4-Flame"<< endl;
    cout<< "\t\t\t\t------------------------------"<<endl;
    cin >> a;
    }while(a<1 || a>4);

    return a;
}
class goodies : public article{
    protected :
        int type;
        int type_article=3;
    public :
        goodies(){
            int choice=menu_goodies();
            price=0;
            if (choice==1){
                price=50;
                type=1;
            }
            if (choice==2){
                price=30;
                type=2;
            }
            if (choice==3){
                price=20;
                type=3;
            }
            if (choice==4){
                price=10;
                type=4;
            }
        }
        void display(){
            cout <<"\t\t\t\t------------------------------------"<<endl;
            cout <<"\t\t\t\t               Goodies"<<endl;
            cout <<"\t\t\t\t------------------------------------"<<endl;
            if (type==1){
                cout <<"\t\t\t\tType    : Backpack"<<endl;
            }
            if (type==2){
                cout <<"\t\t\t\tType    : Cap"<<endl;
            }
            if (type==3){
                cout <<"\t\t\t\tType    : Gourd"<<endl;
            }
            if (type==4){
                cout <<"\t\t\t\tType    : Flame"<<endl;
            }
            cout <<"\t\t\t\tPrice   : "<< price<< " euros"<<endl;
            cout <<"\t\t\t\t------------------------------------"<<endl;
        }
        virtual double get_price(){
            return price;
        }
        int get_type(){
            return type;
        }
        int get_type_article(){
            return type_article;
        }
        ~goodies(){};	
};