#include <iostream>
#include <string>
#include <math.h>
#include <time.h>
using namespace std;

int random(int minN, int maxN){
    return minN + rand() % (maxN + 1 - minN);
}

class User{
    public:
    int point = random(1,20);
    int option = 0;
    int add = 0;

    User(){
        this->run();
    }

    void run(){
        cout << this->point << endl;
        cin >> this->option;

        if (this->option == 1){
            this->add = random(1,10);
            cout << "Hit " << this->add << endl;
            this->point += this->add;
            cout << this->point << endl;
        }
        else if (this->option == 2){
            cout << "Stand" << endl;
            cout << this->point << endl;
        }
        else{
            forfeit();
        }

        if (this->point==21) win(this->point);
        else if (this->point>21) lose (this->point);
        else Bot::run();
    }
};

class Bot{
    public:
    int point = random(1,20);
    int add = 0;

    void run(){
        this->add = random(1,10);
        this->point+=this->add;

        if (this->point >21){
            cout << this->point << endl;
            win(User::point);
        }
        else if (this->point==21){
            cout << this->point << endl;
            lose(User::point);
        }
        else{
            User::run();
        }
    }
};

void win(int pts){
    cout << "You win with the point of " << pts << endl;
}

void lose(int pts){
    cout << "You lose with the point of " << pts << endl;
}

void forfeit(){
    cout << "You have forfeited." << endl;
}

int main(){
    srand((int)time(0));
    User* user = new User();
    Bot* bot = new Bot();
    return 0;
}