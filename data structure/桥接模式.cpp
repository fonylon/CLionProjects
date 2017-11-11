//
// Created by 风林 on 2017/11/10.
//

#include <iostream>

using namespace std;

class Company {
public:
    virtual void name() = 0;
    virtual ~Company(){}
};

class Ali : public Company {
public:
    void name() override {
        cout << "ali" << endl;
    }
};

class Yunxin : public Company {
public:
    void name() override {
        cout << "Yunxin" << endl;
    }
};

class Sender {
public:
    virtual void singleSend() = 0;

    virtual void batchSend() = 0;

    virtual ~Sender(){}
};

class EmailSender : public Sender {
private:
    Company *company;
public:
    void singleSend() override {
        this->company->name();
        cout << "email singleSend" << endl;
    }

    void batchSend() override {
        this->company->name();
        cout << "email batchSend" << endl;
    }

public:
    EmailSender(Company *company) : company(company) {}
};

class SmsSender : public Sender {
private:
    Company *company;
public:
    void singleSend() override {
        this->company->name();
        cout << "sms singleSend" << endl;
    }

    void batchSend() override {
        this->company->name();
        cout << "sms batchSend" << endl;
    }

public:
    SmsSender(Company *company) : company(company) {}
};

class AliSmsSender : public Ali {
public:
    void singleSend() {
        name();
        cout << "sms singleSend" << endl;
    }

    void batchSend() {
        name();
        cout << "sms singleSend" << endl;
    }
};

class YunxinSmsSender : public Yunxin {
public:
    void singleSend() {
        name();
        cout << "sms singleSend" << endl;
    }

    void batchSend() {
        name();
        cout << "sms singleSend" << endl;
    }
};


int main桥接() {
    YunxinSmsSender *yunxinSmsSender = new YunxinSmsSender;
    yunxinSmsSender->singleSend();
    AliSmsSender *aliSmsSender = new AliSmsSender;
    aliSmsSender->singleSend();
    cout << "=======================================" << endl;
    Ali *ali = new Ali;
    Yunxin *yunxin = new Yunxin;
    Sender *sender = new SmsSender(ali);
    sender->singleSend();
    delete sender;
    sender = new SmsSender(yunxin);
    sender->singleSend();
    delete sender;
    delete ali;

    return 0;
}