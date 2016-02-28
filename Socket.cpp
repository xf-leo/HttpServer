#include "Socket.h"

Socket::Socket(int fd)
  :sockfd_(fd)
{}

Socket::~Socket()
{
  ::close(sockfd_);
}
