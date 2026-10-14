
bool __thiscall FUN_0053ec70(int param_1,uint *param_2)

{
  CObject *pCVar1;
  
  pCVar1 = CObject::Find(param_2,0xa7);
  *(CObject **)(param_1 + 0x10) = pCVar1;
  CBase::advise((CBase *)(param_1 + 0xc),true);
  return *(int *)(param_1 + 0x10) != 0;
}

