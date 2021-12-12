#include <iostream>
#define string std::string 

/*TWO WAYS FOR BUILD AN ARRAY DATA STRUCTURE*/

/*USING STRUCT*/

struct Array {
 /*DATA*/
 string name;
 int age;
};

/*USING CLASS */
class Array{

public:
 Array(string name);
 string search(string x);
 void insert(string elem );
 void delete(string element);

private:
 Array name[];
}

/*CLASS IMPLENTATION*/



int main(){
 /*STRUCT IMPLEMENTATION*/
 Array data1[3];
 data1[0].name = "johat";
 data1[0].age = 20;

 data1[1].name = "carol";
 data1[1].age = 15;
 
 data1[2].name = "sam";
 data1[2].age = 35;
 /*Simple, no so much functionality,is just pure variables*/
 /*print array element of struct implementation*/
 for(int i = 0 ; i<3; i ++){
  std::cout<<data1[i].age<<std::endl;
 }
 return 0;
}