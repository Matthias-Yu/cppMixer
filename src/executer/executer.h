// #ifndef EXECUTER_H
// #define EXECUTER_H

// #include "build/mixer.pb.h"
// #include "context.h"
// #include <error.h>
// #include <iostream>
// #include <string>

// class ExecutableNode {
// public:
//   virtual ~ExecutableNode(){};
//   virtual error init() = 0;
//   virtual err::Error handle(executor::Context *ctx, const RecommendRequest *req,
//                             Exchange &exchange, const Attributes &attr) = 0;
//   virtual void abtest(Attributes &ori_attr, const ABTestParam &exp_attr) = 0;
//   virtual void downgrade(executor::Context &ctx, const RcmdReq *req,
//                          Attributes &ori_attr,
//                          const downgrade::DowngradeParam &downgrade_param) {};
//   virtual void prepare(executor::Context *ctx, const RcmdReq *req,
//                        const workflow::Attributes &attr) {};
//   virtual bool intercept(executor::Context *ctx, const RcmdReq *req,
//                          Exchange &exchange, const Attributes &attr) {
//     return false;
//   };
// };

// class ExecuteNode {
// protected:
//   int nodeId;
//   std::string description;

// public:
//   // 构造函数
//   ExecuteNode(int id, const std::string &desc)
//       : nodeId(id), description(desc) {}

//   // 虚析构函数，确保派生类正确析构
//   virtual ~ExecuteNode() {}

//   // 纯虚函数，派生类必须实现
//   virtual void handle() = 0;

//   // 获取节点 ID
//   int getNodeId() const { return nodeId; }

//   // 获取描述信息
//   std::string getDescription() const { return description; }
// };

// #endif // EXECUTER_H