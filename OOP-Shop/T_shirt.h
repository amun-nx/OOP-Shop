#include<stdio.h>
#include<iostream>
#include<math.h>
# include <string>
using namespace std;

int menu_type() {
    int a;
    do{
    cout<< "\t\t\t\t------------------------------"<<endl;
    cout<< "\t\t\t\t\t     Type"<<endl; 
    cout<< "\t\t\t\t------------------------------"<<endl;
    cout<<"\n\t\t\t\t 1-Sleeved"<<endl;
    cout<<"\n\t\t\t\t 2-Sleeveless"<<endl;
    cout<< "\t\t\t\t------------------------------"<<endl;
    cin >> a;
    cout<< "\t\t\t\t------------------------------"<<endl;
    cout<< "\t\t\t\t\t     Choice "<<a<<endl;
    cout<< "\t\t\t\t------------------------------"<<endl;
    }while(a<1 || a>2);

    return a;
}

class T_shirt : public clothing {
    protected :
        int type;
        int type_article=1;
    public :
        T_shirt(){
                int choice=menu_type();
                if(choice==2){
                        type=1;
                        price=25;
                }
                if(choice==1){
                        type=2;
                        price=20;
                }
        }
        virtual void display(){
            cout <<"\t\t\t\t------------------------------------"<<endl;
            cout <<"\t\t\t\t               T-shirt"<<endl;
            cout <<"\t\t\t\t------------------------------------"<<endl;
            cout <<"\t\t\t\tSize    : "<< size<<endl;
            cout <<"\t\t\t\tColor   : "<< color<<endl;
            if (type==1){
                cout <<"\t\t\t\tSleeve    : Yes"<<endl;
            }
            if (type==2){
                cout <<"\t\t\t\tSleeve    : No"<<endl;
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
        ~T_shirt(){};

};