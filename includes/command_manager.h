/*
** EPITECH PROJECT, 2022
** Bmy_ftp
** File description:
** command_manager
*/

#ifndef COMMAND_MANAGER_H_
    #define COMMAND_MANAGER_H_
    #include <command_list.h>

typedef struct my_ftp_s my_ftp_t;

command_list_t *query_command(char const *command_name, command_list_t *commands);

void command_quit(char **args, my_ftp_t *ftp, client_list_t *client);

#endif /* !COMMAND_MANAGER_H_ */
