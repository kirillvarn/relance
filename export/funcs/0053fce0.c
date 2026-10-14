
/* public: double __thiscall CRemotePhysicsSimulation::CalcPositionError(class Vector const &) */

double __thiscall
CRemotePhysicsSimulation::CalcPositionError(CRemotePhysicsSimulation *this,Vector *param_1)

{
                    /* 0x13fce0  36  ?CalcPositionError@CRemotePhysicsSimulation@@QAENABVVector@@@Z
                        */
  return (double)SQRT((*(float *)(param_1 + 4) - *(float *)(this + 0x78)) *
                      (*(float *)(param_1 + 4) - *(float *)(this + 0x78)) +
                      (*(float *)(param_1 + 8) - *(float *)(this + 0x7c)) *
                      (*(float *)(param_1 + 8) - *(float *)(this + 0x7c)) +
                      (*(float *)param_1 - *(float *)(this + 0x74)) *
                      (*(float *)param_1 - *(float *)(this + 0x74)));
}

