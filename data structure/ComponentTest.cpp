//
// Created by 风林 on 2017/10/28.
//

//面向接口编程

#include <iostream>

using namespace std;

class CPU {
public:
    virtual void run() = 0;

    virtual ~CPU(){}
};

class Disk {
public:
    virtual void run() = 0;

    virtual ~Disk(){}
};

class Computer {
public:
    Computer(CPU *cpu, Disk *disk) {
        this->cpu = cpu;
        this->disk = disk;
    }

    void run() {
        this->disk->run();
        this->cpu->run();
    }

private:
    CPU *cpu;
    Disk *disk;
};


class InterCpu : public CPU {
public:
    virtual void run() {
        cout << "inter cpu running" << endl;
    }

    virtual ~InterCpu() {
        cout << "inter cpu destroy" << endl;
    }
};

class WestDisk : public Disk {
public:
    virtual void run() {
        cout << "west disk running" << endl;
    }

    virtual ~WestDisk() {
        cout << "west disk destroy" << endl;
    }
};


int mainComputer() {
    CPU *cpu = new InterCpu;
    Disk *disk = new WestDisk;
    Computer *computer = new Computer(cpu, disk);
    computer->run();
    delete computer;
    delete disk;
    delete cpu;
    return 0;
}