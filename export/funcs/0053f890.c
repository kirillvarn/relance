
/* public: double __thiscall CDeadReckonedVector::CalcError(class Vector const &) */

double __thiscall CDeadReckonedVector::CalcError(CDeadReckonedVector *this,Vector *param_1)

{
                    /* 0x13f890  35  ?CalcError@CDeadReckonedVector@@QAENABVVector@@@Z */
  return (double)SQRT((*(float *)(param_1 + 4) - *(float *)(this + 0x70)) *
                      (*(float *)(param_1 + 4) - *(float *)(this + 0x70)) +
                      (*(float *)(param_1 + 8) - *(float *)(this + 0x74)) *
                      (*(float *)(param_1 + 8) - *(float *)(this + 0x74)) +
                      (*(float *)param_1 - *(float *)(this + 0x6c)) *
                      (*(float *)param_1 - *(float *)(this + 0x6c)));
}

