#define _CRT_SECURE_NO_WARNINGS 1

#pragma once

#include "Worker.h"
#include <vector>
#include <map>

#define MEISHU 0
#define CEHUA  1
#define YANFA  2

void GetGroup(vector<Worker> &vWorker, multimap<int, Worker> &mWorker);