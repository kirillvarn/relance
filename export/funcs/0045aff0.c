
void __fastcall FUN_0045aff0(int param_1)

{
  uint uVar1;
  ISystem *pIVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char unaff_retaddr;
  undefined1 auStack_80 [128];
  
  *(undefined1 *)(param_1 + 0x338) = 1;
  iVar4 = 0;
  uVar1 = FUN_004c4830();
  pIVar2 = Universe::get_system(uVar1);
  if (pIVar2 != (ISystem *)0x0) {
    iVar4 = (**(code **)(*(int *)pIVar2 + 0xc))();
  }
  switch(iVar4) {
  case 0x30001:
  case 0x30002:
  case 0x30003:
  case 0x30004:
  case 0x30005:
    iVar5 = 0x4e1;
    break;
  case 0x30006:
  case 0x30007:
  case 0x30008:
  case 0x30009:
  case 0x3000a:
  case 0x3000b:
    iVar5 = 0x4e2;
    break;
  case 0x3000c:
  case 0x3000d:
  case 0x3000e:
  case 0x3000f:
  case 0x30010:
  case 0x30011:
    iVar5 = 0x4e4;
    break;
  case 0x30012:
  case 0x30013:
  case 0x30014:
  case 0x30015:
  case 0x30016:
  case 0x30017:
  case 0x30018:
    iVar5 = 0x4e3;
    break;
  default:
    iVar5 = 0;
  }
  if (iVar4 != 0) {
    if (iVar5 == 0) {
      FUN_004347e0(DAT_0067eca8,0x55d,auStack_80,0x80);
      FUN_004347e0(DAT_0067eca8,iVar4,&DAT_0066dc60,DAT_006119f8 / 2);
      swprintf(&DAT_0066fc60,(size_t)auStack_80,&DAT_0066dc60);
      (*(code *)PTR_FUN_00616420)(&DAT_0066fc60);
      (**(code **)(**(int **)(param_1 + 0x32c) + 0xa8))(0x1d,&DAT_0066fc60,0);
      *(undefined4 *)(param_1 + 0x334) = 0x40000000;
    }
    else {
      FUN_004347e0(DAT_0067eca8,0x55e,auStack_80,0x80);
      iVar3 = DAT_006119f8 / 2;
      FUN_004347e0(DAT_0067eca8,iVar4,&DAT_0066dc60,iVar3);
      FUN_004347e0(DAT_0067eca8,iVar5,&DAT_0066dc60 + iVar3,DAT_006119f8 / 2);
      swprintf(&DAT_0066fc60,(size_t)auStack_80,&DAT_0066dc60);
      (*(code *)PTR_FUN_00616420)(&DAT_0066fc60);
      (**(code **)(**(int **)(param_1 + 0x32c) + 0xa8))(0x1d,&DAT_0066fc60,0);
    }
    if (unaff_retaddr != '\0') {
      *(undefined4 *)(param_1 + 0x334) = 0x40000000;
    }
  }
  return;
}

