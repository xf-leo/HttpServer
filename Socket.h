#ifndef _SOCKET_H_
#define _SOCKET_H_

#include <sys/socket.h>

class Socket
{
  public:
    explicit Socket(int fd);
    ~Socket();
  
    int getfd() const;
    
  private:
    const int sockfd_;
}


#endif
