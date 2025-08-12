#pragma once
/**
 * @file	chain_of_responsibility.h
 * @brief	责任链模式
 * @note    - PassNotes
 * @author  gendloop
 */

// c++
#include <iostream>
#include <string>
#include <vector>
#include <memory>

struct Request {
    std::string content;
    Request(const std::string& _content)
        : content(_content)
    {}
};

struct Response {
    bool accept;
};

class Beauty {
public:
    virtual ~Beauty() = default;
    void pass(const Request& req, Response& res) {
        reply(req, res);
        if (res.accept) {
            std::cout << "Congratulations!" << std::endl;
            return;
        }
        if (next_) {
            next_->pass(req, res);
        }
    }

    std::shared_ptr<Beauty> passTo(const std::shared_ptr<Beauty>& beauty) {
        next_ = beauty;
        return next_;
    }

protected:
    virtual void reply(const Request& req, Response& res) = 0;

private:
    std::shared_ptr<Beauty> next_ = nullptr;
};

class Beauty1 : public Beauty {
protected:
    void reply(const Request& req, Response& res) override {
        std::cout << "Beauty1 read the request, refused." << std::endl;
        res.accept = false;
    }
};

class Beauty2 : public Beauty {
protected:
    void reply(const Request& req, Response& res) override {
        std::cout << "Beauty2 read the request, refused." << std::endl;
        res.accept = false;
    }
};

class Beauty3 : public Beauty {
protected:
    void reply(const Request& req, Response& res) override {
        std::cout << "Beauty3 read the request, accepted." << std::endl;
        res.accept = true;
    }
};

class Beauty4 : public Beauty {
protected:
    void reply(const Request& req, Response& res) override {
        std::cout << "Beauty4 read the request, refused." << std::endl;
        res.accept = false;
    }
};

class PassNotes {
public:
    void passNotes(const std::string& content);

private:
    Response res_;
};
