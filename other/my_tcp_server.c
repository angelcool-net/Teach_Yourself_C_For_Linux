#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <unistd.h>
#include <sys/socket.h>

#include <netinet/in.h>

int iSetOption = 1;

int main(){

    char server_message[256] = "You have reached the server";

    // create the server socket
    int server_socket;
    server_socket = socket(AF_INET,SOCK_STREAM,0);

    // SO_REUSEADDR allows the program to restart without delay ( don't wait for TIME_WAIT, see: netstat -panto  also see: ss -nato |grep 9002)
    setsockopt(server_socket, SOL_SOCKET, SO_REUSEADDR, (char*) &iSetOption, sizeof(iSetOption));

    // define the server address
    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(9002);
    server_address.sin_addr.s_addr = INADDR_ANY;

    // bind the socket to our speficied IP and port
    int bind_result = bind(server_socket, (struct sockaddr *) &server_address, sizeof(server_address));

    printf("bind result %d\n\n", bind_result);

    listen(server_socket, 5);

    int client_socket;
    client_socket = accept(server_socket, NULL, NULL);

    // send the message
    send(client_socket, server_message, sizeof(server_message), 0);

    // close the socket
    close(server_socket);

    return 0;
}
