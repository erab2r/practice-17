#include<stdio.h>
// void mello(){
//     printf("mello\n");
    
// }

// void gello(){
//     printf("gello\n");
//     mello();
// }

// void hello(){
//     printf("hello\n");
//     gello();
// }

// int main(){
//     printf("hi\n");
//     hello();
//     return 0;
// }

void f2(){
    printf("f1 ");
    
}

void f1(){
    
    printf("f2");
    f2();
    
}


int main(){
    printf("main\n");
    f1();

}


