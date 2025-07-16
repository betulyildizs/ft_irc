#include "ft_irc.hpp"

int check_arg(char **av)
{
    int i;

    i = 0;
    while(av[1][i++])
    {
        if (!ft_isdigit(av[1][i]))
            return 1;
    }

}   

int main(int ac, char **av)
{
    if (check_arg(av))
    {
        err();
        return 1;
    }

    
}