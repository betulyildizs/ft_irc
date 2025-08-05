#ifndef FT_IRC_HPP
#define FT_IRC_HPP

#include <iostream>

typedef struct s_error
{
    bool wrong_nbr_of_args;
    bool invalid_port;
    bool invalid_password;
} t_error;

typedef struct s_irc
{
    int port;
    std::string password;
} t_irc;

void initialize_error(t_error &error);
int	ft_isdigit(int y);
void err(t_error error);
int check_arg(t_error &error, int ac, char **av);
int is_valid_port(char *port);
int is_invalid_password(char *password);
int	ft_isascii(int y);
int ft_isspace(int y);
int	ft_atoi(const char *by);

#endif
