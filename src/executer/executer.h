#ifndef EXECUTE_NODE_H
#define EXECUTE_NODE_H

#include <iostream>
#include <string>

class ExecuteNode {
protected:
    int nodeId;
    std::string description;

public:
    // 构造函数
    ExecuteNode(int id, const std::string& desc) : nodeId(id), description(desc) {}
    
    // 虚析构函数，确保派生类正确析构
    virtual ~ExecuteNode() {}

    // 纯虚函数，派生类必须实现
    virtual void handle() = 0;

    // 获取节点 ID
    int getNodeId() const { return nodeId; }
    
    // 获取描述信息
    std::string getDescription() const { return description; }
};

#endif // EXECUTE_NODE_H