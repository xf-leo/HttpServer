#include <sys/socket.h>
#include "SocketAPI.h"

#define MAXCONN 10;

//using namespace muaiwu::sockets

int sockets::createNonBlockingSocket(sa_family_t family)
{
  int sockfd = ::socket(family,SOCK_STREAM | SOCK_NONBLOCK | SOCK_CLOEXEC,IPPROTO_IP);
  if (sockfd < 0)
    return 0;
  
  return sockfd;
}

int sockets::bind(int fd,const struct sockaddr* addr)
{
  int ret = ::bind(fd,addr,static_cast<socklen_t>(sizeof(struct sockaddr_in)));
  if (ret < 0)
    return 0;
}

int sockets::connect(int fd,const struct sockaddr* addr)
{
  return ::connect(fd,addr,static_cast<socklen_t>(sizeof(struct sockaddr_in)));
}

int listen(int fd)
{
  int ret = ::listen(fd,MAXCONN);
  if (ret < 0)
    return 0;
}

int accept(int fd,struct sockaddr* addr);
{
  socklen_t addrlen = static_cast<socklen_t>(sizeof(struct sockaddr));
  int connfd = accept(fd,addr,&addrlen);
  if (connfd < 0)
    return 0;
}

ssize_t sockets::write(int fd,const void* buf,size_t count)
{
  return ::write(fd,buf,count);
}

ssize_t sockets::read(int fd,void* buf,size_t count)
{
  return ::read(fd,buf,count);
}
