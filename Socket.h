#ifndef _SOCKET_H_
#define _SOCKET_H_

#include <sys/socket.h>

namespace muaiwu
{
class Socket
{
  public:
    explicit Socket(int fd);
    ~Socket();
  
    int getfd() const { return sockfd_; }
    
  private:
    const int sockfd_;
}
}

#endif
