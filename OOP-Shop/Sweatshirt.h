#include<stdio.h>
#include<iostream>
#include<math.h>
# include <string>
using namespace std;

int menu_type_Sweat() {
    int a;
    do{
    cout<< "\t\t\t\t------------------------------"<<endl;
    cout<< "\t\t\t\t\t     Type"<<endl; 
    cout<< "\t\t\t\t------------------------------"<<endl;
    cout<<"\n\t\t\t\t 1-Hooded"<<endl;
    cout<<"\n\t\t\t\t 2-Hoodless"<<endl;
    cout<< "\t\t\t\t------------------------------"<<endl;
    cin >> a;
    cout<< "\t\t\t\t------------------------------"<<endl;
    cout<< "\t\t\t\t\t     Choice "<<a<<endl;
    cout<< "\t\t\t\t------------------------------"<<endl;
    }while(a<1 || a>2);

    return a;
}

class Sweatshirt : public clothing {
    protected :
    int type;
    int type_article=2;
    public :
        Sweatshirt(){
                int choice=menu_type_Sweat();
                if(choice==1){
                        type=1;
                        price=40;
                }
                if(choice==2){
                        type=2;
                        price=50;
                }
        }
        virtual void display(){
            cout<<endl;
            cout <<"\t\t\t\t------------------------------------"<<endl;
            cout <<"\t\t\t\t               Sweat"<<endl;
            cout <<"\t\t\t\t------------------------------------"<<endl;
            cout <<"\t\t\t\tSize    : "<< size<<endl;
            cout <<"\t\t\t\tColor   : "<< color<<endl;
            if (type==1){
                cout <<"\t\t\t\tHood    : No"<<endl;
            }
            if (type==2){
                cout <<"\t\t\t\tHood    : Yes"<<endl;
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
        string get_size(){
            return size;
        }
        string get_color(){
            return color;
        }
        int get_type_article(){
            return type_article;
        }
        ~Sweatshirt(){};


};