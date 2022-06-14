#include<iostream>
using namespace std;

class Hero {

    private:  
    int health;
    public:
    char level;
    char *name;
    static int timeToComplete;
    
    Hero(){
        cout<<" Default Constructor called"<<endl;
    }
    //Parameterized Constructor
    Hero(int health){
        
        this->health = health;
    }

    Hero(int health, char level, char name){
        this->level=level;
        this->health = health;
        this->name = &name;
    }

    //Copy constructor
        Hero(Hero& temp){
            this->health=temp.health;
            this->level=temp.level;
        }


    void print(){
        cout<<endl;
        cout<<"Name : "<<this->name<<" , ";
        cout<<"Health is :"<<this->health<<" , ";
        cout<<"Level is : "<<level<<endl;
        cout<<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health =h;
    }

    void setLevel(int l){
        level = l;
    } 

    void setName(char name[]){
        strcpy(this->name, name);
    }

    ~Hero(){
        cout<<"Destructor called"<<endl;
    }

    static int random(){
        return timeToComplete;
    }
};

int Hero::timeToComplete=5;

int main()
{
    cout<<Hero::random()<<endl;

    // cout<<Hero::timeToComplete<<endl;

    // Hero a;

    // cout<<a.Hero::timeToComplete<<endl;

    // Hero b;
    // b.timeToComplete=10;
    // cout<<a.Hero::timeToComplete<<endl;
    // cout<<b.Hero::timeToComplete<<endl;

    // Hero hero1;
    // hero1.setHealth(100);
    // hero1.setLevel('A');
    // char name[10]="Nilesh";
    // hero1.setName(name);
    // hero1.print();




    // suresh.setHealth(70);
    // suresh.setLevel('C');
    
    // Hero suresh(70,'C');
    
    // Hero S(70,'C');
    // S.print();

    // //Copy constructor
    // Hero R(S);
    // R.print();
    




    //object created statically
    // cout<<"Hello Nilesh"<<endl;
    // Hero ramesh;
    // cout<<"Hello Anshika"<<endl;

    // object created dynamically

    // Hero *h = new Hero;

    // Hero ramesh(10, 'B');
    // // cout<<"Adress of ramesh : "<<&ramesh<<endl;
    // ramesh.getHealth();

    // ramesh.print();











    // Statically allocation of object in class
//     Hero h1;
//     cout<<" level is " << h1.level<<endl;
//     cout<<"health is "<< h1.getHealth()<<endl;

// cout<<endl;

//     //Dynamically allocating of Object in class
//     Hero *a = new Hero;
//     cout<<" level is " << (*a).level<<endl;
//     cout<<"health is "<< (*a).getHealth()<<endl;

//     // creation of object for class 

//     Hero h1;
//     h1.setHealth(60);
//     h1.level = 'B';
//     // cout<<sizeof(h1)<<endl;

    // cout<<"Health is : "<<h1.getHealth()<<endl;
    // cout<<"Level is : "<<h1.level<<endl;
    return 0;
}