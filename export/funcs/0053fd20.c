
/* public: class Vector __thiscall CRemotePhysicsSimulation::GetLatestUpdate(void) */

void __thiscall CRemotePhysicsSimulation::GetLatestUpdate(CRemotePhysicsSimulation *this)

{
  undefined4 *in_stack_00000004;
  
                    /* 0x13fd20  42  ?GetLatestUpdate@CRemotePhysicsSimulation@@QAE?AVVector@@XZ */
  *in_stack_00000004 = *(undefined4 *)(this + 0x10);
  in_stack_00000004[1] = *(undefined4 *)(this + 0x14);
  in_stack_00000004[2] = *(undefined4 *)(this + 0x18);
  return;
}

