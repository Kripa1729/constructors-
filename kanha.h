#ifndef kanha
#define kanha

#include<iostream>
#include<string.h>
 
 using namespace std;
 class complex{
private:
int a;
int b;
public:
void set_data(int,int);
void display_data();
complex operator+ (complex);
complex();
 };
 void complex::set_data(int x,int y){
a=x;
b=y;
 }
 void complex::display_data(){
    cout<<a<<b;
 }
 complex complex ::operator+(complex c){
    complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;
 }
 complex::complex(){
    cout<< "constructor is being called";
 }
 /*comlex::complex(int x,int y){
a=x;
b=y;
a and b are caller object ko a and b re 
 }
 now its compulsory to supply two values during creation of an object
 so we supply like this complex c1(1,1),c2(1,1),c3(0,0),complex temp(0,0);
 */
 /*
 c3; garda aaba error aauxa so we want ki error na aaos and then for that we need to
 make one more coonstructor which is non parameterized one
 complex(){a=0,b=0;}
 complex(int x){
    a=x;b=0;
 }
 so this is called constructor overloading as programemer can 
 provide multiple constructors in the class with the different signatures
 jaba programemr le class ma kunai pani constructor banaudiana taba
 complier creates an empty body and no argument construtor in the class
 called as default constructor 
 complex=c1;garda assign gareko vaye ni pass nai vairakheko xa 
 yo values and not only that its comlex type ko euta argument not int type ko dui ota 
 but kunai error ni aaudaina 
 yedi programer le class ma kunai ni coonstructor banauteko xaina
 vane compiler le aafno tarfa bata 2 ota constructor banaune kaam garxa
 default and copy
 but if default hamile garem vaye copy matra bachne vo
 also hamile copy ni  garem vaye bichara compiler le k garaos ra 
 kehi pani garaudaina
 jaba pani kunai class ko object banaudai xaam ra tehi calss ko object le teslai initialize gardai xaam vane copy constructor call hunxa
 c4=c2 this one isnot object creation yo tw assignment ko cde chaleko ho 
 complex(complex c){
    a=c.a;//left hand side ko variable jun object ko lagi chaleko ho constructor tesko ho vane right hand side ma jun object pass garem tesko a
    and b garaune khojeko ho
    b=c.b;
    but this will be error cause object c banxa complex class ko and tesma c1 pass hunxa so feri copy constructor call hune vayo 
    and this goes on and on and this becomes infinte recursion
    bahira ko wala field raixa or data memebers
 }
 */
 
#endif