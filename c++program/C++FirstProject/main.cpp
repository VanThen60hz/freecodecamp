#include <iostream>
#include <cmath>
using namespace std;

class Student {
    public:
        string name;
        string major;
        double gpa;

        Student(string aName, string aMajor, double aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;

        }


};

class Movie {

    private:
        string rating;

    public:
        string title;
        string director;

        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            rating = aRating;
        }

        void setRating(string aRating){
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
                rating = aRating;
            }else{
                rating = "NR";
            }
        }

        string getRating(){
            return rating;
        }


};

// super class
class Chef{
    public:
        void makeChicken(){
            cout << "The chef makes chicken" << endl;
        }

        void makeSalad(){
            cout << "The chef makes salad" << endl;
        }

        void makeSpecialDish(){
            cout << "The chef make bqq ribs" << endl;
        }
};


// subclass of Chef class
class ItalianChef: public Chef{
    public:
        void makePasta(){
            cout << "The chef make pasta" << endl;
        }


        void makeSpecialDish(){
            cout << "The chef make chicken parm" << endl;
        }
};

int main()
{
    Chef chef;
//    chef.makeChicken();
    chef.makeSpecialDish();

    ItalianChef italianChef;
//    italianChef.makeChicken();
//    italianChef.makePasta();
    italianChef.makeSpecialDish();
    return 0;
}
