#define _CRT_SECURE_NO_WARNINGS 1

#pragma once

#include <iostream>
using namespace std;
#include "Worker.h"
#include <map>

#define MEISHU 0
#define CEHUA  1
#define YANFA  2

void ShowWorkerByGroup(multimap<int, Worker> &mWorker);