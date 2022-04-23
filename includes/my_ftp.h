/*
** EPITECH PROJECT, 2022
** my_ftp
** File description:
** my ftp header
*/

#ifndef MY_FTP_H_
    #define MY_FTP_H_

typedef struct my_ftp_s{
    int port;
    int socket_fd;
    char *path;
}my_ftp_t;

#endif /* !MY_FTP_H_ */
