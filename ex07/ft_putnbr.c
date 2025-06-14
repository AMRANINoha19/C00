#include <unistd.h>
void ft_putchar(char c){
    write(1,&c,1);
}
void ft_putnbr(int nb){
    if(nb==-2147483648){
        write(1,"-2147483648\n",12);
    }
    if(nb<0){
        ft_putchar('-');
        nb = -nb;
    }
    if(nb>=10){
        ft_putnbr(nb/10);
        ft_putchar(nb%10+'0');
    }
    if(nb<9){
        ft_putchar(nb+'0');
    }
}

int main(){
    ft_putnbr(-5);
    ft_putchar('\n');
    ft_putnbr(-55);
    ft_putchar('\n');
    ft_putnbr(4);
    ft_putchar('\n');
    ft_putnbr(42);
    ft_putchar('\n');
    return 0;
}