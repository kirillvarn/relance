
void __thiscall FUN_00539bc0(int param_1,Class param_2,Root *param_3)

{
  CObject *pCVar1;
  
  pCVar1 = CObject::Alloc(param_2);
  *(CObject **)(param_1 + 0x10) = pCVar1;
  Archetype::Root::create_instance(param_3,(IEngineInstance *)pCVar1);
  (**(code **)(**(int **)Engine_exref + 0x6c))
            (*(int **)Engine_exref,*(undefined4 *)(*(int *)(param_1 + 0x10) + 4),0,0);
  CBase::advise((CBase *)(param_1 + 0xc),true);
  return;
}

