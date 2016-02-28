

namespace muaiwu
{
namespace sockets
{
int createNonBlockingSocket(sa_family_t family);
int bind(int fd,const struct sockaddr* addr);
int connect(int fd,const struct sockaddr* addr);
int listen(int fd);
int accept(int fd,struct sockaddr* addr);
ssize_t write(int fd,const void* buf,size_t count);
ssize_t read(int fd,void* buf,size_t count);
}
}
