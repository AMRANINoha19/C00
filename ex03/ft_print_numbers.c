#include <unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}

void ft_print_numbers(){
    char c='0'; 
    while(c<='9'){ 
        ft_putchar(c);
        c++; 
    }
    write(1,&c,1);
}

int main(){
    ft_print_numbers();
    return 0;
}