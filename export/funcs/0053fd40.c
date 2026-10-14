
/* public: class Vector __thiscall CRemotePhysicsSimulation::GetSample(int) */

void __thiscall CRemotePhysicsSimulation::GetSample(CRemotePhysicsSimulation *this,int param_1)

{
  CRemotePhysicsSimulation *pCVar1;
  int in_stack_00000008;
  
                    /* 0x13fd40  44  ?GetSample@CRemotePhysicsSimulation@@QAE?AVVector@@H@Z */
  pCVar1 = this + in_stack_00000008 * 0xc + 0x10;
  *(undefined4 *)param_1 = *(undefined4 *)pCVar1;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(pCVar1 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(pCVar1 + 8);
  return;
}

