//Read Main first

#include <stdio.h> 
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netdb.hj>
#include <sys/types.h>
#include <stdlib.h>
#include <netinet/in.h>

//We have to create structs for sockets
struct sockaddr_in 
    {
       short sin_family; //AF_INET or AF_INET6
       unsigned short sin_port; //htons 
       struct in_addr sin_addr; 
       char sin_zero[8]; // can be zero if you want to
       
    };
struct in_addr 
    {
        unsigned long s_addr; //load with inet_pton()
    };

struct sockaddr 
    {
        unsigned short sa_family;// address family, AF_
        char sa_data[14]; //14 bytes of protocol address
    };


int main (int argc, char *argv[])

{
    /* first gotta create the socket 
    This socket has the properties:

    Address Family == AF_INET == IPv4
    TCP Protocol == SOCK_STREAM
    0 == Protocol or IPPROTO_IP this is IP Protocol
    
    */
    int socket_desc;
    struct sockaddr_in server;

    socket_desc = socket(AF_INET, SOCK_STREAM, 0);

    if (socket_desc == -1)
        {
            printf("Could not create socket");
        }
//Now go to the structs above main

/*We need an IP Address and a port number */

struct sockaddr_in server_address;
server.sin_family = AF_INET;
server.sin_port = htons (80);
server.sin_addr.s_addr = (vortex.overthewire.org);
//connect to the remoter server
connection_status = (connect(socket_desc, (struct sockaddr*)&server, sizeof(server));
if (connection_status =-1)
    {
        printf("Error connecting to remote socket");
    }

//Receive data from the server
char server_response[256];
recv(network_socket, &server_response,sizeof(server_response),0);

//print out the server's response
printf("The server sent the data: %s",server_response);

//and then close the socket
close(sock);


return 0;

}