#include <string>

#include <iostream>


using namespace std;


class Squirrel {
private:
    string name;

public:
    Squirrel(string name) {
        this->name = name;
    }

    string get_name() {
        return this->name;
    }
};






class NodeClass {
    private:
    Squirrel* squirrel;
    NodeClass* leftnode;
    NodeClass* rightnode;


public:
    NodeClass(Squirrel* squirrel);
    Squirrel* get_squirrel();


    void leftside(NodeClass* left);
    void rightside(NodeClass* right);

    NodeClass* leftobject();
    NodeClass* rightobject();



};




class TreeClass {
    private:
    NodeClass* roottreeobject;



public:

    TreeClass(NodeClass* roottreeobject);
    NodeClass* getrootclass();

    void consoleoutputtreeclass();
    void consolenodelist(NodeClass* nodeclass);


};







