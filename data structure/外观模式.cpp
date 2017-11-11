//
// Created by 风林 on 2017/11/11.
//

#include <iostream>

using namespace std;

class CPU {
public:
    void startup() {
        cout << "cpu startup" << endl;
    }

    void shutdown() {
        cout << "cpu shutdown" << endl;
    }
};

class Disk {
public:
    void startup() {
        cout << "disk startup" << endl;
    }

    void shutdown() {
        cout << "disk shutdown" << endl;
    }
};

class Memory {
public:
    void startup() {
        cout << "memory startup" << endl;
    }

    void shutdown() {
        cout << "memory shutdown" << endl;
    }
};

class Computer {
public:
    Computer() {
        cpu = new CPU;
        memory = new Memory;
        disk = new Disk;
    }

    void startup() {
        this->cpu->startup();
        this->memory->startup();
        this->disk->startup();
    }

    void shutdown() {
        this->cpu->shutdown();
        this->memory->shutdown();
        this->disk->shutdown();
    }

    ~Computer() {
        delete this->cpu;
        delete this->memory;
        delete this->disk;
    }

private:
    CPU *cpu;
    Memory *memory;
    Disk *disk;
};

int main外观() {
    Computer * computer = new Computer;
    computer->startup();
    computer->shutdown();
    delete computer;
    return 0;
}