#include <string>
#include <iostream>


#include "hello.hpp"


using namespace std;



Squirrel *NodeClass::get_squirrel() {
    return this->squirrel;
};

NodeClass::NodeClass(Squirrel *squirrel) {
    this->squirrel = squirrel;
    this->leftnode = nullptr;
    this->rightnode = nullptr;
};








void NodeClass::rightside(NodeClass* right) {
    this->rightnode = right;
};


NodeClass* NodeClass::leftobject() {
    return this->leftnode;
};



void NodeClass::leftside(NodeClass* left) {
    this->leftnode = left;
};

NodeClass* NodeClass::rightobject() {
  return this->rightnode;
};


TreeClass::TreeClass(NodeClass *roottreeobject) {
    this->roottreeobject = roottreeobject;
};


NodeClass *TreeClass::getrootclass() {
    return this->roottreeobject;
};


void TreeClass::consoleoutputtreeclass() {
    consolenodelist(this->roottreeobject);
};


void TreeClass::consolenodelist(NodeClass *nodeclass) {
  if (nodeclass == nullptr) {
      return;
  }


    std::cout<<nodeclass->get_squirrel()->get_name()<<std::endl;
    consolenodelist(nodeclass->leftobject());
    consolenodelist(nodeclass->rightobject());




};
