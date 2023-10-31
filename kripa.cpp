#include"kanha.h"
int main(){
    complex c1,c2,c3;
    c1.set_data(1,2);
    //set_data function lai explicitly call nagare samma initialize nai hudaina but construtor tw object banne bittikai it can be
    //used to initialize ni tw :)
    //properly naya memory block banayera tesko address p ma rakhdidai xa constructor le so that aaru kunai illegal memory access nahos vanera

    c2.set_data(1,2);
    c3=c1.operator+(c2);
    c3.display_data();
    return 0;
}