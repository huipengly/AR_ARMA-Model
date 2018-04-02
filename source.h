//
// Created by huipengly on 2018/4/3.
//

#ifndef AR_ARMA_MODEL_SOURCE_H
#define AR_ARMA_MODEL_SOURCE_H

#include "head.h"

vector<Double> getAutoCov(vector<Double> data);
vector<Double> getAutoCor(vector<Double> data);
vector<Double> getBiasCor(vector<Double> AutoCor);

#endif //AR_ARMA_MODEL_SOURCE_H
