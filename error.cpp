#include "ft_irc.hpp"

void initialize_error(t_error &error)
{
    error.wrong_nbr_of_args = false;
    error.invalid_port = false;
    error.invalid_password = false;
}

void err(t_error error)
{
    if (error.wrong_nbr_of_args)
        std::cerr<<"Error: Wrong number of arguments.\n";
    if (error.invalid_port)
        std::cerr<<"Error: Invalid port.\n";
    if (error.invalid_password)
        std::cerr<<"Error: Invalid password.\n";
}
