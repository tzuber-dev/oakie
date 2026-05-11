#include <iostream>

#include "src/hello.hpp"



int main() {

    string rootid;
    string item2;
    string item1;
    string secondside;
    string firstside;


    std::cout<<"Please provide the root squirrel naming: ";
    getline(std::cin,rootid);


    std::cout<<"Please provide the first item name for squirrel: ";
    getline(std::cin,item1);


    std::cout<<"Do you want item 1 to be on the left or right side?: ";
    getline(std::cin,firstside);


    std::cout<<"Please provide the second item name for squirrel: ";
    getline(std::cin,item2);


    std::cout<<"Do you want item 2 to be on the left or right side?: ";
    getline(std::cin,secondside);


    Squirrel rootidvar(rootid);
    Squirrel item1var(item1);
    Squirrel item2var(item2);


    NodeClass rootidvariable(&rootidvar);
    NodeClass item1variable(&item1var);
    NodeClass item2variable(&item2var);


    if (firstside == "left") {


        rootidvariable.leftside(&item1variable);

    }else {
        rootidvariable.rightside(&item1variable);
    };


    if (secondside == "left") {
        rootidvariable.leftside(&item2variable);
    }else {
        rootidvariable.rightside(&item2variable);
    };


    TreeClass ob1(&rootidvariable);
    std::cout<<"\n";
    std::cout<<"\n";


    std::cout<<"Traversing in the tree class from the root to leaves: "<<std::endl;
    std::cout<<"\n";
    std::cout<<"\n";

    ob1.consoleoutputtreeclass();
    std::cout<<"\n";
    std::cout<<"\n";


    std::cout<<"\n";
    std::cout<<"-------";
    std::cout<<"\n";
    std::cout<<"Root of your given squirrel is: ";
    std::cout<<"\n";
    std::cout<<"\n";
    std::cout<<ob1.getrootclass()->get_squirrel()->get_name()<<std::endl;
    std::cout<<"\n";
    std::cout<<"-------";
    std::cout<<"\n";



    if (rootidvariable.leftobject() != nullptr) {
        std::cout<<"\n";
        std::cout<<"\n";

        std::cout<<"Item for left sided squirrel: "<<std::endl;
        std::cout<<"\n";
        std::cout<<"\n";
        std::cout<<rootidvariable.leftobject()->get_squirrel()->get_name()<<std::endl;
        std::cout<<"\n";
        std::cout<<"-------";
        std::cout<<"\n";

    };


    if (rootidvariable.rightobject() != nullptr) {
        std::cout<<"\n";
        std::cout<<"\n";
        std::cout<<"Item for right sided squirrel: "<<std::endl;
        std::cout<<"\n";
        std::cout<<"-------";
        std::cout<<"\n";

        std::cout<<rootidvariable.rightobject()->get_squirrel()->get_name()<<std::endl;
        std::cout<<"\n";
        std::cout<<"-------";
        std::cout<<"\n";
    }






return 0;


}
