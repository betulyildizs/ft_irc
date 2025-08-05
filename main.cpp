#include "ft_irc.hpp"

int is_valid_port(char *port, int &irc_port)
{
    int i;
    int port_num;

    i = 0;
    while(port[i])
    {
        if (!ft_isdigit(port[i]))
            return 1;
        i++;
    }
    port_num = ft_atoi(port);
    if (port_num < 1024 || port_num > 65535)
        return 1;
    irc_port = port_num;
    return 0;
}

int is_invalid_password(char *password, std::string &irc_password)
{
    int i;
    if (!password)
        return 1;
    i = 0;
    while (password[i])
    {
        if (ft_isspace(password[i]))
            return 1; //pdf'te istemiyor ama olması gereken temel bir kontrol
        i++;
    }
    irc_password = password;
    return 0;
}

int check_arg(t_error &error, int ac, char **av, t_irc &irc)
{
    if (ac != 3)
        error.wrong_nbr_of_args = true;
    if (is_valid_port(av[1], irc.port))
        error.invalid_port = true;
    if (is_invalid_password(av[2], irc.password))
        error.invalid_password = true;
    if (error.wrong_nbr_of_args || error.invalid_port 
            || error.invalid_password)
        return 1;
    return 0;
}   

int main(int ac, char **av)
{
    t_irc irc;
    t_error error;

    initialize_error(error);
    if (check_arg(error, ac, av, irc))
    {
        err(error);
        return 1;
    }
    return 0;
}