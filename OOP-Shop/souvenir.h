#include<stdio.h>
#include<iostream>
#include<math.h>
#include<vector>
#include<string>
#include<fstream>
using namespace std;

int menu(){
    int a;
    do{
    cout<< "\t\t\t\t------------------------------"<<endl;
    cout<< "\t\t\t\t\t     MENU"<<endl; 
    cout<< "\t\t\t\t------------------------------";
    cout<<"\n\t\t\t\t 1-Add a souvenir";
    cout<<"\n\t\t\t\t 2-Delete a souvenir";
    cout<<"\n\t\t\t\t 3-Display all souvenirs";
    cout <<"\n\t\t\t\t 4-Number of souvenirs in the order";
    cout<<"\n\t\t\t\t 5-End"<< endl;
    cout<< "\t\t\t\t------------------------------";
    cin >> a;
    }while(a<1 || a>5);

    return a;
}

int Menu_add(){



        int choice ;
    do{ system("cls");
        cout<<"\t\t\t\t----------------------------"<<endl;
        cout<<"\t\t\t\t           ADD              "<<endl;
        cout<<"\t\t\t\t----------------------------"<<endl;
        cout<<"\t\t\t\t1: T-shirt"<<endl;
        cout<<"\t\t\t\t2: Sweatshirt"<<endl;
        cout<<"\t\t\t\t3: Goodies"<<endl;
        cout<<"\t\t\t\t----------------------------"<<endl;
        cout<<"\t\t\t\tchoice : ";
        cin>>choice ;
        cout<<"\t\t\t\t----------------------------"<<endl;


    } while(choice<1 ||choice >3);
    return(choice) ;


}
//--------------------------------------------------
    class souvenir{
//--------------------------------------------------

    protected :

    vector<article *>  m_souvenir;
    public :
        souvenir(){};
        void add();
        void supress();
        void read();
        void write();
        virtual void display() ;
        virtual ~souvenir(){};
        void nb_souvenir();
    };
//--------------------------------------------------
void souvenir :: add(){
    int choice;
    choice = Menu_add();
    if (choice == 1)
    {   system("cls");
        T_shirt *t = new T_shirt();
        m_souvenir.push_back(t);

    }
        if (choice == 2)
    {   system("cls");
        Sweatshirt *s = new Sweatshirt();
        m_souvenir.push_back(s);

    }
        if (choice == 3)
    {   system("cls");
        goodies *g = new goodies();
        m_souvenir.push_back(g);

    }
}
void souvenir::display(){
    system("cls");
    double total_price = 0;
    for ( int i =0 ; i< m_souvenir.size() ; i++ ){  
        total_price += m_souvenir[i]->get_price();
    }
    cout<< "\t\t\t\t--------------------------------- " <<endl;
    cout<< "\t\t\t\t Total price = " << total_price<< " euros" <<endl;
    cout<< "\t\t\t\t--------------------------------- " <<endl;
    int tshirt = 0;
    int sweatshirt = 0;
    int goodies = 0;
    for (int i = 0; i < m_souvenir.size(); i++){
        if (m_souvenir[i]->get_type_article() == 1){
            tshirt++;
        }
        if (m_souvenir[i]->get_type_article() == 2){
            sweatshirt++;
        }
        if (m_souvenir[i]->get_type_article() == 3){
            goodies++;
        }
    }
    cout << "\t\t\t\t--------------------------------- " << endl;
    cout << "\t\t\t\t Number of T-shirt : " << tshirt << endl;
    cout << "\t\t\t\t Number of Sweat   : " << sweatshirt << endl;
    cout << "\t\t\t\t Number of goodies : " << goodies << endl;
    cout << "\t\t\t\t--------------------------------- " << endl;
    for ( int i =0 ; i< m_souvenir.size() ; i++ ){  
     m_souvenir[i]->display();
    }
}

void souvenir::supress(){
cout<< "\t\t\t\t--------------------------------- " <<endl;
cout<< "\t\t\t\t Which souvenir you wanna supress ?" <<endl;
cout<< "\t\t\t\t--------------------------------- " <<endl;
for (int i = 0; i < m_souvenir.size(); i++){
        cout << "\t\t\t\t--------------------------------- " << endl;
        cout << "\t\t\t\t Souvenir : " << i+1 << endl;
        cout << "\t\t\t\t--------------------------------- " << endl;
        m_souvenir[i]->display();
    }
int n;
cin >> n;


m_souvenir.erase(m_souvenir.begin() + (n-1));
system("cls");
cout<< "\t\t\t\t---------------------------------------- " <<endl;
cout<< "\t\t\t\t your souvenir has been sucessfully deleted  "  <<endl;
cout<< "\t\t\t\t----------------------------------------- " <<endl;

 }

void souvenir::nb_souvenir(){
    cout<< "\t\t\t\t--------------------------------- " <<endl;
    cout<< "\t\t\t\t the number of souvenir is : " << m_souvenir.size() <<endl;
    cout<< "\t\t\t\t--------------------------------- " <<endl;
}




