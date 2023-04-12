#include "Process.h"
#include <iostream>
using namespace std;
Process::Process()
{

}
ostream& operator<<(ostream& os, const Process& p)
{
	os << "PID: " << p.PID << " " << "AT: " << p.AT << " " << "CT: " << p.CT << " " << "N: " << p.N << " ";
	for (int i = 0; i < p.N; i++)
		os << "(" << p.IO_R[i] << "," << "" << p.IO_D[i] <<")";
	return os;
}

Process::Process(int at, int pid, int ct, int n, int* io_r, int* io_d)
{
	AT = at; PID = pid; CT = ct; N = n; IO_R = io_r; IO_D = io_d;
}
Process::Process(int at, int pid, int ct)
{
	AT = at; PID = pid; CT = ct; N = 0;
}

int Process::getAT()
{
	return AT;
}

int Process::getCT()
{
	return CT;
}
void Process::setCT(int newct)
{
	CT = newct;
}