
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0045ae90(int param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ISystem *pIVar5;
  int iVar6;
  size_t sVar7;
  int iVar8;
  float unaff_retaddr;
  undefined1 local_80 [128];
  
  cVar2 = FUN_004c4810();
  if (cVar2 != '\0') {
    *(undefined1 *)(param_1 + 0x338) = 0;
    iVar3 = FUN_0043bbe0();
    iVar8 = 0;
    uVar4 = FUN_004c4830();
    pIVar5 = Universe::get_system(uVar4);
    if (pIVar5 != (ISystem *)0x0) {
      iVar8 = (**(code **)(*(int *)pIVar5 + 0xc))();
    }
    if ((iVar3 != 0) && (iVar8 != 0)) {
      FUN_004347e0(DAT_0067eca8,0x55c,local_80,0x80);
      iVar6 = DAT_006119f8 / 2;
      FUN_004347e0(DAT_0067eca8,iVar3,&DAT_0066dc60,iVar6);
      FUN_004347e0(DAT_0067eca8,iVar8,&DAT_0066dc60 + iVar6,DAT_006119f8 / 2);
      swprintf(&DAT_0066fc60,(size_t)local_80,&DAT_0066dc60);
      (*(code *)PTR_FUN_00616420)(&DAT_0066fc60);
      (**(code **)(**(int **)(param_1 + 0x32c) + 0xa8))(0x1d,&DAT_0066fc60,0);
      sVar7 = wcslen(&DAT_0066fc60);
      if ((_DAT_005c7474 < unaff_retaddr) &&
         (fVar1 = unaff_retaddr - ((float)(int)sVar7 * _DAT_005ce928 + *(float *)(param_1 + 0x330)),
         *(float *)(param_1 + 0x334) = fVar1, fVar1 < _DAT_005c7474)) {
        *(undefined4 *)(param_1 + 0x334) = 0;
      }
    }
  }
  return;
}

