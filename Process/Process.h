#pragma once
#include"/college/sophomore/Semester 2/data structure/Multiprocessor-master/Multiprocessor-master/Data Structures/linkedlist.h"

class Process
{
private:
	string State = "NEW";
	int AT, PID, CT, N;
	int* IO_R;
	int* IO_D;
	//
	int RT;
	int TT;
	int TRT;
	int WT;
public:
	Process();
	Process(int at, int pid, int ct, int n, int* io_r, int* io_d);
	Process(int at, int pid, int ct);
	friend ostream& operator<<(ostream& os, const Process& p);
	int getAT();
	int getCT();
	void setCT(int newct);

	

};