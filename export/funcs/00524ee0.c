
bool __thiscall FUN_00524ee0(int param_1,uint *param_2)

{
  CObject *pCVar1;
  
  pCVar1 = CObject::Find(param_2,0x1003);
  *(CObject **)(param_1 + 0x10) = pCVar1;
  if (pCVar1 != (CObject *)0x0) {
    CBase::advise((CBase *)(param_1 + 0xc),true);
  }
  return *(int *)(param_1 + 0x10) != 0;
}

