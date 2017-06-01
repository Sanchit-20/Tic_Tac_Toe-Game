#ifndef PERSON_H
#define PERSON_H
using namespace std;
class person{

    int score=0, a;
    string name;


    public:
    void matches(int x);

    void input();

    string output();

    void increment_score();

    void display_result();

};


#endif
