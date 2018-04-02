//
// Created by huipengly on 2018/4/3.
//

#ifndef AR_ARMA_MODEL_MAT_H
#define AR_ARMA_MODEL_MAT_H
#include "head.h"

vector<vector<Double> > t(vector<vector<Double> > x);
vector<vector<Double> > mulMat(vector<vector<Double> > tx, vector<vector<Double> > x);
Double det(vector<vector<Double> > x);
vector<vector<Double> > delMat(vector<vector<Double> > x,int r,int c);
vector<vector<Double> > A(vector<vector<Double> > x);
vector<vector<Double> > inv(vector<vector<Double> > x);
vector<vector<Double> > ConRows(vector<vector<Double> > x, vector<vector<Double> > y);
vector<vector<Double> > ConCols(vector<vector<Double> > x, vector<vector<Double> > y);
void test_Mat();
#endif //AR_ARMA_MODEL_MAT_H
