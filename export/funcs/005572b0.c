
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005572b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 unaff_retaddr;
  int *piStack_20c;
  undefined4 auStack_208 [64];
  undefined1 auStack_108 [260];
  undefined4 uStack_4;
  
  piStack_20c = *(int **)Engine_exref;
  auStack_208[0] = param_3;
  puVar1 = (undefined4 *)(**(code **)(*piStack_20c + 0x90))();
  piStack_20c = (int *)0x40;
  FUN_00557170(uStack_4,unaff_retaddr,*puVar1,puVar1[1],puVar1[2],_DAT_005e129c,param_2,4,
               auStack_208,auStack_108,&piStack_20c);
  FUN_004102c0(auStack_208,piStack_20c,param_3,0);
  return;
}

