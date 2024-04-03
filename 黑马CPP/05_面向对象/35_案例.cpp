#include <iostream>

using namespace std;

class CPU {
public:
    virtual void calculate() = 0;
};

class GPU {
public:
    virtual void display() = 0;
};

class Memory {
public:
    virtual void store() = 0;
};

class IntelCPU : public CPU {
public:
    void calculate() {
        cout << "Intel CPU Calculating..." << endl;
    }
};

class AMDCPU : public CPU {
public:
    void calculate() {
        cout << "AMD CPU Calculating..." << endl;
    }
};

class NvidiaGPU : public GPU {
public:
    void display() {
        cout << "Nvidia GPU Displaying..." << endl;
    }
};

class AMDGPU : public GPU {
public:
    void display() {
        cout << "AMD GPU Displaying..." << endl;
    }
};

class SamsungMemory : public Memory {
public:
    void store() {
        cout << "Samsung Memory Storing..." << endl;
    }
};

class KingstonMemory : public Memory {
public:
    void store() {
        cout << "Kingston Memory Storing..." << endl;
    }
};

class Computer {
public:
    Computer(CPU *cpu, GPU *gpu, Memory *memory) {
        m_cpu = cpu; m_gpu = gpu; m_memory = memory;
    }

    void work() {
        m_cpu->calculate();
        m_gpu->display();
        m_memory->store();
    }

    CPU * m_cpu;
    GPU * m_gpu;
    Memory * m_memory;
};

int main(int argc, char const *argv[])
{
    CPU * cpu = new IntelCPU;
    GPU * gpu = new NvidiaGPU;
    Memory * memory = new SamsungMemory;

    Computer * computer = new Computer(cpu, gpu, memory);
    computer->work();

    delete computer;

    system("pause");
    return 0;
}
