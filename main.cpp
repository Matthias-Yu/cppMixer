#include <brpc/server.h>

int main() {
  brpc::Server server;

  brpc::ServerOptions options;
  if (server.Start(8000, &options) != 0) {
    LOG(ERROR) << "服务启动失败";
    return -1;
  }
  server.RunUntilAskedToQuit();
  return 0;
}