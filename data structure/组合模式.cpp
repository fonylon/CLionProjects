//
// Created by 风林 on 2017/11/11.
//

#include <list>
#include <iostream>

using namespace std;

//class AbstractFile {
//public:
//    virtual void add(AbstractFile *abstractFile) = 0;
//
//    virtual void remove(AbstractFile *abstractFile) = 0;
//
//    virtual void operate() = 0;
//
//    virtual list<AbstractFile *> *getChild() = 0;
//};
//
//class File : public AbstractFile {
//public:
//    virtual void operate() {
//        cout << this->name << endl;
//    }
//
//    void add(AbstractFile *abstractFile) override {
//    }
//
//    void remove(AbstractFile *abstractFile) override {
//    }
//
//    list<AbstractFile *> *getChild() override {
//    }
//
//private:
//    string name;
//public:
//    File(const string &name) : name(name) {}
//};
//
//class Directory : public AbstractFile {
//public:
//    virtual void operate() {
//        cout << this->name << endl;
//    }
//
//    void add(AbstractFile *abstractFile) override {
//        this->files->push_back(abstractFile);
//    }
//
//    void remove(AbstractFile *abstractFile) override {
//        this->files->remove(abstractFile);
//    }
//
//    list<AbstractFile *> *getChild() override {
//        return this->files;
//    }
//
//private:
//    string name;
//    list<AbstractFile *> *files;
//public:
//    Directory(const string &name) : name(name) {
//        this->files = new list<AbstractFile *>;
//    }
//};


//class UnsupportedOperationException : public std::exception {
//
//};

int main() {

//    AbstractFile *root = new Directory("C盘");
//    AbstractFile *file1 = new File("1.txt");
//    AbstractFile *directory1 = new Directory("文件夹1");
//    root->add(file1);
//    root->add(directory1);
//    root->operate();
    return 0;
}
