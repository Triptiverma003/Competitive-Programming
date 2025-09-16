#include<iostream>
using namespace std;

class Animal{
    public:
    string breed;
    string limbs;
    string name;
    
Animal(string _breed , string _limbs, string _name){
        this->breed = _breed;
        this->limbs = _limbs;
        this->name =  _name;
    }
    
    public:
    void Breeding(){
        cout << "The name of the breed"<<breed;
    }
    void Naming(){
        cout<<"The name of the animal"<<name;
    }
};

class Dog : public Animal{
    public:
    string pet;
    string legal;
    Dog(string _breed, string _limbs, string _name, string _pet, string _legal):Animal(_breed,_limbs, _name){
        cout << "I am under ctor"<<endl;
        this->pet = _pet;
        this->legal = _legal;
    }
    
    void Ptanahi(){
        cout<<"This is the simple pata nahi"<<endl;
    }
};

int main(){
    Dog B("labrador" , "4" , "renu" , "Yes" , "Yes");
    B.Ptanahi();
    return 0;
}
